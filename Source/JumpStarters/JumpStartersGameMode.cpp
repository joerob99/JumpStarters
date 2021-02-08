// Copyright Epic Games, Inc. All Rights Reserved.

#include "JumpStartersGameMode.h"
#include "JumpStartersPawn.h"
#include "JumpStartersHud.h"

AJumpStartersGameMode::AJumpStartersGameMode()
{
	DefaultPawnClass = AJumpStartersPawn::StaticClass();
	HUDClass = AJumpStartersHud::StaticClass();
}
