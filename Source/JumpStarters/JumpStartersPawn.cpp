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
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> CarMesh(TEXT("/Game/Vehicle/Sedan/Sedan_SkelMesh.Sedan_SkelMesh"));
	GetMesh()->SetSkeletalMesh(CarMesh.Object);

	static ConstructorHelpers::FClassFinder<UObject> AnimBPClass(TEXT("/Game/Vehicle/Sedan/Sedan_AnimBP"));
	GetMesh()->SetAnimInstanceClass(AnimBPClass.Class);
	
	// Simulation
	UWheeledVehicleMovementComponent4W* Vehicle4W = CastChecked<UWheeledVehicleMovementComponent4W>(GetVehicleMovement());

	check(Vehicle4W->WheelSetups.Num() == 4);

	Vehicle4W->WheelSetups[0].WheelClass = UJumpStartersWheelFront::StaticClass();
	Vehicle4W->WheelSetups[0].BoneName = FName("Wheel_Front_Left");
	Vehicle4W->WheelSetups[0].AdditionalOffset = FVector(0.f, -12.f, 0.f);

	Vehicle4W->WheelSetups[1].WheelClass = UJumpStartersWheelFront::StaticClass();
	Vehicle4W->WheelSetups[1].BoneName = FName("Wheel_Front_Right");
	Vehicle4W->WheelSetups[1].AdditionalOffset = FVector(0.f, 12.f, 0.f);

	Vehicle4W->WheelSetups[2].WheelClass = UJumpStartersWheelRear::StaticClass();
	Vehicle4W->WheelSetups[2].BoneName = FName("Wheel_Rear_Left");
	Vehicle4W->WheelSetups[2].AdditionalOffset = FVector(0.f, -12.f, 0.f);

	Vehicle4W->WheelSetups[3].WheelClass = UJumpStartersWheelRear::StaticClass();
	Vehicle4W->WheelSetups[3].BoneName = FName("Wheel_Rear_Right");
	Vehicle4W->WheelSetups[3].AdditionalOffset = FVector(0.f, 12.f, 0.f);

	// Set up collisions
	//GetMesh()->OnComponentBeginOverlap.AddDynamic(this, &AJumpStartersPawn::OnOverlapBegin);

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->TargetOffset = FVector(0.f, 0.f, 200.f);
	SpringArm->SetRelativeRotation(FRotator(-15.f, 0.f, 0.f));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 600.0f;
	SpringArm->bEnableCameraRotationLag = true;
	SpringArm->CameraRotationLagSpeed = 7.f;
	SpringArm->bInheritPitch = false;
	SpringArm->bInheritRoll = false;

	// Create camera component 
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
	Camera->FieldOfView = 90.f;

	// Create In-Car camera component 
	InternalCameraOrigin = FVector(0.0f, -40.0f, 120.0f);

	InternalCameraBase = CreateDefaultSubobject<USceneComponent>(TEXT("InternalCameraBase"));
	InternalCameraBase->SetRelativeLocation(InternalCameraOrigin);
	InternalCameraBase->SetupAttachment(GetMesh());

	InternalCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("InternalCamera"));
	InternalCamera->bUsePawnControlRotation = false;
	InternalCamera->FieldOfView = 90.f;
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
	PlayerInputComponent->BindAction("Reset", IE_Pressed, this, &AJumpStartersPawn::OnReset);
}

void AJumpStartersPawn::MoveForward(float Val)
{
	GetVehicleMovementComponent()->SetThrottleInput(Val);
}

void AJumpStartersPawn::MoveRight(float Val)
{
	GetVehicleMovementComponent()->SetSteeringInput(Val);

	if (Val != 0.0f && bIsJumping) {
		// Allow rotation adjustment in mid-air
		DesiredYaw += Val * 0.1 * (ThisCarType == CarType::Spring ? (ThisCarType == CarType::Jacks ? HighEnergyCost : LowEnergyCost) : MediumEnergyCost);

		if (!bHasDoubleJumped && ThisCarType == CarType::Jacks && RemainingEnergy >= MediumEnergyCost) {

			USkeletalMeshComponent* Car = GetMesh();
			float Mult = BaseJumpForce / 2.0f;

			if (Car) {
				if (Val < 0.0f) { Mult *= -1.0f; }
				Car->AddImpulse((Car->GetUpVector() + Car->GetRightVector()) * Mult * (1.0f - MediumEnergyCost * 0.05) * Car->GetMass());
				RemainingEnergy -= HighEnergyCost;
			}
			bHasDoubleJumped = true;
		}
	}
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

// Check the energy remaining and decide what player should be able to do
void AJumpStartersPawn::CheckEnergy(float Delta)
{
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
				RemainingEnergy -= Delta;
			}
		}
	}
	else
	{
		bIsBoosting = false;
		// Prompt user they are out of energy
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
		InterpTo.Pitch = 0.0f;
		InterpTo.Roll = 0.0f;
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

	if (InAirTimerCheck >= 1.0f)
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
			ResetRotation = new FRotator(GetActorRotation());
			ResetLocation = new FVector(GetActorLocation());

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

	//APlayerController* const MyPlayer = Cast<APlayerController>(GEngine->GetFirstLocalPlayerController(GetWorld()));
	//MyPlayer->SetTickableWhenPaused(true);
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
		//FRotator ResetRot = GetActorRotation();
		//ResetRot.Pitch = 0.0f;
		//ResetRot.Roll = 0.0f;
		DesiredYaw = 0.0f;

		ResetRotation->Pitch = 0.0f;
		ResetRotation->Roll = 0.0f;

		GetMesh()->SetPhysicsLinearVelocity(FVector(0.0f, 0.0f, 0.0f));
		GetMesh()->SetPhysicsAngularVelocity(FVector(0.0f, 0.0f, 0.0f));

		//SetActorLocationAndRotation(GetActorLocation() + FVector(0.0f, 0.0f, 150.0f), Upright, false, nullptr, ETeleportType::TeleportPhysics);
		//SetActorLocation(GetActorLocation() + FVector(0.0f, 0.0f, 150.0f), false, nullptr, ETeleportType::TeleportPhysics);
		SetActorLocation(*ResetLocation + FVector(0.0f, 0.0f, 150.0f), false, nullptr, ETeleportType::TeleportPhysics);
		//SetActorRotation(ResetRot, ETeleportType::TeleportPhysics);
		SetActorRotation(*ResetRotation, ETeleportType::TeleportPhysics);
		//RotateVector
		ResetDelay = 3.0f;
	}
}

void AJumpStartersPawn::OnJump()
{
	if (!bIsJumping && RemainingEnergy >= 1.0f)
	{
		// Add a force and set a timer for when it ends?
		USkeletalMeshComponent* Car = GetMesh();
		if (Car)
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
			RemainingEnergy -= EnergyScalar;
			ForceScalar = 1.0f - EnergyScalar * 0.05;

			Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector()) * BaseJumpForce * ForceScalar * Car->GetMass());
		}
		bIsJumping = true;
		bStartJumpTimer = true;
	}

	// Double jump for rocket booster cars
	else if (bIsJumping && !bHasDoubleJumped && ThisCarType == CarType::RocketBoosters && RemainingEnergy >= HighEnergyCost) {
		USkeletalMeshComponent* Car = GetMesh();
		if (Car) {
			Car->AddImpulse((Car->GetUpVector() + Car->GetForwardVector()) * BaseJumpForce * (1.0f - HighEnergyCost * 0.05) * Car->GetMass());
			RemainingEnergy -= HighEnergyCost;
		}
		bHasDoubleJumped = true;
	}
}

void AJumpStartersPawn::OnBoost()
{
	if (bIsBoosting || (!bIsBoosting && RemainingEnergy > 0.0f)) bIsBoosting = !bIsBoosting;
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
	}
}

void AJumpStartersPawn::FinishedLap()
{
	// Only finish the lap if all checkpoints are passed through
	if (Checkpoints == TotalCheckpoints)
	{
		// Set fastest lap to either current lap time or min of current and fastest
		FastestLap = Lap == 1 ? LapTime : FMath::Min(LapTime, FastestLap);
		Checkpoints = 0;
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
