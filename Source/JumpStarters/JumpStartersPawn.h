// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "Public/JumpAnimActor.h"
#include "JumpStartersEnums.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/Material.h"
#include "Components/PostProcessComponent.h"
#include "JumpStartersPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UTextRenderComponent;
class UInputComponent;

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// Delegate function to broadcast display tire changed events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDisplayTireDelegate, bool, SwitchedToDriftTire);

// Delegate function to broadcast play jump sound events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayJumpSoundDelegate, ECT::CarType, JumpingCarType);

UCLASS(config=Game)
class AJumpStartersPawn : public AWheeledVehicle
{
	GENERATED_BODY()

	/** Spring arm that will offset the camera */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArm;

	/** Camera component that will be our viewpoint */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

	/** SCene component for the In-Car view origin */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* InternalCameraBase;

	/** Camera component for the In-Car view */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* InternalCamera;

	/** Text component for the In-Car speed */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTextRenderComponent* InCarSpeed;

	/** Text component for the In-Car gear */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UTextRenderComponent* InCarGear;

	/** Actor component for the exhaust emitter */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* ExhaustEmitter;

	/** Actor component for the vehicle collider */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* VehicleCollider;

	/** Actor component for the vehicle collider */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* WallSoundCollider;

	/** Actor components for spring animations, jacks animations, and rocket animations */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UChildActorComponent* JumpAnimActor;

	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMesh* RedCarMesh;
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMesh* BlueCarMesh;
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMesh* YellowCarMesh;
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMesh* GreenCarMesh;

	UPROPERTY(Category = Display, BlueprintAssignable)
	FDisplayTireDelegate OnTireUpdated;
	UPROPERTY(Category = Audio, BlueprintAssignable)
	FPlayJumpSoundDelegate OnJumpPlaySound;



	//sound-related
	//UPROPERTY(Category = Audio, VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	//class USoundCue* JumpCue;
	
public:
	AJumpStartersPawn();

	/** The current speed as a string eg 10 km/h */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly)
	FText SpeedDisplayString;

	/** The current gear as a string (R,N, 1,2 etc) */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly)
	FText GearDisplayString;

	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly)
	/** The color of the incar gear text in forward gears */
	FColor	GearDisplayColor;

	/** The color of the incar gear text when in reverse */
	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly)
	FColor	GearDisplayReverseColor;

	UPROPERTY(Category = Display, VisibleDefaultsOnly, BlueprintReadOnly)
	FText EnergyDisplayString;

	/** Are we using incar camera */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly)
	bool bInCarCameraActive;

	/** Are we in reverse gear */
	UPROPERTY(Category = Camera, VisibleDefaultsOnly, BlueprintReadOnly)
	bool bInReverseGear;

	/* Are we jumping the car currently? */
	UPROPERTY(Category = Functionality, VisibleDefaultsOnly, BlueprintReadOnly)
	bool bIsJumping;

	UPROPERTY(Category = Functionality, VisibleDefaultsOnly, BlueprintReadOnly)
	bool bHasDoubleJumped;

	/* Are we boosting currently? */
	UPROPERTY(Category = Functionality, VisibleDefaultsOnly, BlueprintReadOnly)
	bool bIsBoosting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseJumpForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseBoostForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseDriftForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseDriftTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotCorrectSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECT::CarType> ThisCarType;

	UPROPERTY(Category = Health, VisibleAnywhere, BlueprintReadWrite)
	float RemainingEnergy;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	float LapTime;

	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	float TotalRaceTime;

	UPROPERTY(EditAnywhere, Category = "RaceSystem", BlueprintReadWrite)
	int32 TotalLaps;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	int32 Lap;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	int32 TotalCheckpoints;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	int32 Checkpoints;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	TArray<FString> CheckpointIDs;

	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	float FastestLap;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	FVector NextCheckpointLocation;

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	int32 Position;

	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	float MaxBoostFOV = 110.0f;
	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	float MinBoostFOV = 100.0f;
	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	float CurrBoostFOV;

	UPROPERTY(Category = "RaceSystem", BlueprintReadOnly)
	bool bDriftTires;

	UPROPERTY(Category = "Animation", BlueprintReadOnly)
	UMaterialInstanceDynamic* SpeedLinesDynamic;

	UPROPERTY(Category = "Animation", BlueprintReadOnly)
	UPostProcessComponent* PostProcess;

	// Overlap event
	//UFUNCTION()
	//void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	/** Initial offset of incar camera */
	FVector InternalCameraOrigin;
	// Begin Pawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End Pawn interface

	// Begin Actor interface
	virtual void Tick(float Delta) override;
protected:
	virtual void BeginPlay() override;

public:
	// End Actor interface

	/** Handle pressing forwards */
	void MoveForward(float Val);
	/** Setup the strings used on the hud */
	void SetupInCarHUD();

	/** Update the physics material used by the vehicle mesh */
	void UpdatePhysicsMaterial();
	/** Handle pressing right */
	void MoveRight(float Val);
	/** Handle handbrake pressed */
	void OnHandbrakePressed();
	/** Handle handbrake released */
	void OnHandbrakeReleased();
	/** Switch between cameras */
	void OnToggleCamera();
	/** Handle reset VR device */
	void OnResetVR();

	/* Handle basic car jumping */
	void OnJump();
	/* Handle basic car boosting */
	void OnBoost();
	/* Handle stopping car boosting */
	void OnBoostStop();
	/* Handle basic car drifting */
	void OnDrift();

	/* Handles jumping using two different buttons */
	void OnJumpLeft();
	void OnJumpRight();

	UFUNCTION(Category = "EnergySystem", BlueprintCallable)
	void DecreaseEnergy(float SubVal);

	UFUNCTION(Category = "EnergySystem", BlueprintCallable)
	void IncreaseEnergy(float AddVal);

	/* Handle basic car reset to track */
	UFUNCTION(Category = "RaceSystem", BlueprintCallable)
	void OnReset();

	UPROPERTY(Category = "RaceSystem", BlueprintReadWrite)
	float ResetDelay;

	UFUNCTION(Category = "RaceSystem", BlueprintCallable)
	void FinishedLap();

	UFUNCTION(Category = "RaceSystem", BlueprintCallable)
	void ChangeResetTransform(FVector CheckpointLocation, FRotator CheckpointRotation);

	UFUNCTION(Category = "RaceSystem", BlueprintCallable)
	void ChangeCameraFOV(float DeltaFOV);

	UFUNCTION(Category = "RaceSystem", BlueprintCallable)
	void ChangeSkelMesh(TEnumAsByte<ECC::CarColor> Color);

	static const FName LookUpBinding;
	static const FName LookRightBinding;

private:
	/** 
	 * Activate In-Car camera. Enable camera and sets visibility of incar hud display
	 *
	 * @param	bState true will enable in car view and set visibility of various if its doesnt match new state
	 * @param	bForce true will force to always change state
	 */
	void EnableIncarView( const bool bState, const bool bForce = false );

	/** Update the gear and speed strings */
	void UpdateHUDStrings();

	/* Are we on a 'slippery' surface */
	bool bIsLowFriction;

	void CheckEnergy(float Delta);
	void CheckDrift(float Delta);
	void CheckJumpTimer(float Delta);

	void DoJump(TEnumAsByte<EJT::JumpType> Jump);
	void DoDriftTireSwitch(TEnumAsByte<EWS::WheelState> State);

	float JumpTimer;

	float InAirTimerCheck;

	bool bStartJumpTimer;

	FVector* ResetLocation;
	FRotator* ResetRotation;

	float DesiredPitch;
	float DesiredRoll;
	float DesiredYaw;

	float LowEnergyCost;
	float MediumEnergyCost;
	float HighEnergyCost;

	bool bIsDrifting;
	bool bDriftingRight;
	float RightTurnAxisVal;

	bool bIsJumpingLeft;
	bool bIsJumpingRight;
	float JumpInputTimer;
	const float JumpInputTimerMax = 0.2f;

	float CurrentThrottle;
	bool bHasJumpedLeft;
	bool bHasJumpedRight;

	bool bStartDriftTimer;
	float DriftTimer;
	//bool bDriftTires;

	float BoostParticleTimer;


public:
	/** Returns SpringArm subobject **/
	FORCEINLINE USpringArmComponent* GetSpringArm() const { return SpringArm; }
	/** Returns Camera subobject **/
	FORCEINLINE UCameraComponent* GetCamera() const { return Camera; }
	/** Returns InternalCamera subobject **/
	FORCEINLINE UCameraComponent* GetInternalCamera() const { return InternalCamera; }
	/** Returns InCarSpeed subobject **/
	FORCEINLINE UTextRenderComponent* GetInCarSpeed() const { return InCarSpeed; }
	/** Returns InCarGear subobject **/
	FORCEINLINE UTextRenderComponent* GetInCarGear() const { return InCarGear; }
};

PRAGMA_ENABLE_DEPRECATION_WARNINGS

