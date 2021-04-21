// Copyright 2020 313 Studios. All Rights Reserved.


#include "Components/CrowdAgentComponent.h"
#include "Navigation/CrowdManager.h"
#include "AI/RVOAvoidanceInterface.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"

bool UCrowdAgentComponent::RegisterWithCrowdManager(APawn* Pawn)
{
	MoveComp = Pawn->GetMovementComponent();

	if (MoveComp)
	{
		UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);
		if (CrowdManager)
		{
			ICrowdAgentInterface* IAgent = Cast<ICrowdAgentInterface>(this);
			CrowdManager->RegisterAgent(IAgent);
			return CrowdManager->IsAgentValid(IAgent);
		}
	}

	return false;
}

FVector UCrowdAgentComponent::GetCrowdAgentLocation() const
{
	return GetOwner()->GetActorLocation();
}

FVector UCrowdAgentComponent::GetCrowdAgentVelocity() const
{
	return GetOwner()->GetVelocity();
}

void UCrowdAgentComponent::GetCrowdAgentCollisions(float & CylinderRadius, float & CylinderHalfHeight) const
{
	CylinderRadius = MoveComp->GetNavAgentPropertiesRef().AgentRadius;
	CylinderHalfHeight = MoveComp->GetNavAgentPropertiesRef().AgentHeight / 2;
}

float UCrowdAgentComponent::GetCrowdAgentMaxSpeed() const
{
	return MoveComp->GetMaxSpeed();
}

int32 UCrowdAgentComponent::GetCrowdAgentAvoidanceGroup() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(GetOwner());

	if (Interface)
	{
		return Interface->GetAvoidanceGroupMask();
	}

	return int32();
}

int32 UCrowdAgentComponent::GetCrowdAgentGroupsToAvoid() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(GetOwner());

	if (Interface)
	{
		return Interface->GetGroupsToAvoidMask();
	}
	return int32();
}

int32 UCrowdAgentComponent::GetCrowdAgentGroupsToIgnore() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(GetOwner());

	if (Interface)
	{
		return Interface->GetGroupsToIgnoreMask();
	}
	return int32();
}
