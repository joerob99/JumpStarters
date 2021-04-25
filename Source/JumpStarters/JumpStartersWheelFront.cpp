// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersWheelFront.h"
#include "UObject/ConstructorHelpers.h"
#include "TireConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelFront::UJumpStartersWheelFront()
{
	ShapeRadius = 33.15f;
	ShapeWidth = 24.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 60.f;
	//LatStiffValue = 2500.0f;
	//LongStiffValue = 2500.0f;
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

	static ConstructorHelpers::FObjectFinder<UDataAsset> JSTireConfig(TEXT("/Game/Vehicle/JumpStartersFrontTireConfig.JumpStartersFrontTireConfig"));
	if (JSTireConfig.Succeeded()) { TireConfig = Cast<UTireConfig>(JSTireConfig.Object); }
	else { UE_LOG(LogTemp, Warning, TEXT("No front wheel TireConfig added!")); }
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS

