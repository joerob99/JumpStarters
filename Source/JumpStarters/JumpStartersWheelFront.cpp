// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelFront::UJumpStartersWheelFront()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 60.f;
	LatStiffValue = 900.0f;
	LongStiffValue = 1500.0f;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS

