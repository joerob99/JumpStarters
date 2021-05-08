// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpStartersWheelRearDrift.h"
#include "UObject/ConstructorHelpers.h"
#include "TireConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelRearDrift::UJumpStartersWheelRearDrift()
{
	ShapeRadius = 33.15f;
	ShapeWidth = 24.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
	//LatStiffValue = 2500.0f;
	//LongStiffValue = 3500.0f;
	LatStiffMaxLoad = 100000000.0f;
	LatStiffValue = 100000000.0f;
	LongStiffValue = 100000000.0f;
	DampingRate = 0.25f;

	// Suspension changes
	SuspensionForceOffset = -20.0f;
	SuspensionMaxRaise = 3.0f;
	SuspensionMaxDrop = 3.0f;
	SuspensionNaturalFrequency = 5.0f;
	SuspensionDampingRatio = 1.5f;
	SweepType = EWheelSweepType::SimpleAndComplex;

	static ConstructorHelpers::FObjectFinder<UDataAsset> JSTireConfig(TEXT("/Game/Vehicle/JumpStartersRearDriftTireConfig.JumpStartersRearDriftTireConfig"));
	if (JSTireConfig.Succeeded()) { TireConfig = Cast<UTireConfig>(JSTireConfig.Object); }
	else { UE_LOG(LogTemp, Warning, TEXT("No rear wheel drift TireConfig added!")); }
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
