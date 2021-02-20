// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelRear::UJumpStartersWheelRear()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
	LatStiffValue = 500.0f;
	LongStiffValue = 2500.0f;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS
