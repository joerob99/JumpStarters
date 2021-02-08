// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "JumpStartersHud.generated.h"


UCLASS(config = Game)
class AJumpStartersHud : public AHUD
{
	GENERATED_BODY()

public:
	AJumpStartersHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
