// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Task_VehicleMoveTo.h"
#include "Task_VehicleMoveToAtSpeed.generated.h"

class UVehiclePathFollowingComponent;

/**
 * Makes this vehicle move to a location but at a blackboard defined desired speed
 */
UCLASS()
class VEHICLEAIPLUGIN_API UTask_VehicleMoveToAtSpeed : public UTask_VehicleMoveTo
{
	GENERATED_BODY()

public:

	UTask_VehicleMoveToAtSpeed(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, Category = Blackboard)
		struct FBlackboardKeySelector DesiredSpeed;
	
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};