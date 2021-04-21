// Copyright 2020 313 Studios. All Rights Reserved.


#include "RoadSplineMeshComponent.h"
#include "NavigationSystem.h"
#include "AI/Navigation/NavCollisionBase.h"

bool URoadSplineMeshComponent::DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) const
{
	bool bResult = Super::DoCustomNavigableGeometryExport(GeomExport);

	FCompositeNavModifier Modifier;
	Modifier.CreateAreaModifiers(this, AreaClass);
	GeomExport.AddNavModifiers(Modifier);

	return bResult;
}

void URoadSplineMeshComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass)
{
	if (NewAreaClass != AreaClass)
	{
		AreaClass = NewAreaClass;

		FNavigationSystem::UpdateComponentData(*this);
	}
}

