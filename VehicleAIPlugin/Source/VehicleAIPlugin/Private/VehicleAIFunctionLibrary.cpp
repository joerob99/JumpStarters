// Copyright 2020 313 Studios. All Rights Reserved.


#include "VehicleAIFunctionLibrary.h"
#include "GameFramework/Pawn.h"
#include "AIController.h"
#include "Components/VehiclePathFollowingComponent.h"
#include "NavigationSystem.h"
#include "NavMesh/NavMeshPath.h"

UVehiclePathFollowingComponent * UVehicleAIFunctionLibrary::GetVehiclePathFollowingComponent(APawn* Pawn)
{
	// Make sure the user provided the pawn
	if (Pawn)
	{
		AAIController* Controller = Cast<AAIController>(Pawn->GetController());
		if (Controller)
		{
			return Cast<UVehiclePathFollowingComponent>(Controller->GetPathFollowingComponent());
		}
	}
	return nullptr;
}

float UVehicleAIFunctionLibrary::ConvertVelocityByUnit(float InputVelocity, ESpeedUnits InputVelocityType, ESpeedUnits OutputVelocityType)
{
	// Firstly convert any values into cm/s for further conversion
	float InputVelocityCm = InputVelocity;

	switch (InputVelocityType)
	{
		case ESpeedUnits::KilometersPerHour :
			InputVelocityCm = InputVelocity / 0.036f;
			break;
		case ESpeedUnits::MilesPerHour :
			InputVelocityCm = InputVelocity / 0.0223694;
			break;
	}

	switch (OutputVelocityType)
	{
		case ESpeedUnits::KilometersPerHour:
			return InputVelocityCm * 0.036f;
			break;
		case ESpeedUnits::MilesPerHour:
			return InputVelocityCm * 0.0223694;
			break;
	}

	return InputVelocityCm;
}

void UVehicleAIFunctionLibrary::ConvertToTankSteering(float InSteering, float InThrottle, float TurnInPlaceThreshold, float NormalTurnMultiplier, float & OutLeftTrack, float & OutRightTrack)
{
	if (FMath::IsNearlyEqual(InSteering, 0.f))
	{
		// Move forward at normal throttle speed
		OutLeftTrack = InThrottle;
		OutRightTrack = InThrottle;
	}
	else if (InSteering >= TurnInPlaceThreshold)
	{
		// Pivot Turn
		OutLeftTrack = InSteering;
		OutRightTrack = InSteering * -1.f;
	}
	else if (InSteering > 0.f)
	{
		// Right skid turn
		OutLeftTrack = InThrottle;
		OutRightTrack = FMath::Clamp(InThrottle - (FMath::Abs(InSteering)  * NormalTurnMultiplier), 0.f, 1.f);
	}
	else
	{
		// Left skid turn
		OutLeftTrack = FMath::Clamp(InThrottle - (FMath::Abs(InSteering)  * NormalTurnMultiplier), 0.f, 1.f);
		OutRightTrack = InThrottle;
	}
}

bool UVehicleAIFunctionLibrary::SetPathPoints(AAIController* AIController, TArray<FVector> NewPathPoints)
{
	UNavigationPath* ResultPath = nullptr;
	if (AIController)
	{
		UPathFollowingComponent* PFComp = nullptr;
		if (AIController)
		{
			PFComp = AIController->GetPathFollowingComponent();
		}

		if (PFComp != nullptr)
		{
			const FNavPathSharedPtr Path = PFComp->GetPath();
			if (Path.IsValid())
			{
				TArray<FNavPathPoint> NewNavPathPoints;

				for (FVector Point : NewPathPoints)
				{
					NewNavPathPoints.Add(FNavPathPoint(Point));
				}
				
				Path.Get()->GetPathPoints() = NewNavPathPoints;
				
				return true;
			}
		}
	}

	return false;
}

bool UVehicleAIFunctionLibrary::FollowSplinePath(AAIController* AIController, USplineComponent* Spline, float SpaceBetweenParts)
{
	UNavigationSystemV1* NavSys = AIController ? FNavigationSystem::GetCurrent<UNavigationSystemV1>(AIController->GetWorld()) : nullptr;

	if (NavSys == nullptr || AIController == nullptr || AIController->GetPawn() == nullptr || Spline == nullptr)
	{
		return false;
	}


	const ANavigationData* NavData = NavSys->GetNavDataForProps(AIController->GetNavAgentPropertiesRef());

	if (NavData)
	{
		float Length = Spline->GetSplineLength();

		FVector StartPosition = Spline->GetLocationAtDistanceAlongSpline(0.f, ESplineCoordinateSpace::World);

		AIController->MoveToLocation(StartPosition);

		TArray<FVector> NewPathPoints = TArray<FVector>();
		
		int Samples = FMath::TruncToInt(Length / SpaceBetweenParts);

		for (int i = 0; i < Samples; i++)
		{
			NewPathPoints.Add(Spline->GetWorldLocationAtDistanceAlongSpline(i * SpaceBetweenParts));
		}

		return UVehicleAIFunctionLibrary::SetPathPoints(AIController, NewPathPoints);
			
	}

		
	

	return false;
}
