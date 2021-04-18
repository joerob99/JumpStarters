// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

UJumpStartersWheelFront::UJumpStartersWheelFront()
{
	ShapeRadius = 35.f;
	ShapeWidth = 10.0f;
	bAffectedByHandbrake = false;
	SteerAngle = 65.f;
	LatStiffValue = 2500.0f;
	LongStiffValue = 2500.0f;
}

PRAGMA_ENABLE_DEPRECATION_WARNINGS

