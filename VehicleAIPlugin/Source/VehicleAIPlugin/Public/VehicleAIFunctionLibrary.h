// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/VehiclePathFollowingComponent.h"
#include "VehicleAIFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLEAIPLUGIN_API UVehicleAIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

		/* Helper function that returns the path following component from a provided pawn by getting the controller and its path following component. */
		UFUNCTION(BlueprintPure, Category = "Vehicle AI")
			static UVehiclePathFollowingComponent* GetVehiclePathFollowingComponent(APawn* Pawn);

		/* Converts the input velocity into the output velocity. Used to change between units of data */
		UFUNCTION(BlueprintPure, Category = "Vehicle AI")
			static float ConvertVelocityByUnit(float InputVelocity, ESpeedUnits InputVelocityType, ESpeedUnits OutputVelocityType);

		/* Converts the steering of a vehicle into one usable for a tank */
		UFUNCTION(BlueprintPure, Category = "Vehicle AI")
			static void ConvertToTankSteering(float InSteering, float InThrottle, float TurnInPlaceThreshold, float NormalTurnMultiplier, float & OutLeftTrack, float & OutRightTrack);

		/* Manually sets path points for the current path on an AI controller */
		UFUNCTION(BlueprintCallable, Category = "Vehicle AI")
			static bool SetPathPoints(AAIController* AIController, TArray<FVector> NewPathPoints);

		/* Sets a path onto a spline that an agent can follow */
		UFUNCTION(BlueprintCallable, Category = "Vehicle AI")
			static bool FollowSplinePath(AAIController* AIController, USplineComponent* Spline, float SpaceBetweenParts);

};

