// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "Task_VehicleMoveTo.generated.h"

class UVehiclePathFollowingComponent;
/**
 * Same as normal MoveTo node but includes the ability to optionally tell this vehicle to reverse
 */
UCLASS()
class VEHICLEAIPLUGIN_API UTask_VehicleMoveTo : public UBTTask_MoveTo
{
	GENERATED_BODY()

public:

	UTask_VehicleMoveTo(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;

protected:

	UPROPERTY(EditAnywhere, Category = "Vehicle AI")
		bool bReverseTowardsTarget = false;

	UBlackboardComponent* MyBlackboard;
	UVehiclePathFollowingComponent* VehiclePathComp;

};
