// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersPawn.h"
#include "JumpStartersWheelFront.h"
#include "JumpStartersWheelRear.h"
#include "JumpStartersHud.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/TextRenderComponent.h"
#include "Materials/Material.h"
#include "GameFramework/Controller.h"
#include "Math/UnrealMathUtility.h"
#include "Kismet/KismetMathLibrary.h"
#include "Curves/RichCurve.h"

#ifndef HMD_MODULE_INCLUDED
#define HMD_MODULE_INCLUDED 0
#endif

// Needed for VR Headset
#if HMD_MODULE_INCLUDED
#include "IXRTrackingSystem.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#endif // HMD_MODULE_INCLUDED

const FName AJumpStartersPawn::LookUpBinding("LookUp");
const FName AJumpStartersPawn::LookRightBinding("LookRight");

#define LOCTEXT_NAMESPACE "VehiclePawn"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

AJumpStartersPawn::AJumpStartersPawn()
{
	// Car mesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CarMesh(TEXT("/Game/Vehicle/Models/BlueCar1/BlueCar.BlueCar"));
	GetMesh()->SetSkeletalMesh(CarMesh.Object);

	static ConstructorHelpers::FClassFinder<UObject> AnimBPClass(TEXT("/Game/Vehicle/Models/BlueCar1/BlueCar_Anim"));
	GetMesh()->SetAnimInstanceClass(AnimBPClass.Class);

	// Setup exhaust component and vehicle collider for external events
	static ConstructorHelpers::FClassFinder<AActor> ExhaustBPClass(TEXT("/Game/Sounds/CarSFX/Default/DefaultExhaustEmitter"));
	ExhaustEmitter = CreateDefaultSubobject<UChildActorComponent>(TEXT("ExhaustEmitter0"));
	ExhaustEmitter->SetChildActorClass(ExhaustBPClass.Class);
	ExhaustEmitter->SetRelativeLocation(FVector(-233.0f, 0.0f, 60.0f));
	ExhaustEmitter->SetupAttachment(GetMesh());
	
	static ConstructorHelpers::FClassFinder<AActor> ColliderBPClass(TEXT("/Game/RaceSystem/VehicleCollider"));
	VehicleCollider = CreateDefaultSubobject<UChildActorComponent>(TEXT("VehicleCollider0"));
	VehicleCollider->SetChildActorClass(ColliderBPClass.Class);
	VehicleCollider->SetRelativeScale3D(FVector(6.23f, 2.75f, 2.0f));
	VehicleCollider->SetRelativeLocation(FVector(0.0f, 0.0f, 77.0f));
	VehicleCollider->SetupAttachment(GetMesh());

	static ConstructorHelpers::FClassFinder<AActor> WallColliderBPClass(TEXT("/Game/RaceSystem/WallSoundCollider"));
	WallSoundCollider = CreateDefaultSubobject<UChildActorComponent>(TEXT("WallSoundCollider0"));
	WallSoundCollider->SetChildActorClass(WallColliderBPClass.Class);
	WallSoundCollider->SetRelativeScale3D(FVector(6.75f, 3.5f, 1.15f));
	WallSoundCollider->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	WallSoundCollider->SetupAttachment(GetMesh());
	
	// Simulation
	UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());

	check(Vehicle4W->WheelSetups.Num() == 4);

	Vehicle4W->WheelSetups[0].WheelClass = UJumpStartersWheelFront::StaticClass();
	Vehicle4W->WheelSetups[0].BoneName = FName("FrontLeft_Wheel");
	Vehicle4W->WheelSetups[0].AdditionalOffset = FVector(153.f, -100.f, 33.f);

	Vehicle4W->WheelSetups[1].WheelClass = UJumpStartersWheelFront::StaticClass();
	Vehicle4W->WheelSetups[1].BoneName = FName("FrontRight_Wheel");
	Vehicle4W->WheelSetups[1].AdditionalOffset = FVector(153.f, 100.f, 33.f);

	Vehicle4W->WheelSetups[2].WheelClass = UJumpStartersWheelRear::StaticClass();
	Vehicle4W->WheelSetups[2].BoneName = FName("RearLeft_Wheel");
	Vehicle4W->WheelSetups[2].AdditionalOffset = FVector(-153.f, -100.f, 33.f);

	Vehicle4W->WheelSetups[3].WheelClass = UJumpStartersWheelRear::StaticClass();
	Vehicle4W->WheelSetups[3].BoneName = FName("RearRight_Wheel");
	Vehicle4W->WheelSetups[3].AdditionalOffset = FVector(-153.f, 100.f, 33.f);

	// Setup engine, differential, transmission, gears, and nav agent props with specific values
	FVehicleEngineData JumpStartersEngine;
	FVehicleDifferential4WData JumpStartersDifferential;
	FVehicleTransmissionData JumpStartersTransmission;
	TArray<FVehicleGearData> JumpStartersGears;
	FNavAgentProperties JumpStartersNavAgent;

	JumpStartersEngine.MaxRPM = 5500.0f;
	JumpStartersEngine.MOI = 1.0f;
	JumpStartersEngine.DampingRateFullThrottle = 0.15f;
	JumpStartersEngine.DampingRateZeroThrottleClutchEngaged = 2.0f;
	JumpStartersEngine.DampingRateZeroThrottleClutchDisengaged = 0.35f;
	JumpStartersEngine.TorqueCurve.GetRichCurve()->Reset();
	JumpStartersEngine.TorqueCurve.GetRichCurve()->AddKey(0.0f, 2000.0f);
	JumpStartersEngine.TorqueCurve.GetRichCurve()->AddKey(2500.0f, 3000.0f);
	JumpStartersEngine.TorqueCurve.GetRichCurve()->AddKey(5500.0f, 2500.0f);

	JumpStartersDifferential.DifferentialType = EVehicleDifferential4W::LimitedSlip_4W;
	JumpStartersDifferential.FrontRearSplit = 0.6f;
	JumpStartersDifferential.FrontLeftRightSplit = 0.5f;
	JumpStartersDifferential.RearLeftRightSplit = 0.5f;
	JumpStartersDifferential.CentreBias = 1.3f;
	JumpStartersDifferential.FrontBias = 1.3f;
	JumpStartersDifferential.RearBias = 1.3f;

	FVehicleGearData JumpStartersGear;
	JumpStartersGear.Ratio = 0.42;
	JumpStartersGear.DownRatio = 0.2;
	JumpStartersGear.UpRatio = 0.8;
	JumpStartersGears.Reset();
	JumpStartersGears.Add(JumpStartersGear);

	JumpStartersTransmission.bUseGearAutoBox = true;
	JumpStartersTransmission.GearSwitchTime = 0.1f;
	JumpStartersTransmission.GearAutoBoxLatency = 1.0;
	JumpStartersTransmission.FinalRatio = 4.0;
	JumpStartersTransmission.ReverseGearRatio = -4.0f;
	JumpStartersTransmission.NeutralGearUpRatio = 0.15f;
	JumpStartersTransmission.ClutchStrength = 10.0f;
	JumpStartersTransmission.ForwardGears = JumpStartersGears;

	JumpStartersNavAgent.AgentRadius = 280.0f;
	JumpStartersNavAgent.AgentHeight = 125.0f;

	Vehicle4W->EngineSetup = JumpStartersEngine;
	Vehicle4W->DifferentialSetup = JumpStartersDifferential;
	Vehicle4W->TransmissionSetup = JumpStartersTransmission;
	Vehicle4W->NavAgentProps = JumpStartersNavAgent;

	// Set up collisions
	//GetMesh()->OnComponentBeginOverlap.AddDynamic(this, &AJumpStartersPawn::OnOverlapBegin);

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->TargetOffset = FVector(0.f, 0.f, 200.f);
	SpringArm->SetRelativeRotation(FRotator(-12.5f, 0.f, 0.f));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 575.0f;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 7.f;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;

	// Create camera component 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
	Camera->FieldOfView = 100.f;

	// Create In-Car camera component 
	InternalCameraOrigin = FVector(110.0f, 0.0f, 120.0f);

	InternalCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("InternalCameraBase"));
	InternalCameraBase->SetRelativeLocation(InternalCameraOrigin);
	InternalCameraBase->SetupAttachment(GetMesh());

	InternalCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("InternalCamera"));
	InternalCamera->bUsePawnControlRotation = false;
	InternalCamera->FieldOfView = 100.f;
	InternalCamera->SetupAttachment(InternalCameraBase);

	//Setup TextRenderMaterial
	static ConstructorHelpers::FObjectFinder<UMaterial> TextMaterial(TEXT("Material'/Engine/EngineMaterials/AntiAliasedTextMaterialTranslucent.AntiAliasedTextMaterialTranslucent'"));
	
	UMaterialInterface* Material = TextMaterial.Object;

	// Create text render component for in car speed display
	InCarSpeed = CreateDefaultSubobject<UTextRenderComponent>(TEXT("IncarSpeed"));
	InCarSpeed->SetTextMaterial(Material);
	InCarSpeed->SetRelativeLocation(FVector(70.0f, -75.0f, 99.0f));
	InCarSpeed->SetRelativeRotation(FRotator(18.0f, 180.0f, 0.0f));
	InCarSpeed->SetupAttachment(GetMesh());
	InCarSpeed->SetRelativeScale3D(FVector(1.0f, 0.4f, 0.4f));

	// Create text render component for in car gear display
	InCarGear = CreateDefaultSubobject<UTextRenderComponent>(TEXT("IncarGear"));
	InCarGear->SetTextMaterial(Material);
	InCarGear->SetRelativeLocation(FVector(66.0f, -9.0f, 95.0f));	
	InCarGear->SetRelativeRotation(FRotator(25.0f, 180.0f,0.0f));
	InCarGear->SetRelativeScale3D(FVector(1.0f, 0.4f, 0.4f));
	InCarGear->SetupAttachment(GetMesh());
	
	// Colors for the incar gear display. One for normal one for reverse
	GearDisplayReverseColor = FColor(255, 0, 0, 255);
	GearDisplayColor = FColor(255, 255, 255, 255);

	// Colors for the in-car gear display. One for normal one for reverse
	GearDisplayReverseColor = FColor(255, 0, 0, 255);
	GearDisplayColor = FColor(255, 255, 255, 255);

	bInReverseGear = false;

	// Booleans for forces applied to the car
	bIsJumping = false;
	bIsBoosting = false;

	//sound-related code
	/*static ConstructorHelpers::FObjectFinder<USoundCue> JumpCueObject(TEXT("SoundCue'/Game/Sounds/CarSFX/jumping/springSC.springSC'"));
	static ConstructorHelpers::FObjectFinder<USoundCue> RBCueObject(TEXT("SoundCue'/Game/Sounds/CarSFX/jumping/rocketSC.rocketSC'"));
	if (RBCueObject.Succeeded() && ThisCarType == CarType::RocketBoosters)
		JumpCue = RBCueObject.Object;
	else if (JumpCueObject.Succeeded()) {
		JumpCue = JumpCueObject.Object;
	}*/
}

void AJumpStartersPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AJumpStartersPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AJumpStartersPawn::MoveRight);
	PlayerInputComponent->BindAxis("LookUp");
	PlayerInputComponent->BindAxis("LookRight");

	PlayerInputComponent->BindAction("Handbrake", IE_Pressed, this, &AJumpStartersPawn::OnHandbrakePressed);
	PlayerInputComponent->BindAction("Handbrake", IE_Released, this, &AJumpStartersPawn::OnHandbrakeReleased);
	PlayerInputComponent->BindAction("SwitchCamera", IE_Pressed, this, &AJumpStartersPawn::OnToggleCamera);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AJumpStartersPawn::OnResetVR); 

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AJumpStartersPawn::OnJump);
	PlayerInputComponent->BindAction("Boost", IE_Pressed, this, &AJumpStartersPawn::OnBoost);
	PlayerInputComponent->BindAction("Boost", IE_Released, this, &AJumpStartersPawn::OnBoostStop);
	PlayerInputComponent->BindAction("Reset", IE_Pressed, this, &AJumpStartersPawn::OnReset);
	PlayerInputComponent->BindAction("Drift", IE_Pressed, this, &AJumpStartersPawn::OnDrift);

	PlayerInputComponent->BindAction("JumpLeft", IE_Pressed, this, &AJumpStartersPawn::OnJumpLeft);
	PlayerInputComponent->BindAction("JumpRight", IE_Pressed, this, &AJumpStartersPawn::OnJumpRight);
}

void AJumpStartersPawn::MoveForward(float Val)
{
	GetVehicleMovementComponent()->SetThrottleInput(Val);
	CurrentThrottle = Val;
}

void AJumpStartersPawn::MoveRight(float Val)
{
	GetVehicleMovementComponent()->SetSteeringInput(Val);

	if (Val != 0.0f && bIsJumping) {
		// Allow rotation adjustment in mid-air
		DesiredYaw += Val * 0.1 * (ThisCarType == CarType::Spring ? (ThisCarType == CarType::Jacks ? HighEnergyCost : LowEnergyCost) : MediumEnergyCost);
	}

	RightTurnAxisVal = Val;
}

void AJumpStartersPawn::OnHandbrakePressed()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(true);
}

void AJumpStartersPawn::OnHandbrakeReleased()
{
	GetVehicleMovementComponent()->SetHandbrakeInput(false);
}

void AJumpStartersPawn::OnToggleCamera()
{
	EnableIncarView(!bInCarCameraActive);
}

void AJumpStartersPawn::EnableIncarView(const bool bState, const bool bForce)
{
	if ((bState != bInCarCameraActive) || ( bForce == true ))
	{
		bInCarCameraActive = bState;
		
		if (bState == true)
		{
			OnResetVR();
			Camera->Deactivate();
			InternalCamera->Activate();
		}
		else
		{
			InternalCamera->Deactivate();
			Camera->Activate();
		}
		
		InCarSpeed->SetVisibility(bInCarCameraActive);
		InCarGear->SetVisibility(bInCarCameraActive);
	}
}

//
void AJumpStartersPawn::ChangeCameraFOV(float DeltaFOV)
{
	if (DeltaFOV > 0.0f && CurrBoostFOV < MaxBoostFOV)
	{
		CurrBoostFOV += DeltaFOV;
		if (CurrBoostFOV > MaxBoostFOV) CurrBoostFOV = MaxBoostFOV;
		Camera->FieldOfView = CurrBoostFOV;
	}
	else if (DeltaFOV < 0.0f && CurrBoostFOV > MinBoostFOV)
	{
		CurrBoostFOV += DeltaFOV;
		if (CurrBoostFOV < MinBoostFOV) CurrBoostFOV = MinBoostFOV;
		Camera->FieldOfView = CurrBoostFOV;
	}
}

// Check the energy remaining and decide what player should be able to do
void AJumpStartersPawn::CheckEnergy(float Delta)
{
	bool bHasIncreasedFOV = false;

	if (RemainingEnergy > 0.0f)
	{
		if (bIsBoosting)
		{
			// Add a force and set a timer for when it ends?
			USkeletalMeshComponent* Car = GetMesh(); //Cast<UStaticMeshComponent>(this->GetRootComponent());
			if (Car)
			{
				//UE_LOG(LogTemp, Warning, TEXT("Energy"));
				FVector CarForward = Car->GetForwardVector();
				Car->AddForce(CarForward * BaseBoostForce * Car->GetMass());
				DecreaseEnergy(Delta);
			}

			// If boosting then increase FOV if not yet at max
			ChangeCameraFOV(Delta * 12.0f);

			bHasIncreasedFOV = true;
		}
	}
	else { bIsBoosting = false; }

	// If not accelerating from boost, lower FOV down to min over time
	if (!bHasIncreasedFOV)
	{
		ChangeCameraFOV(-12.0f * Delta);
	}
}

// Check if player is currently drifting and adjust car physics accordingly
void AJumpStartersPawn::CheckDrift(float Delta)
{
	// Add a force and set a timer for when it ends?
	USkeletalMeshComponent* Car = GetMesh(); //Cast<UStaticMeshComponent>(this->GetRootComponent());
	if (Car)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Energy"));
		FVector CarForward = Car->GetForwardVector();
		//Car->AddForce(CarForward * BaseDriftForce * Car->GetMass());

		FVector TurnTorque(0.0f, 0.0f, 1.0f);

		if (!bDriftingRight) TurnTorque.Z = -1.0f;

		FVector Velocity = Car->GetComponentVelocity();

		Velocity.Normalize();
		CarForward.Normalize();
		float DriftAngle = FVector::DotProduct(Velocity, CarForward);
		DriftAngle = FMath::RadiansToDegrees(acosf(DriftAngle));
		//UE_LOG(LogTemp, Warning, TEXT("Drift Angle: %f"), DriftAngle);

		//Car->AddTorqueInDegrees(TurnTorque * BaseDriftTorque * Car->GetMass());

		if (!bIsJumping && DriftAngle > 10.0f && DriftAngle < 75.0f && CurrentThrottle >= 0.05f)
		{
			bIsDrifting = true;
			Car->AddForce((Velocity + CarForward) * Car->GetMass() * DriftAngle * BaseDriftForce * Delta);
			IncreaseEnergy(Delta * (DriftAngle / 10.0f) / 20.0f);
		}
		else { bIsDrifting = false; }
	}
}

void AJumpStartersPawn::CheckJumpTimer(float Delta)
{
	if (!bIsJumping)
	{
		if (bIsJumpingLeft && bIsJumpingRight)
		{
			bIsJumpingLeft = false;
			bIsJumpingRight = false;
			JumpInputTimer = JumpInputTimerMax;
			DoJump(JumpType::Up);
		}
		else if ((bIsJumpingLeft || bIsJumpingRight) && JumpInputTimer > 0.0f) JumpInputTimer -= Delta;
		else if (bIsJumpingLeft && !bIsJumpingRight && JumpInputTimer <= 0.0f && ThisCarType == CarType::Jacks)
		{
			DoJump(JumpType::Left);
		}
		else if (!bIsJumpingLeft && bIsJumpingRight && JumpInputTimer <= 0.0f && ThisCarType == CarType::Jacks)
		{
			DoJump(JumpType::Right);
		}
		else {
			bIsJumpingLeft = false;
			bIsJumpingRight = false;
			JumpInputTimer = JumpInputTimerMax;
		}
	}
	else if (bIsJumping)
	{
		if (bIsJumpingLeft && bIsJumpingRight && ThisCarType == CarType::RocketBoosters)
		{
			bIsJumpingLeft = false;
			bIsJumpingRight = false;
			JumpInputTimer = JumpInputTimerMax;
			DoJump(JumpType::Up);
		}
		else if ((bIsJumpingLeft || bIsJumpingRight) && JumpInputTimer > 0.0f) JumpInputTimer -= Delta;
		else
		{
			bIsJumpingLeft = false;
			bIsJumpingRight = false;
			JumpInputTimer = JumpInputTimerMax;
		}
	}
}

void AJumpStartersPawn::DecreaseEnergy(float SubVal)
{
	RemainingEnergy = RemainingEnergy - SubVal < 0.0f ? 0.0f : RemainingEnergy - SubVal;
}

void AJumpStartersPawn::IncreaseEnergy(float AddVal)
{
	RemainingEnergy = RemainingEnergy + AddVal > TotalEnergy ? TotalEnergy : RemainingEnergy + AddVal;
}


void AJumpStartersPawn::Tick(float Delta)
{
	Super::Tick(Delta);

	// Setup the flag to say we are in reverse gear
	bInReverseGear = GetVehicleMovement()->GetCurrentGear() < 0;
	
	// Update the strings used in the hud (incar and onscreen)
	UpdateHUDStrings();

	// Set the string in the incar hud
	SetupInCarHUD();

	bool bHMDActive = false;
#if HMD_MODULE_INCLUDED
	if ((GEngine->XRSystem.IsValid() == true) && ((GEngine->XRSystem->IsHeadTrackingAllowed() == true) || (GEngine->IsStereoscopic3D() == true)))
	{
		bHMDActive = true;
	}
#endif // HMD_MODULE_INCLUDED
	if (bHMDActive == false)
	{
		if ( (InputComponent) && (bInCarCameraActive == true ))
		{
			FRotator HeadRotation = InternalCamera->GetRelativeRotation();
			HeadRotation.Pitch += InputComponent->GetAxisValue(LookUpBinding);
			HeadRotation.Yaw += InputComponent->GetAxisValue(LookRightBinding);
			InternalCamera->SetRelativeRotation(HeadRotation);
		}
	}

	CheckEnergy(Delta);

	RemainingEnergy = RemainingEnergy < 0.0f ? 0.0f : RemainingEnergy;

	if (bIsJumping)
	{
		FRotator InterpTo;
		InterpTo.Pitch = DesiredPitch;

		// If a Jacks car has jumped left or right, rotate car in air accordingly
		if (bHasJumpedLeft)
		{
			if (DesiredRoll <= -360.0f)
			{
				DesiredRoll = 0.0f;
				bHasJumpedLeft = false;
			}
			else DesiredRoll -= 360.0f * Delta;
		}
		else if (bHasJumpedRight)
		{
			if (DesiredRoll >= 360.0f)
			{
				DesiredRoll = 0.0f;
				bHasJumpedRight = false;
			}
			else DesiredRoll += 360.0f * Delta;
		}

		InterpTo.Roll = DesiredRoll;
		InterpTo.Yaw = GetActorRotation().Yaw + DesiredYaw;
		FRotator Interped = FMath::RInterpTo(GetActorRotation(), InterpTo, Delta, RotCorrectSpeed);

		// Set rotation to the interpolated ideal
		SetActorRotation(Interped, ETeleportType::TeleportPhysics);
	}
	else
	{
		DesiredPitch = 0.0f;
		DesiredRoll = 0.0f;
		DesiredYaw = 0.0f;
		bHasDoubleJumped = false;
	}

	// Delay between track resets
	if (ResetDelay > 0.0f) ResetDelay = ResetDelay - Delta;

	LapTime = LapTime + Delta;

	InAirTimerCheck = InAirTimerCheck + Delta;

	if (bStartJumpTimer) JumpTimer = JumpTimer + Delta;

	if (InAirTimerCheck >= 0.2f)
	{
		InAirTimerCheck = 0.0f;
		int32 WheelsInAir = 0;

		// Check if each wheel is in the air
		UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());
		for (int i = 0; i < Vehicle4W->Wheels.Num(); i++)
		{
			if (Vehicle4W->Wheels[i]->IsInAir()) WheelsInAir++;
		}

		if (WheelsInAir == 0)
		{
			if (JumpTimer > 1.0f)
			{
				JumpTimer = 0.0f;
				bStartJumpTimer = false;
			}
			bIsJumping = false;
		}
		else if (WheelsInAir >= 4)
		{
			bStartJumpTimer = true;
			bIsJumping = true;
		}
	}

	CheckJumpTimer(Delta);
	CheckDrift(Delta);
}

void AJumpStartersPawn::BeginPlay()
{
	Super::BeginPlay();

	bool bEnableInCar = false;
#if HMD_MODULE_INCLUDED
	bEnableInCar = UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled();
#endif // HMD_MODULE_INCLUDED
	EnableIncarView(bEnableInCar,true);

	RemainingEnergy = TotalEnergy;

	JumpTimer = 0.0f;
	ResetDelay = 0.0f;
	InAirTimerCheck = 0.0f;
	bStartJumpTimer = false;
	bHasDoubleJumped = false;

	LowEnergyCost = 0.3f;
	MediumEnergyCost = 0.6f;
	HighEnergyCost = 1.0f;
	
	ResetRotation = new FRotator(GetActorRotation());
	ResetLocation = new FVector(GetActorLocation());

	Lap = 1;

	DesiredPitch = 0.0f;
	DesiredRoll = 0.0f;
	DesiredYaw = 0.0f;

	CheckpointIDs.Empty();

	bIsDrifting = false;
	RightTurnAxisVal = 0.0f;
	bDriftingRight = false;

	bIsJumpingLeft = false;
	bIsJumpingRight = false;
	JumpInputTimer = JumpInputTimerMax;

	CurrentThrottle = 0.0f;
	bHasJumpedLeft = false;
	bHasJumpedRight = false;

	CurrBoostFOV = MinBoostFOV;
}

void AJumpStartersPawn::OnResetVR()
{
#if HMD_MODULE_INCLUDED
	if (GEngine->XRSystem.IsValid())
	{
		GEngine->XRSystem->ResetOrientationAndPosition();
		InternalCamera->SetRelativeLocation(InternalCameraOrigin);
		GetController()->SetControlRotation(FRotator());
	}
#endif // HMD_MODULE_INCLUDED
}

void AJumpStartersPawn::OnReset()
{
	if (ResetDelay <= 0.0f && ResetRotation && ResetLocation) {

		DesiredYaw = 0.0f;

		ResetRotation->Pitch = 0.0f;
		ResetRotation->Roll = 0.0f;

		GetMesh()->SetPhysicsLinearVelocity(FVector(0.0f, 0.0f, 0.0f));
		GetMesh()->SetPhysicsAngularVelocity(FVector(0.0f, 0.0f, 0.0f));

		// Reset the location and rotation of the car
		SetActorLocation(*ResetLocation + FVector(0.0f, 0.0f, 150.0f), false, nullptr, ETeleportType::TeleportPhysics);
		SetActorRotation(*ResetRotation, ETeleportType::TeleportPhysics);

		// Reset boosting and drifting values
		bIsBoosting = false;
		bIsDrifting = false;
		bIsJumpingLeft = false;
		bIsJumpingRight = false;

		// Start a timer to when the player should next be allowed to reset
		ResetDelay = 3.0f;
	}
}

void AJumpStartersPawn::DoJump(TEnumAsByte<JumpType> Jump)
{
	float EnergyScalar = 0.0f, ForceScalar = 1.0f;

	switch (ThisCarType) {
	case CarType::Jacks:
		EnergyScalar = MediumEnergyCost;
		break;
	case CarType::Spring:
		EnergyScalar = LowEnergyCost;
		break;
	case CarType::RocketBoosters:
		EnergyScalar = HighEnergyCost;
		break;
	}

	if (!bIsJumping && RemainingEnergy >= EnergyScalar)
	{
		// Add a force and set a timer for when it ends?
		USkeletalMeshComponent* Car = GetMesh();
		if (Car)
		{
			RemainingEnergy -= EnergyScalar;
			ForceScalar = 1.0f - EnergyScalar * 0.05;

			switch (Jump)
			{
			case JumpType::Up:
				Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector()) * BaseJumpForce * ForceScalar * Car->GetMass());
				break;
			case JumpType::Left:
				Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector() + (Car->GetRightVector() * -1)) * BaseJumpForce * ForceScalar * Car->GetMass());
				bHasJumpedLeft = true;
				break;
			case JumpType::Right:
				Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector() + Car->GetRightVector()) * BaseJumpForce * ForceScalar * Car->GetMass());
				bHasJumpedRight = true;
				break;
			default:
				Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector()) * BaseJumpForce * ForceScalar * Car->GetMass());
				break;
			}

			bIsJumping = true;
			bStartJumpTimer = true;
		}
	}

	// Double jump for rocket booster cars
	else if (bIsJumping && !bHasDoubleJumped && ThisCarType == CarType::RocketBoosters && RemainingEnergy >= HighEnergyCost && Jump == JumpType::Up) {
		USkeletalMeshComponent* Car = GetMesh();
		if (Car) {
			Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector()) * BaseJumpForce * (1.0f - HighEnergyCost * 0.05) * Car->GetMass());
			RemainingEnergy -= HighEnergyCost;
		}
		bHasDoubleJumped = true;
	}

	bIsJumpingLeft = false;
	bIsJumpingRight = false;
	JumpInputTimer = JumpInputTimerMax;
}

void AJumpStartersPawn::OnJump()
{
	DoJump(JumpType::Up);
}

void AJumpStartersPawn::OnJumpLeft()
{
	if (!bIsJumpingLeft)
	{
		bIsJumpingLeft = true;
	}
}

void AJumpStartersPawn::OnJumpRight()
{
	if (!bIsJumpingRight)
	{ 
		bIsJumpingRight = true;
	}
}

void AJumpStartersPawn::OnBoost()
{
	if (!bIsBoosting && RemainingEnergy > 0.0f) bIsBoosting = true;
}

void AJumpStartersPawn::OnBoostStop()
{
	if (bIsBoosting) bIsBoosting = false;
}

void AJumpStartersPawn::OnDrift()
{
	if (!bIsDrifting && RightTurnAxisVal != 0.0f)
	{
		if (RightTurnAxisVal > 0.0f) bDriftingRight = true;
		else bDriftingRight = false;

		bIsDrifting = true;
	}
	else bIsDrifting = false;
}


void AJumpStartersPawn::UpdateHUDStrings()
{
	float KPH = FMath::Abs(GetVehicleMovement()->GetForwardSpeed()) * 0.036f;
	int32 KPH_int = FMath::FloorToInt(KPH);

	float RoundedEnergy = FMath::FloorToFloat(RemainingEnergy * 10.0f) / 10.0f;
	RoundedEnergy = RoundedEnergy + 0.0f;

	// Using FText because this is display text that should be localizable
	SpeedDisplayString = FText::Format(LOCTEXT("SpeedFormat", "{0} km/h"), FText::AsNumber(KPH_int));

	EnergyDisplayString = FText::Format(LOCTEXT("EnergyFormat", "{0} energy"), FText::AsNumber(RoundedEnergy));
	
	if (bInReverseGear == true)
	{
		GearDisplayString = FText(LOCTEXT("ReverseGear", "R"));
	}
	else
	{
		int32 Gear = GetVehicleMovement()->GetCurrentGear();
		GearDisplayString = (Gear == 0) ? LOCTEXT("N", "N") : FText::AsNumber(Gear);
	}	
}

void AJumpStartersPawn::SetupInCarHUD()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	if ((PlayerController != nullptr) && (InCarSpeed != nullptr) && (InCarGear != nullptr) )
	{
		InCarGear = nullptr;
		InCarSpeed = nullptr;
		/*
		// Setup the text render component strings
		InCarSpeed->SetText(SpeedDisplayString);
		InCarGear->SetText(GearDisplayString);
		
		if (bInReverseGear == false)
		{
			InCarGear->SetTextRenderColor(GearDisplayColor);
		}
		else
		{
			InCarGear->SetTextRenderColor(GearDisplayReverseColor);
		}
		*/
	}
}

void AJumpStartersPawn::ChangeResetTransform(FVector CheckpointLocation, FRotator CheckpointRotation)
{
	*ResetLocation = CheckpointLocation;
	*ResetRotation = CheckpointRotation;
}

void AJumpStartersPawn::FinishedLap()
{
	// Only finish the lap if all checkpoints are passed through
	if (Checkpoints >= TotalCheckpoints)
	{
		// Set fastest lap to either current lap time or min of current and fastest
		FastestLap = Lap == 1 ? LapTime : FMath::Min(LapTime, FastestLap);
		Checkpoints = 0;
		CheckpointIDs.Empty();
		Lap++;
		LapTime = 0.0f;
	}

	if (Lap > TotalLaps)
	{
		
		// End race
	}
}

/*void AJumpStartersPawn::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Energy"));
}*/

#undef LOCTEXT_NAMESPACE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
