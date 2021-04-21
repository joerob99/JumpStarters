// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "AI/Navigation/NavigationTypes.h"
#include "AITypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncMoveTo.generated.h"

class AAIController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncPathFindComplete, ENavigationQueryResult::Type, Result);

/**
 * Finds a path for an AI agent asynchronously
 */
UCLASS()
class VEHICLEAIPLUGIN_API UAsyncMoveTo : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:

	/* Called to blueprints when the pathfinding request has completed */
	UPROPERTY(BlueprintAssignable)
		FAsyncPathFindComplete CompletedRequest;

	FNavPathQueryDelegate PathCompleted;

	/* Using the Async Pathfinder to find a path, this works with all AI and not just vehicles and can greatly help perforance especailly for complicated paths that need updating regularlly.
	This is also experiemental and some crashes have been reported, so test it in your own project to ensure robustness before deploying. */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "AI")
		static UAsyncMoveTo* AsyncMoveTo(const UObject* WorldContextObject, AAIController* Controller, const FVector& Dest, float AcceptanceRadius = -1, bool bStopOnOverlap = true,
			bool bUsePathfinding = true, bool bProjectDestinationToNavigation = false, bool bCanStrafe = true,
			TSubclassOf<UNavigationQueryFilter> FilterClass = NULL, bool bAllowPartialPath = true);

	/* Activates the async function */
	virtual void Activate() override;

	/* Called when the pathing request is completed */
	void OnPathRequestCompleted(uint32 RequestID, ENavigationQueryResult::Type Result, FNavPathSharedPtr NewPath);

private:

	FAIMoveRequest MoveReq;

	UObject* WorldContextObject;
	AAIController* AIController;
	FVector GoalLocation;

	/* Navigation Mesh */
	ARecastNavMesh* NavMesh;

	/* Nav Path Shared Pointer */
	FNavPathSharedPtr NavPath;
	
};
