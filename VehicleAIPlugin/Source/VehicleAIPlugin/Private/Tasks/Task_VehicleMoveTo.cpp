// Copyright 2020 313 Studios. All Rights Reserved.


#include "Tasks/Task_VehicleMoveTo.h"
#include "Components/VehiclePathFollowingComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UTask_VehicleMoveTo::UTask_VehicleMoveTo(const FObjectInitializer& ObjectInitializer) : UBTTask_MoveTo(ObjectInitializer)
{
	NodeName = "Vehicle Move To";
}

EBTNodeResult::Type UTask_VehicleMoveTo::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();

	if (AIController)
	{
		MyBlackboard = OwnerComp.GetBlackboardComponent();
		VehiclePathComp = Cast<UVehiclePathFollowingComponent>(AIController->GetPathFollowingComponent());
	}

	if (bReverseTowardsTarget && VehiclePathComp)
	{
		// If the user wants to manually reverse towards the target, set that here
		VehiclePathComp->SetReverse(true);
	}

	return Super::ExecuteTask(OwnerComp, NodeMemory);
}

EBTNodeResult::Type UTask_VehicleMoveTo::AbortTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	if (bReverseTowardsTarget && VehiclePathComp)
	{
		VehiclePathComp->SetReverse(false);
	}
	return Super::AbortTask(OwnerComp, NodeMemory);
}

void UTask_VehicleMoveTo::OnTaskFinished(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, EBTNodeResult::Type TaskResult)
{
	if (bReverseTowardsTarget && VehiclePathComp)
	{
		VehiclePathComp->SetReverse(false);
	}

	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}
