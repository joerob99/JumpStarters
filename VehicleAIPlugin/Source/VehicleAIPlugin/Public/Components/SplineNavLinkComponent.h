// Copyright 2019 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "NavLinkCustomInterface.h"
#include "NavigationSystem.h"
#include "SplineNavLinkComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMoveReachedLink, class USplineNavLinkComponent*, ThisComp, class AActor*, Agent, const FVector&, DestPoint);

/**
 * A spline link works like a smart NavLink, except it sets the start and end points of the link to the start and end of the spline instead 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VEHICLEAIPLUGIN_API USplineNavLinkComponent : public USplineComponent, public INavLinkCustomInterface
{
	GENERATED_BODY()

public:

	//~ Begin UPrimitiveComponent Interface
	virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
	void SetEnabled(bool bNewEnabled);
	USplineNavLinkComponent(const FObjectInitializer& ObjectInitializer);

	void RefreshNavigationModifiers();

	// BEGIN INavLinkCustomInterface
	virtual void GetLinkData(FVector& LeftPt, FVector& RightPt, ENavLinkDirection::Type& Direction) const override;
	virtual TSubclassOf<UNavArea> GetLinkAreaClass() const override;
	virtual uint32 GetLinkId() const override;
	virtual void UpdateLinkId(uint32 NewUniqueId) override;
	virtual bool IsLinkPathfindingAllowed(const UObject* Querier) const override;
	virtual bool OnLinkMoveStarted(UObject* PathComp, const FVector& DestPoint) override;
	virtual void OnLinkMoveFinished(UObject* PathComp) override;
	// END INavLinkCustomInterface

	virtual void GetNavigationData(FNavigationRelevantData& Data) const override;

	//~ Begin UActorComponent Interface
	virtual void OnRegister() override;
	virtual FNavigationLink GetLinkModifier() const;
	virtual void OnUnregister() override;
	virtual void BeginPlay() override;
	//~ End UActorComponent Interface

	//~ Begin UObject Interface
	virtual void PostLoad() override;
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditImport() override;
#endif

	/** start point, relative to owner */
	UPROPERTY(EditAnywhere, Category = Default, BlueprintReadWrite, meta = (MakeEditWidget = ""))
		FVector LinkRelativeStart;

	/** end point, relative to owner */
	UPROPERTY(EditAnywhere, Category = Default, BlueprintReadWrite, meta = (MakeEditWidget = ""))
		FVector LinkRelativeEnd;

	/** link Id assigned by navigation system */
	UPROPERTY()
		uint32 NavLinkUserId = 0;

	/** area class to use when link is enabled */
	UPROPERTY(EditAnywhere, Category = SmartLink)
		TSubclassOf<UNavArea> EnabledAreaClass;

	/** area class to use when link is disabled */
	UPROPERTY(EditAnywhere, Category = SmartLink)
		TSubclassOf<UNavArea> DisabledAreaClass;

	/** direction of link */
	UPROPERTY(EditAnywhere, Category = SmartLink)
		TEnumAsByte<ENavLinkDirection::Type> LinkDirection;

	/** is link currently in enabled state? (area class) */
	UPROPERTY(EditAnywhere, Category = SmartLink)
		uint32 bLinkEnabled : 1;

	/** list of agents moving though this link */
	TArray<TWeakObjectPtr<UObject> > MovingAgents;

	/** delegate to call when link is reached */
	UPROPERTY(BlueprintAssignable, Category = "Spline Nav Link")
		FOnMoveReachedLink OnMoveReachedLink;

	/** set delegate to notify about reaching this link during path following */
	void SetMoveReachedLink(FOnMoveReachedLink const& InDelegate);

	/** Handle for efficient management of BroadcastStateChange timer */
	FTimerHandle TimerHandle_BroadcastStateChange;

	void UpdateLink();

	/** set area class to use when link is enabled */
	void SetEnabledArea(TSubclassOf<UNavArea> AreaClass);

	TSubclassOf<UNavArea> GetEnabledArea() const { return EnabledAreaClass; }
	TSubclassOf<UNavArea> GetDisabledArea() const { return DisabledAreaClass; }

	TArray<APawn*> TraversingPawns;

	UFUNCTION(BlueprintCallable, Category = "Spline Nav Link")
		bool CanTraverseLink();

	UFUNCTION(BlueprintCallable, Category = "Spline Nav Link")
		void ResumePathFollowing(AActor* Agent);

	UFUNCTION(BlueprintCallable, Category = "Spline Nav Link")
		void SetAllowTraverse(bool bAllow);

	bool bAllowTraverseLink = true;
	
};
