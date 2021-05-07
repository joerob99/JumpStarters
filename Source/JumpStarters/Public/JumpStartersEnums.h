// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// Define enum types that can be used globally
UENUM(BlueprintType)
namespace ECT
{
	enum CarType
	{
		Spring			UMETA(DisplayName = "Spring"),
		Jacks			UMETA(DisplayName = "Jacks"),
		RocketBoosters	UMETA(DisplayName = "RocketBoosters"),
	};
}

UENUM(BlueprintType)
namespace EJT
{
	enum JumpType
	{
		Up				UMETA(DisplayName = "Up"),
		Left			UMETA(DisplayName = "Left"),
		Right			UMETA(DisplayName = "Right"),
	};
}

UENUM(BlueprintType)
namespace ECC
{
	enum CarColor
	{
		Red				UMETA(DisplayName = "Red"),
		Blue			UMETA(DisplayName = "Blue"),
		Yellow			UMETA(DisplayName = "Yellow"),
		Green			UMETA(DisplayName = "Green"),
	};
}

UENUM(BlueprintType)
namespace EWS
{
	enum WheelState
	{
		Normal			UMETA(DisplayName = "Normal"),
		Drift			UMETA(DisplayName = "Drift"),
	};
}