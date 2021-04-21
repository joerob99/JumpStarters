// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "Components/SplineMeshComponent.h"
#include "RoadSplineMeshComponent.generated.h"

UCLASS(ClassGroup = Rendering, hidecategories = (Physics), meta = (BlueprintSpawnableComponent))
class VEHICLEAIPLUGIN_API URoadSplineMeshComponent : public USplineMeshComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Default)
		TSubclassOf<UNavArea> AreaClass;

public:

	virtual bool DoCustomNavigableGeometryExport(FNavigableGeometryExport& GeomExport) const override;

	UFUNCTION(BlueprintCallable, Category = "AI|Navigation")
		void SetAreaClass(TSubclassOf<UNavArea> NewAreaClass = nullptr);


	
};
