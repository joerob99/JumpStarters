// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Navigation/CrowdAgentInterface.h"
#include "CrowdAgentComponent.generated.h"

class APawn;
class UPawnMovementComponent;

/*
*	Allows this actor to be registered with the crowd manager. Must call the registration function!
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VEHICLEAIPLUGIN_API UCrowdAgentComponent : public UActorComponent, public ICrowdAgentInterface
{
	GENERATED_BODY()

	/* Crowd Agent Interface Methods */
	virtual FVector GetCrowdAgentLocation() const override;
	virtual FVector GetCrowdAgentVelocity() const override;
	virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override;
	virtual float GetCrowdAgentMaxSpeed() const override;
	virtual int32 GetCrowdAgentAvoidanceGroup() const override;
	virtual int32 GetCrowdAgentGroupsToAvoid() const override;
	virtual int32 GetCrowdAgentGroupsToIgnore() const override;
public:

	/* Registers the owning actor with the crowd manager */
	UFUNCTION(BlueprintCallable, Category = "Vehicle AI")
		bool RegisterWithCrowdManager(APawn* Pawn);

private:

	UPawnMovementComponent* MoveComp;
		
};
