// Copyright 2019 313 Studios. All Rights Reserved.


#include "Components/SplineNavLinkComponent.h"
#include "NavLinkRenderingProxy.h"
#include "NavigationSystem.h"
#include "AI/NavigationSystemHelpers.h"
#include "NavigationSystemTypes.h"
#include "NavAreas/NavArea_Default.h"
#include "AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Kismet/KismetMathLibrary.h"

USplineNavLinkComponent::USplineNavLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	Mobility = EComponentMobility::Static;
	SetGenerateOverlapEvents(false);

	bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::EvenIfNotCollidable;
	bCanEverAffectNavigation = true;
	bNavigationRelevant = true;

	EnabledAreaClass = UNavArea_Default::StaticClass();

	bLinkEnabled = true;
	bAutoActivate = true;
}

void USplineNavLinkComponent::SetEnabled(bool bNewEnabled)
{
	// sets the start and end points
	FVector StartLoc = GetLocationAtSplinePoint(0, ESplineCoordinateSpace::World);
	FVector EndLoc = GetLocationAtSplinePoint(GetNumberOfSplinePoints() - 1, ESplineCoordinateSpace::World);

	if (GetOwner())
	{
		LinkRelativeStart = UKismetMathLibrary::InverseTransformLocation(GetOwner()->GetTransform(), StartLoc);
		LinkRelativeEnd = UKismetMathLibrary::InverseTransformLocation(GetOwner()->GetTransform(), EndLoc);
	}

	if (bLinkEnabled != bNewEnabled)
	{
		bLinkEnabled = bNewEnabled;

		UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
		if (NavSys)
		{
			NavSys->UpdateCustomLink(this);
		}
	}
}

void USplineNavLinkComponent::GetLinkData(FVector& LeftPt, FVector& RightPt, ENavLinkDirection::Type& Direction) const
{
	LeftPt = LinkRelativeStart;
	RightPt = LinkRelativeEnd;
	Direction = LinkDirection;
}

TSubclassOf<UNavArea> USplineNavLinkComponent::GetLinkAreaClass() const
{
	return bLinkEnabled ? EnabledAreaClass : DisabledAreaClass;
}

uint32 USplineNavLinkComponent::GetLinkId() const
{
	return NavLinkUserId;
}

void USplineNavLinkComponent::UpdateLinkId(uint32 NewUniqueId)
{
	NavLinkUserId = NewUniqueId;
}

bool USplineNavLinkComponent::IsLinkPathfindingAllowed(const UObject* Querier) const
{
	return true;
}

FBoxSphereBounds USplineNavLinkComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	FBox LocalBounds(ForceInit);
	LocalBounds += LinkRelativeStart;
	LocalBounds += LinkRelativeEnd;

	const FBox WorldBounds = LocalBounds.TransformBy(LocalToWorld);
	return FBoxSphereBounds(WorldBounds);
}

bool USplineNavLinkComponent::OnLinkMoveStarted(UObject* PathComp, const FVector& DestPoint)
{
	MovingAgents.Add(MakeWeakObjectPtr(PathComp));

	UPathFollowingComponent* FoundPathComp = Cast<UPathFollowingComponent>(PathComp);
	if (FoundPathComp)
	{
		AActor* PathOwner = FoundPathComp->GetOwner();
		AController* ControllerOwner = Cast<AController>(PathOwner);
		if (ControllerOwner)
		{
			PathOwner = ControllerOwner->GetPawn();
		}

		OnMoveReachedLink.Broadcast(this, PathOwner, DestPoint);

		return true;
	}

	return false;
}

void USplineNavLinkComponent::OnLinkMoveFinished(UObject* PathComp)
{
	MovingAgents.Remove(MakeWeakObjectPtr(PathComp));
}

void USplineNavLinkComponent::SetMoveReachedLink(FOnMoveReachedLink const& InDelegate)
{
	OnMoveReachedLink = InDelegate;
}

void USplineNavLinkComponent::UpdateLink()
{
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	if (NavSys)
	{
		NavSys->UpdateCustomLink(this);
	}
}

void USplineNavLinkComponent::SetEnabledArea(TSubclassOf<UNavArea> AreaClass)
{
	EnabledAreaClass = AreaClass;
	if (bLinkEnabled)
	{
		UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
		if (NavSys)
		{
			NavSys->UpdateCustomLink(this);
		}
	}
}

bool USplineNavLinkComponent::CanTraverseLink()
{
	return bAllowTraverseLink;
}

void USplineNavLinkComponent::ResumePathFollowing(AActor* Agent)
{
	if (Agent)
	{
		UPathFollowingComponent* PathComp = Agent->FindComponentByClass<UPathFollowingComponent>();
		if (PathComp == NULL)
		{
			APawn* PawnOwner = Cast<APawn>(Agent);
			if (PawnOwner && PawnOwner->GetController())
			{
				PathComp = PawnOwner->GetController()->FindComponentByClass<UPathFollowingComponent>();
			}
		}

		if (PathComp)
		{
			PathComp->FinishUsingCustomLink(this);
		}
	}
}

void USplineNavLinkComponent::SetAllowTraverse(bool bAllow)
{
	bAllowTraverseLink = bAllow;
}

void USplineNavLinkComponent::OnRegister()
{
	Super::OnRegister();

	if (NavLinkUserId == 0)
	{
		NavLinkUserId = INavLinkCustomInterface::GetUniqueId();
	}

	UNavigationSystemV1::RequestCustomLinkRegistering(*this, this);

	SetEnabled(bLinkEnabled);
}

FNavigationLink USplineNavLinkComponent::GetLinkModifier() const
{
	return INavLinkCustomInterface::GetModifier(this);
}

void USplineNavLinkComponent::GetNavigationData(FNavigationRelevantData& Data) const
{
	TArray<FNavigationLink> NavLinks;
	FNavigationLink LinkMod = GetLinkModifier();
	LinkMod.MaxFallDownLength = 0.f;
	LinkMod.LeftProjectHeight = 0.f;
	NavLinks.Add(LinkMod);
	NavigationHelper::ProcessNavLinkAndAppend(&Data.Modifiers, GetOwner(), NavLinks);
}

void USplineNavLinkComponent::OnUnregister()
{
	Super::OnUnregister();

	UNavigationSystemV1::RequestCustomLinkUnregistering(*this, this);
}

void USplineNavLinkComponent::BeginPlay()
{
	Super::BeginPlay();

}

void USplineNavLinkComponent::PostLoad()
{
	Super::PostLoad();

	INavLinkCustomInterface::UpdateUniqueId(NavLinkUserId);
}

#if WITH_EDITOR
void USplineNavLinkComponent::PostEditImport()
{
	Super::PostEditImport();

	NavLinkUserId = INavLinkCustomInterface::GetUniqueId();
}

void USplineNavLinkComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	SetEnabled(bLinkEnabled);

}
#endif