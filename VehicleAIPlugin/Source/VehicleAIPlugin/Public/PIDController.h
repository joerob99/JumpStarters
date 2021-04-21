// Copyright 2020 313 Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PIDController.generated.h"

USTRUCT()
struct FPIDError
{
	GENERATED_BODY()

	FPIDError();
	FPIDError(float NewMeasuredValue, float NewDeltaTime);


	float MeasuredValue;
	float DeltaTime;
};

USTRUCT(BlueprintType)
struct FPIDCoefficients
{
	GENERATED_BODY()

	FPIDCoefficients();
	FPIDCoefficients(float Proportional, float Integral, float Derivative);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID Coefficients")
	float ProportionalCoefficient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID Coefficients")
	float IntegralCoefficient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PID Coefficients")
	float DerivativeCoefficient;
};

USTRUCT()
struct FPIDController
{
	GENERATED_BODY()

	FPIDController();

	float ProportionalCoefficient;

	float IntegralCoefficient;

	float DerivativeCoefficient;

	TArray<FPIDError> Errors;

	float GetPIDValue();

	void ResetController(FPIDCoefficients Coefficients);

	void AddMeasuredValue(float MeasuredValue, float DeltaTime);

	float ProportionalError;
	float IntegralError;
	float DerivativeError;

	int NumberOfErrors = 4;
};
