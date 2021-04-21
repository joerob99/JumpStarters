// Copyright 2020 313 Studios. All Rights Reserved.


#include "AsyncMoveTo.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "NavMesh/NavMeshPath.h"

UAsyncMoveTo * UAsyncMoveTo::AsyncMoveTo(const UObject * WorldContextObject, AAIController * Controller, const FVector & Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath)
{
	UAsyncMoveTo* PathFind = NewObject<UAsyncMoveTo>();

	FAIMoveRequest MoveRequest;

	MoveRequest.SetGoalLocation(Dest);
	MoveRequest.SetUsePathfinding(bUsePathfinding);
	MoveRequest.SetAllowPartialPath(bAllowPartialPath);
	MoveRequest.SetProjectGoalLocation(bProjectDestinationToNavigation);
	MoveRequest.SetNavigationFilter(*FilterClass ? FilterClass : Controller->GetDefaultNavigationFilterClass());
	MoveRequest.SetAcceptanceRadius(AcceptanceRadius);
	MoveRequest.SetReachTestIncludesAgentRadius(bStopOnOverlap);
	MoveRequest.SetCanStrafe(bCanStrafe);

	PathFind->AIController = Controller;
	PathFind->GoalLocation = Dest;
	PathFind->MoveReq = MoveRequest;

	return PathFind;
}

void UAsyncMoveTo::Activate()
{
	UNavigationSystemV1* NavSys = AIController ? FNavigationSystem::GetCurrent<UNavigationSystemV1>(AIController->GetWorld()) : nullptr;
	if (NavSys == nullptr || AIController == nullptr || AIController->GetPawn() == nullptr)
	{
		return;
	}

	UPathFollowingComponent* PFollowComp = AIController->GetPathFollowingComponent();

	if (PFollowComp == nullptr)
	{
		return;
	}

	if (!PFollowComp->IsPathFollowingAllowed())
	{
		return;
	}

	NavMesh = Cast<ARecastNavMesh>(NavSys->GetDefaultNavDataInstance());


	const bool bAlreadyAtGoal = PFollowComp->HasReached(GoalLocation, EPathFollowingReachMode::OverlapAgent);

	// script source, keep only one move request at time
	if (PFollowComp->GetStatus() != EPathFollowingStatus::Idle)
	{
		PFollowComp->AbortMove(*NavSys, FPathFollowingResultFlags::ForcedScript | FPathFollowingResultFlags::NewRequest
			, FAIRequestID::AnyRequest, bAlreadyAtGoal ? EPathFollowingVelocityMode::Reset : EPathFollowingVelocityMode::Keep);
	}

	// script source, keep only one move request at time
	if (PFollowComp->GetStatus() != EPathFollowingStatus::Idle)
	{
		PFollowComp->AbortMove(*NavSys, FPathFollowingResultFlags::ForcedScript | FPathFollowingResultFlags::NewRequest);
	}

	if (bAlreadyAtGoal)
	{
		PFollowComp->RequestMoveWithImmediateFinish(EPathFollowingResult::Success);
	}
	else
	{
		const ANavigationData* NavData = NavSys->GetNavDataForProps(AIController->GetNavAgentPropertiesRef());
		if (NavData)
		{
			PathCompleted.BindUObject(this, &UAsyncMoveTo::OnPathRequestCompleted);

			FPathFindingQuery Query; //(AIController, *NavData, AIController->GetNavAgentLocation(), GoalLocation);
			AIController->BuildPathfindingQuery(MoveReq, Query);
			NavSys->FindPathAsync(AIController->GetNavAgentPropertiesRef(), Query, PathCompleted, EPathFindingMode::Regular);
		}
	}
}

void UAsyncMoveTo::OnPathRequestCompleted(uint32 RequestID, ENavigationQueryResult::Type Result, FNavPathSharedPtr NewPath)
{
	if (NewPath.IsValid())
	{
		AIController->GetPathFollowingComponent()->RequestMove(MoveReq, NewPath);
	}

	CompletedRequest.Broadcast(Result);
}
