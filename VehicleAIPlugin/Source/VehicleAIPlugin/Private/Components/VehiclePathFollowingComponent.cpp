// Copyright 2020 313 Studios. All Rights Reserved.


#include "Components/VehiclePathFollowingComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "WheeledVehicleMovementComponent.h"
#include "Engine/Engine.h"
#include "Kismet/KismetMathLibrary.h"
#include "DrawDebugHelpers.h"
#include "Curves/CurveFloat.h"
#include "Math/UnrealMathUtility.h"
#include "VehicleAIInterface.h"
#include "NavMesh/NavMeshPath.h"
#include "VehicleAIController.h"
#include "NavMesh/RecastNavMesh.h"
#include "VehicleAIFunctionLibrary.h"

// Stat tracking
DECLARE_CYCLE_STAT(TEXT("Vehicle Path Following - Update Driving"), STAT_VehicleUpdateDriving, STATGROUP_VehiclePathFollowing);
DECLARE_CYCLE_STAT(TEXT("Vehicle Path Following - Follow Path"), STAT_VehicleFollowPath, STATGROUP_VehiclePathFollowing);

/*********************************/
/* Blueprint Callable Functions */
/*******************************/

void UVehiclePathFollowingComponent::SetReverse(bool Reverse)
{
	bWantsReverse = Reverse;
}

void UVehiclePathFollowingComponent::SetAutoReverse(bool Reverse)
{
	bAutoReverse = Reverse;
}

bool UVehiclePathFollowingComponent::IsReversing()
{
	return bReversing;
}

void UVehiclePathFollowingComponent::SetDesiredSpeed(float NewSpeed, ESpeedUnits Unit)
{
	DesiredSpeed = UVehicleAIFunctionLibrary::ConvertVelocityByUnit(NewSpeed, Unit, ESpeedUnits::CentimetersPerSecond);
}

void UVehiclePathFollowingComponent::SetVehicleCrowdSimulation(E_CrowdSimulationState NewState)
{
	ECrowdSimulationState CrowdState = ECrowdSimulationState::Disabled;

	// Messy solution to allow blueprint enum to be used with the crowd simulation enum
	switch (NewState)
	{
	case E_CrowdSimulationState::Disabled:
		CrowdState = ECrowdSimulationState::Disabled;
		break;
	case E_CrowdSimulationState::Enabled:
		CrowdState = ECrowdSimulationState::Enabled;
		break;
	case E_CrowdSimulationState::ObstacleOnly:
		CrowdState = ECrowdSimulationState::ObstacleOnly;
		break;
	}

	// Enable or disable the crowd simulation
	SetCrowdSimulationState(CrowdState);
}

void UVehiclePathFollowingComponent::SetStuckStatus(bool NewStuckState)
{
	bIsStuck = NewStuckState;
}

void UVehiclePathFollowingComponent::ToggleDebug(bool bActive)
{
	bDebug = bActive;
}

void UVehiclePathFollowingComponent::SetDestinationRotation(bool bActive, FRotator WorldRotation)
{
	bUseRotation = bActive;
	DestinationRotation = WorldRotation;
}

void UVehiclePathFollowingComponent::SetCustomControl(bool bToggleCustomSteering, bool bToggleCustomThrottle, bool bToggleCustomBrake)
{
	bCustomSteering = bToggleCustomSteering;
	bCustomThrottle = bToggleCustomThrottle;
	bCustomBrake = bToggleCustomBrake;
}

void UVehiclePathFollowingComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	SetDesiredSpeed(StartingDesiredSpeed, StartSpeedUnit);
}

UVehiclePathFollowingComponent::UVehiclePathFollowingComponent()
{
	SimulationState = ECrowdSimulationState::Enabled;

	bAffectFallingVelocity = false;
	bRotateToVelocity = true;
	bSuspendCrowdSimulation = false;
	bEnableSimulationReplanOnResume = true;
	bRegisteredWithCrowdSimulation = false;
	bCanCheckMovingTooFar = true;
	bCanUpdatePathPartInTick = true;

	bEnableAnticipateTurns = false;
	bEnableObstacleAvoidance = true;
	bEnableSeparation = false;
	bEnableOptimizeVisibility = true;
	bEnableOptimizeTopology = true;
	bEnablePathOffset = false;
	bEnableSlowdownAtGoal = true;

	SeparationWeight = 2.0f;
	CollisionQueryRange = 400.0f;		// approx: radius * 12.0f
	PathOptimizationRange = 1000.0f;	// approx: radius * 30.0f
	AvoidanceQuality = ECrowdAvoidanceQuality::Low;
	AvoidanceRangeMultiplier = 2.0f;
}

bool UVehiclePathFollowingComponent::ShouldReverse(float TurnAngle, float TargetDistance)
{
	// If we manually want to tell this vehicle to reverse
	if (bWantsReverse)
	{
		return true;
	}

	if (bAutoReverse)
	{
		if (bOnlyReverseWhenStuck)
		{
			if (!bIsStuck)
			{
				return false;
			}
		}
		if (bReversing)
		{
			// If we're already revesing, include the threshold for deciding whether we should reverse or not
			// this prevents the vehicle constantly trying to reverse and move forward while its near the ShouldReverse angle
			return (TurnAngle > (ShouldReverseAngle - ReverseThreshold) && TargetDistance < ReverseMaxDistance);
		}
		else
		{
			return (TurnAngle > ShouldReverseAngle && TargetDistance < ReverseMaxDistance);
		}
	}
	else
	{
		return false;
	}
}

bool UVehiclePathFollowingComponent::GetPathPointDataByIndex(int Index, FVector &PointLocation, class UClass* &AreaClass, bool &bIsOnNavLink)
{
	FNavigationPath* PathInstance = Path.Get();

	if (PathInstance)
	{
		if (PathInstance->GetPathPoints().IsValidIndex(Index))
		{
			PointLocation = PathInstance->GetPathPoints()[Index].Location;
			const ARecastNavMesh* RecastNavMesh = Cast<const ARecastNavMesh>(PathInstance->GetNavigationDataUsed());
			if (RecastNavMesh)
			{
				FNavMeshNodeFlags NodeFlags(PathInstance->GetPathPoints()[Index].Flags);
				AreaClass = RecastNavMesh->GetAreaClass(NodeFlags.Area)->GetClass();
				bIsOnNavLink = NodeFlags.IsNavLink();

				return true;
			}
		}
	}

	return false;
}

float UVehiclePathFollowingComponent::CalculateStoppingDistance(float BrakingIntensity, float FrictionCoefficient, float Velocity)
{
	float FullBrakeDistance = FMath::Square(Velocity / (254 * (FrictionCoefficient))) * 100;
	return FMath::Lerp(FullBrakeDistance * 2, FullBrakeDistance, BrakingIntensity);
}

float UVehiclePathFollowingComponent::CalculateCurveRadius(FVector PointA, FVector PointB)
{
	FVector Origin = (PointA + PointB) / 2;

	FVector PointC = UKismetMathLibrary::GetDirectionUnitVector(PointA, PointB).RotateAngleAxis(90.f, FVector(0.f, 0.f, 1.f)) * FVector::Dist(PointA, PointB) + PointB;

	FVector HalfWayPoint = PointC + PointA / 2.f;

	//FMath::Sqrt(())
	return FVector::Dist(HalfWayPoint, PointA);
}

float UVehiclePathFollowingComponent::GetMaximumCorneringSpeed(float CurveRadius)
{
	// We're ignoring the beginning part because we don't care about the slope and Sin(0) is always 0, whereas cos(0) gives 1
	return FMath::Sqrt((VehicleMass * WorldGravity * CurveRadius) / VehicleMass);
}

void UVehiclePathFollowingComponent::UpdateDriving(FVector Destination, float DeltaTime)
{
	SCOPE_CYCLE_COUNTER(STAT_VehicleUpdateDriving);

	// Make sure we have an associated move component
	if (MovementComp)
	{
		// check if we want to use rotation, and also if we're on the last path index
		const bool bShouldUseRotation = bUseRotation && (Path->GetPathPoints().Num() - 1) == GetCurrentPathIndex();

		if (bUseRotation)
		{
			// if we want to rotate towards a specific direction, then calculate the destination angle based on the rotation by a vector extended out from the destination
			TargetAngle = CalculateDestinationAngle(Destination + DestinationRotation.GetComponentForAxis(EAxis::X) * 50000.f);
		}
		else
		{
			TargetAngle = CalculateDestinationAngle(Destination);
		}

		const float CurrentSpeed = GetControlledPawn()->GetVelocity().Size2D();

		// Use target location instead of move focus for calculating distance so it works with the crowd simulation
		// Crowd simulation uses direction vector offset by about 500 units, so the destination would always be constant if using move focus
		// However if we're stuck, use the normal destination instead, as this will be used as a reverse target
		DestinationDistance = CalculateDestinationDistance(bIsStuck ? Destination : GetCurrentTargetLocation());

		float TurnSign = FMath::Sign(TargetAngle);
		TargetAngle = FMath::Abs(TargetAngle);

		// Update steering and throttle
		float NormalisedSteering = GetNormalisedValue(TargetAngle) * TurnSign;

		FinalDestinationDistance = FVector::Dist(GetPathDestination(), GetAgentLocation());
		NextNavLinkDistance = GetNextNavLinkDistance();

		// If using the advanced speed control the stopping distance will be automatically calculated
		// This is the maximum distance it takes to slow down from the speed
		// Should change the speed to use desired speed instead?
		if (bAutoCalculateSlowdownDistance)
		{
			SlowdownDistance = CalculateStoppingDistance(BrakeAmount, StaticFrictionCoefficient, CurrentSpeed);
		}

		// Adjusts the user desired speed by the amount required to slow down properly
		AdjustedDesiredSpeed = GetDesiredSlowdownSpeed(DestinationDistance);

		// Reverse Checks
		FVector LocDifference = Destination - GetAgentLocation();
		float TempReverseAngle = GetVectorAngle(LocDifference, GetControlledPawn()->GetActorForwardVector() * -1);
		float ReverseAngle = FMath::Abs(TempReverseAngle + 180.f);

		bReversing = ShouldReverse(TargetAngle, DestinationDistance);

		// The difference in speed between 
		float SpeedDifference = 0.f;

		if (bThrottleUsePID)
		{
			SpeedDifference = FMath::GetMappedRangeValueClamped(FVector2D(-DesiredSpeedThrottleThreshold, DesiredSpeedThrottleThreshold), FVector2D(-1.f, 1.f), AdjustedDesiredSpeed - CurrentSpeed);

			ThrottlePID.AddMeasuredValue(SpeedDifference, DeltaTime);
			CalculatedThrottleValue = ThrottlePID.GetPIDValue();

		}
		else
		{
			// Steps up and down the throttle based on the desired speed
			CalculatedThrottleValue = AdjustThrottleForDesiredSpeed(AdjustedDesiredSpeed);
		}

		float ModifiedSteering;
			
		// Adjust the steering by a curve or exponent
		// this makes vehicles turn more sharply the greater the angle that they are away from their target

		if (SteeringCurve)
		{
			ModifiedSteering = SteeringCurve->GetFloatValue(NormalisedSteering);
		}
		else if(!bThrottleUsePID)
		{
			ModifiedSteering = FMath::Clamp(NormalisedSteering * SteeringMultiplier, -1.f, 1.f);
		}
		else
		{
			ModifiedSteering = FMath::Clamp(NormalisedSteering, -1.f, 1.f);
		}
		
		if (bReversing)
		{
			if (SteeringCurve)
			{
				ModifiedSteering = SteeringCurve->GetFloatValue(GetNormalisedValue(TempReverseAngle)) * TurnSign;
			}
			else
			{
				ModifiedSteering = GetNormalisedValue(TempReverseAngle) * TurnSign * SteeringMultiplier;
			}	
		}

		if (bSteeringUsePID)
		{
			SteeringPID.AddMeasuredValue(ModifiedSteering, DeltaTime);
			ModifiedSteering = SteeringPID.GetPIDValue();
		}

		// Cast to a vehicle movement component, this might not be valid if a user isnt using a wheeled vehicle implementation
		VehicleMoveComp = Cast<UWheeledVehicleMovementComponent>(MovementComp);
		
		// Clamp the throttle value
		CalculatedThrottleValue = FMath::Clamp(CalculatedThrottleValue, MinThrottle, 1.f);


		// If we are trying to steer towards our target then just cut the throttle to the minimum
		if (FMath::Abs(ModifiedSteering) > NormalisedTurnThreshold)
		{
			CalculatedThrottleValue = MinThrottle;
		}

		float CurrentBrake = BrakeAmount;

		// Update the braking of the vehicle
		if (CurrentSpeed > AdjustedDesiredSpeed + DesiredSpeedThreshold + BrakeThreshold)
		{
			if (DestinationDistance < SlowdownDistance)
			{
				// In this case we need to apply full emergency braking instead of the normal braking amount
				CurrentBrake = MaxEmergencyBrakeAmount;
				CalculatedThrottleValue = 0.f;
			}
			else
			{
				CalculatedThrottleValue = 0.f;
			}
		}
		else
		{
			CurrentBrake = 0.f;
		}

		// Set the values on the vehicle
		SetSteering(ModifiedSteering);
		SetThrottle(bReversing ? CalculatedThrottleValue * -1.f : CalculatedThrottleValue);
		SetBrakes(CurrentBrake);
		
		if (bDebug)
		{
			// Show the current path destination point if we're debugging
			DrawDebugPoint(GetWorld(), Destination, 60.0f, FColor::Blue, false, 0.1f);

			// If debugging is enabled, show all the path points
			if (Path.IsValid())
			{
				for (int i = 0; i < Path->GetPathPoints().Num(); ++i)
				{
					DrawDebugPoint(GetWorld(), Path->GetPathPoints()[i].Location, 40.0f, FColor::Yellow, false, 0.1f);
					if (i == SlowdownSampleIndex && i != 0)
					{
						DrawDebugLine(GetWorld(), GetAgentLocation(), Path->GetPathPoints()[i].Location, FColor::Red, false, 0.01f);
					}
				}
			}

			GEngine->AddOnScreenDebugMessage(0, 1.0f, FColor::Cyan, FString::Printf(TEXT("Normalised Steering %0.3f Throttle %0.3f Brake %0.3f  SpeedDifference %0.3f"), ModifiedSteering, CalculatedThrottleValue, CurrentBrake, SpeedDifference));
			GEngine->AddOnScreenDebugMessage(1, 1.0f, FColor::Cyan, FString::Printf(TEXT("Adjusted Desired Speed %0.3f Current Speed %0.3f Slowdown Angle %0.3f Average Angle Ahead %0.3f Next Nav Link Distance %0.3f"), AdjustedDesiredSpeed, CurrentSpeed, SlowdownAngle, AverageAheadAngle, NextNavLinkDistance));
			GEngine->AddOnScreenDebugMessage(2, 1.0f, FColor::Cyan, FString::Printf(TEXT("TargetAngle %0.3f DestinationDistance : %0.3f SlowdownDistance: % 0.3f Max Corner Speed: %0.3f"), TargetAngle, DestinationDistance, SlowdownDistance, MaxCornerSpeed));
			GEngine->AddOnScreenDebugMessage(3, 1.0f, FColor::Cyan, FString::Printf(TEXT("Reverse Mode : %s Reverse Angle : %0.3f"), bReversing ? TEXT("true") : TEXT("false"), TempReverseAngle));
			GEngine->AddOnScreenDebugMessage(4, 1.0f, FColor::Cyan, FString::Printf(TEXT("Is Stuck : %s Using Rotation : %s"), bIsStuck ? TEXT("true") : TEXT("false"), bUseRotation ? TEXT("true") : TEXT("false")));
		}
	}
}

void UVehiclePathFollowingComponent::SetSteering(float Steering)
{
	if (bCustomSteering && bImplementsInterface)
	{
		// if the user wants custom steering and the interface is implemented into the pawn, then execute it there
		IVehicleAIInterface::Execute_CustomSteering(GetControlledPawn(), TargetAngle, Steering, DestinationDistance);
	}
	else if (VehicleMoveComp)
	{
		VehicleMoveComp->SetSteeringInput(Steering);
	}
}

void UVehiclePathFollowingComponent::SetThrottle(float Throttle)
{
	if (bCustomThrottle && bImplementsInterface)
	{
		IVehicleAIInterface::Execute_CustomThrottle(GetControlledPawn(), TargetAngle, DestinationDistance, AdjustedDesiredSpeed, Throttle);
	}
	else if (VehicleMoveComp)
	{
		VehicleMoveComp->SetThrottleInput(Throttle);
	}
}

void UVehiclePathFollowingComponent::SetBrakes(float Brakes)
{
	if (bCustomBrake && bImplementsInterface)
	{
		IVehicleAIInterface::Execute_CustomBraking(GetControlledPawn(), TargetAngle, DestinationDistance, AdjustedDesiredSpeed, Brakes);
	}
	else if(VehicleMoveComp)
	{
		VehicleMoveComp->SetBrakeInput(Brakes);
	}
}

bool UVehiclePathFollowingComponent::DoesControlledPawnImplementInterface()
{
	return GetControlledPawn()->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass());
}

float UVehiclePathFollowingComponent::GetNormalisedValue(float Turn)
{
	return UKismetMathLibrary::NormalizeToRange(FMath::Abs(Turn), 0.f, 180.f);
}

float UVehiclePathFollowingComponent::GetNextNavLinkDistance()
{
	TArray<FNavPathPoint> Points = Path.Get()->GetPathPoints();

	// Clamp the max index
	int MaxIndex = GetCurrentPathIndex() + CornerSlowdownSamples + 1;
	MaxIndex = FMath::Clamp(MaxIndex, 0, (Points.Max() - 1));

	float Distance = 0.f;

	if (Points.IsValidIndex(GetCurrentPathIndex()))
	{
		Distance = FVector::Dist(GetAgentLocation(), Points[GetCurrentPathIndex()]);		
	}

	for (int i = GetCurrentPathIndex(); i <= MaxIndex; i++)
	{
		if (Points.IsValidIndex(i) && Points.IsValidIndex(i + 1))
		{
			Distance = Distance + FVector::Dist(Points[i].Location, Points[i + 1].Location);

			if (FNavMeshNodeFlags(Points[i + 1].Flags).IsNavLink())
			{
				// If this is a NavLink, return the distance to this NavLink on the path
				return FVector::Dist(GetAgentLocation(), Points[i].Location);
			}
		}
		else
		{
			break;
		}
	}
	// Return a really high number if no link is found on the rest of the path
	return 10000000.f;
}

UWheeledVehicleMovementComponent * UVehiclePathFollowingComponent::GetVehicleMovementComponent()
{
	if (VehicleMoveComp)
	{
		return VehicleMoveComp;
	}
	else
	{
		UWheeledVehicleMovementComponent* FoundMovementComp = Cast<UWheeledVehicleMovementComponent>(MovementComp);
		if (FoundMovementComp)
		{
			VehicleMoveComp = FoundMovementComp;
			return VehicleMoveComp;
		}
	}
	return nullptr;
}

APawn * UVehiclePathFollowingComponent::GetControlledPawn()
{
	if (MovementComp)
	{
		APawn* Owner = Cast<APawn>(MovementComp->GetOwner());
		if (Owner)
			return Owner;
	}
	UE_LOG(LogTemp, Warning, TEXT("Movement Component not valid!"));
	return nullptr;
}

FVector UVehiclePathFollowingComponent::GetAgentLocation()
{
	if (GetControlledPawn())
	{
		return GetControlledPawn()->GetActorLocation();
	}
	return FVector();
}

float UVehiclePathFollowingComponent::CalculateThrottle(float DestinationAngle)
{
	return 1.f;
}

float UVehiclePathFollowingComponent::AngleToNextPathPoint()
{
	// Check that the path is valid first
	if (!Path.IsValid())
		return 0.0f;

	uint32 CurrentPathIndex = GetCurrentPathIndex();

	return FMath::Abs(GetCurrentDirection().ToOrientationRotator().Yaw);
}

float UVehiclePathFollowingComponent::GetVectorAngle(FVector A, FVector B)
{
	A = A.GetSafeNormal();
	B = B.GetSafeNormal();
	return UKismetMathLibrary::DegAcos(FVector::DotProduct(A, B) / (A.Size() * B.Size()));
}

float UVehiclePathFollowingComponent::CalculateDestinationDistance(FVector Destination)
{
	return FVector::Dist(GetAgentLocation(), Destination);
}

float UVehiclePathFollowingComponent::CalculateDestinationAngle(FVector Destination)
{
	FVector LocDifference = Destination - GetAgentLocation();
	float SignAngle = GetVectorAngle(LocDifference, GetControlledPawn()->GetActorRightVector());
	SignAngle = (SignAngle < 90.0f) ? 1.0f : -1.0f;
	return GetVectorAngle(LocDifference, GetControlledPawn()->GetActorForwardVector()) * SignAngle;
}

float UVehiclePathFollowingComponent::AdjustThrottleForDesiredSpeed(float InDesiredSpeed)
{
	float CurrentSpeed = FMath::Abs(GetControlledPawn()->GetVelocity().Size());

	float ThrottleStep = DesiredSpeedThrottleStepMax;

	if (FMath::IsNearlyEqual(CurrentSpeed, DesiredSpeed, DesiredSpeedThrottleThreshold))
	{
		ThrottleStep = DesiredSpeedThrottleStepMin;
	}

	if (FMath::IsNearlyEqual(CurrentSpeed, DesiredSpeed, DesiredSpeedThreshold))
	{
		// If within the desired threshold already, then don't adjust the throttle
		return CalculatedThrottleValue;
	}
	else if(CurrentSpeed > DesiredSpeed)
	{
		return FMath::Clamp(CalculatedThrottleValue - ThrottleStep, 0.f, 1.f);
	}
	else
	{
		return FMath::Clamp(CalculatedThrottleValue + ThrottleStep, 0.f, 1.f);
	}
}

void UVehiclePathFollowingComponent::FollowPathSegment(float DeltaTime)
{
	SCOPE_CYCLE_COUNTER(STAT_VehicleFollowPath);

	UCrowdFollowingComponent::FollowPathSegment(DeltaTime);

	UpdateStuckSamples();

	// Crowd simulation uses an adjusted move focus instead of the end of the path segment (no string pulling)
	FVector Destination = IsCrowdSimulationEnabled() ? GetMoveFocus(false) : GetCurrentTargetLocation();

	// Adjust the destination from the Vehicle AI controller if needs be
	AVehicleAIController* VehicleController = Cast<AVehicleAIController>(GetOwner());

	if (VehicleController)
	{
		Destination = VehicleController->GetCustomDestination(Destination);
	}

	if (bManualUnStuck)
	{
		UpdateDriving(Destination, DeltaTime);
	}

	// If we're stuck try to unstuck
	if (bIsStuck && !bWalkingNavLinkStart)
	{
		UpdateDriving(UnStuckDestination, DeltaTime);
		float Distance = FVector::Dist(GetAgentLocation(), UnStuckDestination);
		if (Distance < StuckAcceptanceRadius)
		{
			// if the distance is less than the acceptance radius, we can stop our stuck logic
			bIsStuck = false;
		}
	}
	else
	{
		// if we're not currently stuck lets check for the next frame
		bIsStuck = IsStuck();

		// If stuck, calculate a destination for unstuck for use next frame
		if (bIsStuck)
		{
			UnStuckDestination = CalculateUnStuckDestination();
			return;
		}

		// Call custom driving method
		UpdateDriving(Destination, DeltaTime);
	}
}

void UVehiclePathFollowingComponent::UpdatePathSegment()
{
	UCrowdFollowingComponent::UpdatePathSegment();

	if (MovementComp && Path.IsValid())
	{
		// Setup the slowdown angle which is used in the slowdown calculation
		SlowdownAngle = FMath::Abs(CalculateLargestAngleWithSamples());

		AverageAheadAngle = FMath::Abs(CalculateAverageAngleWithSamples());

		float DistanceLeft = (*Path->GetPathPointLocation(Path->GetPathPoints().Num() - 1) - MovementComp->GetActorLocation()).Size();

		if (DistanceLeft < AcceptanceRadius)
		{
			OnSegmentFinished();
			OnPathFinished(EPathFollowingResult::Success);
		}
	}
}

void UVehiclePathFollowingComponent::SetMoveSegment(int32 SegmentStartIndex)
{
	int32 EndSegmentIndex = SegmentStartIndex + 1;
	FNavigationPath* PathInstance = Path.Get();

	if (PathInstance != nullptr && PathInstance->GetPathPoints().IsValidIndex(SegmentStartIndex) && PathInstance->GetPathPoints().IsValidIndex(EndSegmentIndex))
	{
		// Allow the AI Controller to modify the MoveSegment Location
		AVehicleAIController* VehicleController = Cast<AVehicleAIController>(GetOwner());

		FVector SegmentDestination = PathInstance->GetPathPoints()[EndSegmentIndex].Location;
		FNavPathPoint DestinationPoint = PathInstance->GetPathPoints()[EndSegmentIndex];
		

		const ARecastNavMesh* RecastNavMesh = Cast<const ARecastNavMesh>(PathInstance->GetNavigationDataUsed());
		if (RecastNavMesh)
		{
			FNavMeshNodeFlags NodeFlags(PathInstance->GetPathPoints()[EndSegmentIndex].Flags);
			const UClass* AreaClass = RecastNavMesh->GetAreaClass(NodeFlags.Area);
			
			FNavMeshNodeFlags StartNodeFlags(PathInstance->GetPathPoints()[SegmentStartIndex].Flags);

			bool bOnNavLink = StartNodeFlags.IsNavLink() || NodeFlags.IsNavLink();
			bOnNavLink = bWalkingNavLinkStart;

			if (VehicleController)
			{
				SegmentDestination = VehicleController->OnNewPathSegment(EndSegmentIndex, PathInstance->GetPathPoints()[MoveSegmentStartIndex].Location, SegmentDestination, AreaClass, bOnNavLink);
			}
		}

		DestinationPoint.Location = SegmentDestination;

		PathInstance->GetPathPoints()[EndSegmentIndex] = DestinationPoint;
	}

	UCrowdFollowingComponent::SetMoveSegment(SegmentStartIndex);

	// Adjust the acceptance radius based on the user created acceptance radius

	if (PathInstance != nullptr && PathInstance->GetPathPoints().IsValidIndex(SegmentStartIndex) && PathInstance->GetPathPoints().IsValidIndex(EndSegmentIndex))
	{
		if (bUseCustomAcceptanceRadius)
		{
			const FNavPathPoint& PathPt0 = PathInstance->GetPathPoints()[SegmentStartIndex];
			const FNavPathPoint& PathPt1 = PathInstance->GetPathPoints()[EndSegmentIndex];


			CurrentAcceptanceRadius = (PathInstance->GetPathPoints().Num() == (EndSegmentIndex + 1))
				? GetFinalAcceptanceRadius(*PathInstance, OriginalMoveRequestGoalLocation)
				// pick appropriate value base on whether we're going to nav link or not
				: (FNavMeshNodeFlags(PathPt1.Flags).IsNavLink() == false ? VehiclePathPointAcceptanceRadius : VehicleNavLinkAcceptanceRadius);

		}
	}
}

void UVehiclePathFollowingComponent::OnPathFinished(const FPathFollowingResult & Result)
{

	// When the path ends, set all the steering and throttle to nothing, and apply the brakes
	SetSteering(0.f);
	SetThrottle(0.f);
	SetBrakes(1.f);


	UCrowdFollowingComponent::OnPathFinished(Result);
}

void UVehiclePathFollowingComponent::Initialize()
{
	UCrowdFollowingComponent::Initialize();

	if (MovementComp)
	{
		VehicleMoveComp = Cast<UWheeledVehicleMovementComponent>(MovementComp);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Vehicle cannot use AI as it does not have a UNavMovementComponent, please add any movement component if none exists already"));
	}

	SteeringPID.ResetController(SteeringPIDSetup);
	ThrottlePID.ResetController(ThrottlePIDSetup);

	bImplementsInterface = DoesControlledPawnImplementInterface();

	// Messy solution to allow blueprint enum to be used with the crowd simulation enum
	SetVehicleCrowdSimulation(DetourCrowdSimulationState);

	// Setup crowd properties
	SetCrowdCollisionQueryRange(MovementComp->GetNavAgentPropertiesRef().AgentRadius * 12.f, true);
	SetCrowdPathOptimizationRange(MovementComp->GetNavAgentPropertiesRef().AgentRadius * 30.f, true);
	SetCrowdAvoidanceRangeMultiplier(CrowdAvoidanceRangeMultiplier, true);

	
}

float UVehiclePathFollowingComponent::GetDesiredSlowdownSpeed(float DistanceToNextPoint)
{
	float Alpha = FMath::GetMappedRangeValueClamped(FVector2D(SlowdownDistance, 0.f), FVector2D(0.f, 1.f), DistanceToNextPoint);

	if (bSlowdownAtNavLinks)
	{
		NextNavLinkDistance = GetNextNavLinkDistance();
	}

	if (bEnableSlowdown)
	{
		if (FinalDestinationDistance < SlowdownDistance)
		{
			// If we're at the final destination point, slow down
			return FMath::Lerp(DesiredSpeed, 0.f, Alpha);
		}
		else if (bSlowdownAtNavLinks && NextNavLinkDistance < SlowdownDistance)
		{
			Alpha = FMath::GetMappedRangeValueClamped(FVector2D(SlowdownDistance, 0.f), FVector2D(0.f, 1.f), NextNavLinkDistance);
			// If we're at the navlink, slow down
			return FMath::Lerp(AdjustedDesiredSpeed, 0.f, Alpha);
		}
		else
		{
			// Handle the speed around corners

			if (bUseAdvancedSpeedControl)
			{
				// Gets the maximum speed that go around the corner, and if faster than this, it will slow down
				// We use multiple samples for this because path points can be close together
				MaxCornerSpeed = FMath::Lerp(0.f, CalculateMaximumSpeedWithSamples(), CornerSpeedControlPercentage);

				if (DesiredSpeed < MaxCornerSpeed)
				{
					return DesiredSpeed;
				}

				return MaxCornerSpeed;
			}

			if (DesiredSpeedCurve)
			{
				// Use the slowdown angle to calculate the desired speed around the corner
				return FMath::Lerp(DesiredSpeed, 0.f, DesiredSpeedCurve->GetFloatValue(FMath::Abs(SlowdownAngle)));
			}
			else
			{
				return FMath::GetMappedRangeValueClamped(FVector2D(0.f, 180.f), FVector2D(DesiredSpeed, MaxCornerSpeed), SlowdownAngle);
			}
		}
	}

	return DesiredSpeed;

}

float UVehiclePathFollowingComponent::CalculateLargestAngleWithSamples()
{
	TArray<FNavPathPoint> Points = Path.Get()->GetPathPoints();

	// Clamp the max index
	int MaxIndex = GetCurrentPathIndex() + CornerSlowdownSamples + 1;
	MaxIndex = FMath::Clamp(MaxIndex, 0, (Points.Max() - 1));

	float MaxAngle = 0.f;
	float Distance = 0.f;

	for(int i = GetCurrentPathIndex(); i <= MaxIndex; i++)
	{
		if (Points.IsValidIndex(i) && Points.IsValidIndex(i + 1))
		{
			if (Distance > SlowdownDistance)
			{
				break;
			}

			MaxAngle = MaxAngle + UKismetMathLibrary::FindLookAtRotation(Points[i].Location, Points[i + 1].Location).Yaw;
			SlowdownSampleIndex = i;

			Distance = Distance + FVector::Dist(Points[i].Location, Points[i + 1].Location);
		}
		else
		{
			break;
		}
	}
	return MaxAngle;
}

float UVehiclePathFollowingComponent::CalculateAverageAngleWithSamples()
{
	TArray<FNavPathPoint> Points = Path.Get()->GetPathPoints();

	// Clamp the max index
	int MaxIndex = GetCurrentPathIndex() + CornerSlowdownSamples + 1;
	MaxIndex = FMath::Clamp(MaxIndex, 0, (Points.Max() - 1));

	float Angles = 0.f;
	int Samples = 0;
	float Distance = 0.f;

	for (int i = GetCurrentPathIndex(); i <= MaxIndex; i++)
	{
		if (Points.IsValidIndex(i) && Points.IsValidIndex(i + 1))
		{
			if (Distance > SlowdownDistance)
			{
				break;
			}
			Angles = Angles + UKismetMathLibrary::FindLookAtRotation(Points[i].Location, Points[i + 1].Location).Yaw;
			
			SlowdownSampleIndex = i;
			
			Samples++;

			Distance = Distance + FVector::Dist(Points[i].Location, Points[i + 1].Location);

		}
		else
		{
			break;
		}
	}

	// We don't need to take into account the current angle
	//Angles = Angles + UKismetMathLibrary::FindLookAtRotation(GetAgentLocation(), Points[GetCurrentPathIndex()].Location).Yaw;

	return Angles / Samples;
}

float UVehiclePathFollowingComponent::CalculateMaximumSpeedWithSamples()
{
	TArray<FNavPathPoint> Points = Path.Get()->GetPathPoints();

	// Clamp the max index
	int MaxIndex = GetCurrentPathIndex() + CornerSlowdownSamples + 1;
	MaxIndex = FMath::Clamp(MaxIndex, 0, (Points.Max() - 1));

	float MaximumCorneringSpeed = DesiredSpeed;
	float TempSpeed = DesiredSpeed;

	// Calculate the stopping distance at this desired speed, we don't need to check further ahead than this as we would already be able to stop
	float StoppingDistance = CalculateStoppingDistance(BrakeAmount, 0.7f, DesiredSpeed);

	// We work out the number of samples (capped at the maximum slowdown samples for perf reasons) based on the stopping distance and not an arbitary value
	float Distance = 0.f;
	int Samples = 1;

	for (int i = GetCurrentPathIndex(); i <= MaxIndex; i++)
	{
		if (Points.IsValidIndex(i) && Points.IsValidIndex(i + 1))
		{
			if (Distance > SlowdownDistance)
			{
				break;
			}
			//MaxAngle = MaxAngle + UKismetMathLibrary::FindLookAtRotation(Points[i].Location, Points[i + 1].Location).Yaw;

			// Adjust the speed by the maximum speed
			TempSpeed = TempSpeed + GetMaximumCorneringSpeed(CalculateCurveRadius(Points[i].Location, Points[i + 1]));

			if (TempSpeed < MaximumCorneringSpeed)
			{
				MaximumCorneringSpeed = TempSpeed;
			}

			SlowdownSampleIndex = i;

			Samples++;

			// Update the distance we've traversed here
			Distance = Distance + FVector::Dist(Points[i].Location, Points[i + 1].Location);
		}
		else
		{
			break;
		}
	}

	float MaxCornerFromAgent = GetMaximumCorneringSpeed(CalculateCurveRadius(GetAgentLocation(), Points[GetCurrentPathIndex()].Location));

	if (MaxCornerFromAgent < MaximumCorneringSpeed)
	{
		MaximumCorneringSpeed = MaxCornerFromAgent;
	}

	return MaximumCorneringSpeed;
}

FVector UVehiclePathFollowingComponent::CalculateUnStuckDestination()
{
	APawn* Pawn = GetControlledPawn();

	if (Pawn->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass()))
	{
		// if we implement the interface, then 
		FVector Destination;

		if (!IVehicleAIInterface::Execute_OnVehicleStuck(Pawn, Destination))
		{
			bManualUnStuck = false;
			if (Destination != FVector::ZeroVector)
			{
				// Make sure that the function is implemented (not a zero vector), if it is return that result
				return Destination;
			}
		}
		else
		{
			bManualUnStuck = true;
		}

	}

	return GetControlledPawn()->GetActorLocation() + ((GetControlledPawn()->GetActorForwardVector() * -1) * UnStuckDistance);
}

bool UVehiclePathFollowingComponent::UpdateStuckSamples()
{
	const float GameTime = GetWorld()->GetTimeSeconds();
	if (bUseStuckDetection && MovementComp && GameTime > (LastStuckSampleTime + StuckDetectionInterval) && StuckDetectionSampleCount > 0)
	{
		LastStuckSampleTime = GameTime;

		if (StuckLocationSamples.Num() == NextStuckSampleIdx)
		{
			StuckLocationSamples.AddZeroed(1);
		}

		StuckLocationSamples[NextStuckSampleIdx] = GetAgentLocation();
		NextStuckSampleIdx = (NextStuckSampleIdx + 1) % StuckDetectionSampleCount;
		return true;
	}

	return false;
}

void UVehiclePathFollowingComponent::SetStuckDetection(bool bActive)
{
	bUseStuckDetection = bActive;
}

bool UVehiclePathFollowingComponent::IsStuck()
{
	bool bStuck = false;
	
	if (bUseStuckDetection && LocationSamples.Num() == BlockDetectionSampleCount && BlockDetectionSampleCount > 0)
	{
		bStuck = true;

		for (FVector StuckSample : StuckLocationSamples)
		{
			const float TestDistanceSq = FVector::DistSquared(StuckSample, GetAgentLocation());
			if (TestDistanceSq > StuckDetectionDistance)
			{
				bStuck = false;
				break;
			}
		}
	}
	return bStuck;
}

FVehicleHandlingConfig UVehiclePathFollowingComponent::GetHandlingConfig()
{
	FVehicleHandlingConfig Config;

	Config.MinThrottle = MinThrottle;
	Config.DesiredSpeedThreshold = DesiredSpeedThreshold;
	Config.bUseBrakes = bUseBrakes;
	Config.BrakeThreshold = BrakeThreshold;
	Config.BrakeAmount = BrakeAmount;

	Config.bEnableSlowdown = bEnableSlowdown;
	Config.SlowdownDistance = SlowdownDistance;
	Config.CornerSlowdownSamples = CornerSlowdownSamples;
	Config.MaxCornerSpeed = MaxCornerSpeed;

	Config.SteeringPIDConfig = SteeringPIDSetup;
	Config.ThrottlePIDConfig = ThrottlePIDSetup;

	return Config;
}

void UVehiclePathFollowingComponent::SetHandlingConfig(FVehicleHandlingConfig HandlingConfig)
{
	MinThrottle = HandlingConfig.MinThrottle;
	DesiredSpeedThreshold = HandlingConfig.DesiredSpeedThreshold;
	bUseBrakes = HandlingConfig.bUseBrakes;
	BrakeThreshold = HandlingConfig.BrakeThreshold;
	BrakeAmount = HandlingConfig.BrakeAmount;

	bEnableSlowdown = HandlingConfig.bEnableSlowdown;
	SlowdownDistance = HandlingConfig.SlowdownDistance;
	CornerSlowdownSamples = HandlingConfig.CornerSlowdownSamples;
	MaxCornerSpeed = HandlingConfig.MaxCornerSpeed;

	SteeringPIDSetup = HandlingConfig.SteeringPIDConfig;
	ThrottlePIDSetup = HandlingConfig.ThrottlePIDConfig;
	
	SteeringPID.ResetController(HandlingConfig.SteeringPIDConfig);
	ThrottlePID.ResetController(HandlingConfig.ThrottlePIDConfig);
}

/****************************/
/*  Crowd Agent Interface  */
/**************************/

FVector UVehiclePathFollowingComponent::GetCrowdAgentLocation() const
{
	return MovementComp->GetActorLocation();
}

FVector UVehiclePathFollowingComponent::GetCrowdAgentVelocity() const
{
	return MovementComp->Velocity;
}

float UVehiclePathFollowingComponent::GetCrowdAgentMaxSpeed() const
{
	return VehicleMaxSpeed;
}

int32 UVehiclePathFollowingComponent::GetCrowdAgentAvoidanceGroup() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(MovementComp);

	if (Interface)
	{
		return Interface->GetAvoidanceGroupMask();
	}

	return int32();
}

int32 UVehiclePathFollowingComponent::GetCrowdAgentGroupsToAvoid() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(MovementComp);

	if (Interface)
	{
		return Interface->GetGroupsToAvoidMask();
	}

	return int32();
}

int32 UVehiclePathFollowingComponent::GetCrowdAgentGroupsToIgnore() const
{
	IRVOAvoidanceInterface* Interface = Cast<IRVOAvoidanceInterface>(MovementComp);

	if (Interface)
	{
		return Interface->GetGroupsToIgnoreMask();
	}

	return int32();
}
