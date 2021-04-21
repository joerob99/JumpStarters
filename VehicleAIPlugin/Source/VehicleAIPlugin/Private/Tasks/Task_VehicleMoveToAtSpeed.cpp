// Copyright 2020 313 Studios. All Rights Reserved.


#include "Tasks/Task_VehicleMoveToAtSpeed.h"
#include "Components/VehiclePathFollowingComponent.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Float.h"

UTask_VehicleMoveToAtSpeed::UTask_VehicleMoveToAtSpeed(const FObjectInitializer& ObjectInitializer) : UTask_VehicleMoveTo(ObjectInitializer)
{
	NodeName = "Vehicle Move To At Speed";
	bNotifyTick = true;

	// accept only floats
	BlackboardKey.AddFloatFilter(this, GET_MEMBER_NAME_CHECKED(UTask_VehicleMoveToAtSpeed, DesiredSpeed));

}

void UTask_VehicleMoveToAtSpeed::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	// every frame fetch the value in the blackboard, and then update the desired speed

	if (VehiclePathComp && MyBlackboard)
	{
		const float Speed = MyBlackboard->GetValueAsFloat(DesiredSpeed.SelectedKeyName);
			
		VehiclePathComp->SetDesiredSpeed(Speed, ESpeedUnits::CentimetersPerSecond);
	}
	
}