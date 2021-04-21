// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "VehicleAIInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVehicleAIInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class VEHICLEAIPLUGIN_API IVehicleAIInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	/* 
	* Called when the vehicle gets stuck according to the stuck detection
	* @param UnStuckLocation - The location we want to move to, to get this actor unstuck, this is for simple unstuck custom behaviour
	* @return true will keep the vehicle in a stuck state until you manually notify. False (default) will handle the stuck behaivour internally
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Vehicle AI")
		bool OnVehicleStuck(FVector& UnStuckLocation);

	/*
	* Called to implement custom steering behaviour
	* @param TargetAngle - Angle towards the target move location
	* @param Steering - Normalised adjusted steering angle, this is whats normally used by the system internally
	* @param DestinationDistance - Distance to the current move destination
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Vehicle AI")
		void CustomSteering(float TargetAngle, float Steering, float DestinationDistance);

	/*
	* Called to implement custom steering behaviour
	* @param TargetAngle - Angle towards the target move location
	* @param DestinationDistance - Distance to the current move destination
	* @param DesiredSpeed - The adjusted desired speed
	* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Vehicle AI")
		void CustomThrottle(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle);

	/*
	* Called to implement custom braking behaviour
	* @param TargetAngle - Angle towards the target move location
	* @param DestinationDistance - Distance to the current move destination
	* @param DesiredSpeed - The adjusted desired speed
	* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Vehicle AI")
		void CustomBraking(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake);

};

