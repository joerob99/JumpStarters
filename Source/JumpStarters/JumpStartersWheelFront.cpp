// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelFront::UJumpStartersWheelFront()
{
	ShapeRadius = 33.15f;
	ShapeWidth = 24.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 60.f;
	LatStiffValue = 2500.0f;
	LongStiffValue = 2500.0f;
	DampingRate = 0.25f;

	// Suspension changes
	SuspensionForceOffset = -20.0f;
	SuspensionMaxRaise = 3.0f;
	SuspensionMaxDrop = 3.0f;
	SuspensionNaturalFrequency = 5.0f;
	SuspensionDampingRatio = 1.5f;
	SweepType = EWheelSweepType::SimpleAndComplex;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS

