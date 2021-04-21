// Copyright 2020 313 Studios. All Rights Reserved.


#include "PIDController.h"

FPIDController::FPIDController()
{
	Errors.Init(FPIDError(), NumberOfErrors);
}

float FPIDController::GetPIDValue()
{
	ProportionalError = 0.f;
	IntegralError = 0.f;
	DerivativeError = 0.f;

	if (Errors.Num() >= 2)
	{
		if (Errors.IsValidIndex(0))
		{
			ProportionalError = Errors[0].MeasuredValue;
		}

		for (FPIDError Value : Errors)
		{
			IntegralError = Value.MeasuredValue * Value.DeltaTime + IntegralError;
		}

		if (Errors.IsValidIndex(0) && Errors.IsValidIndex(1))
		{
			DerivativeError = (Errors[0].MeasuredValue - Errors[1].MeasuredValue) / Errors[0].DeltaTime;
		}

	}

	ProportionalError *= ProportionalCoefficient;
	IntegralError *= IntegralCoefficient;
	DerivativeError *= DerivativeCoefficient;

	return ProportionalError + IntegralError + DerivativeError;
}

void FPIDController::ResetController(FPIDCoefficients Coefficients)
{
	ProportionalCoefficient = Coefficients.ProportionalCoefficient;
	IntegralCoefficient = Coefficients.IntegralCoefficient;
	DerivativeCoefficient = Coefficients.DerivativeCoefficient;

	Errors.Empty();

	Errors.Init(FPIDError(), NumberOfErrors);
}

void FPIDController::AddMeasuredValue(float MeasuredValue, float DeltaTime)
{
	if (Errors.IsValidIndex(0))
	{
		Errors.Insert(FPIDError(MeasuredValue, DeltaTime), 0);

		if (Errors.Num() > NumberOfErrors)
		{
			Errors.RemoveAt(Errors.Num() - 1);
		}

	}
}

FPIDError::FPIDError()
{
}

FPIDError::FPIDError(float NewMeasuredValue, float NewDeltaTime)
{
	MeasuredValue = NewMeasuredValue;
	DeltaTime = NewDeltaTime;
}

FPIDCoefficients::FPIDCoefficients()
{
}

FPIDCoefficients::FPIDCoefficients(float Proportional, float Integral, float Derivative)
{
	ProportionalCoefficient = Proportional;
	IntegralCoefficient = Integral;
	DerivativeCoefficient = Derivative;
}
