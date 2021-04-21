// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/PIDController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIDController() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPIDController();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	VEHICLEAIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPIDCoefficients();
	VEHICLEAIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPIDError();
// End Cross Module References
class UScriptStruct* FPIDController::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLEAIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPIDController_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIDController, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("PIDController"), sizeof(FPIDController), Get_Z_Construct_UScriptStruct_FPIDController_Hash());
	}
	return Singleton;
}
template<> VEHICLEAIPLUGIN_API UScriptStruct* StaticStruct<FPIDController>()
{
	return FPIDController::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIDController(FPIDController::StaticStruct, TEXT("/Script/VehicleAIPlugin"), TEXT("PIDController"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDController
{
	FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDController()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIDController")),new UScriptStruct::TCppStructOps<FPIDController>);
	}
} ScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDController;
	struct Z_Construct_UScriptStruct_FPIDController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDController_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIDController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIDController>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIDController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
		nullptr,
		&NewStructOps,
		"PIDController",
		sizeof(FPIDController),
		alignof(FPIDController),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDController_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDController_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIDController()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIDController_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIDController"), sizeof(FPIDController), Get_Z_Construct_UScriptStruct_FPIDController_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIDController_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIDController_Hash() { return 421533895U; }
class UScriptStruct* FPIDCoefficients::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLEAIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPIDCoefficients_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIDCoefficients, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("PIDCoefficients"), sizeof(FPIDCoefficients), Get_Z_Construct_UScriptStruct_FPIDCoefficients_Hash());
	}
	return Singleton;
}
template<> VEHICLEAIPLUGIN_API UScriptStruct* StaticStruct<FPIDCoefficients>()
{
	return FPIDCoefficients::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIDCoefficients(FPIDCoefficients::StaticStruct, TEXT("/Script/VehicleAIPlugin"), TEXT("PIDCoefficients"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDCoefficients
{
	FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDCoefficients()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIDCoefficients")),new UScriptStruct::TCppStructOps<FPIDCoefficients>);
	}
} ScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDCoefficients;
	struct Z_Construct_UScriptStruct_FPIDCoefficients_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProportionalCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProportionalCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegralCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IntegralCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DerivativeCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DerivativeCoefficient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDCoefficients_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIDCoefficients>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_ProportionalCoefficient_MetaData[] = {
		{ "Category", "PID Coefficients" },
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_ProportionalCoefficient = { "ProportionalCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIDCoefficients, ProportionalCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_ProportionalCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_ProportionalCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_IntegralCoefficient_MetaData[] = {
		{ "Category", "PID Coefficients" },
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_IntegralCoefficient = { "IntegralCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIDCoefficients, IntegralCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_IntegralCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_IntegralCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_DerivativeCoefficient_MetaData[] = {
		{ "Category", "PID Coefficients" },
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_DerivativeCoefficient = { "DerivativeCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIDCoefficients, DerivativeCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_DerivativeCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_DerivativeCoefficient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIDCoefficients_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_ProportionalCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_IntegralCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIDCoefficients_Statics::NewProp_DerivativeCoefficient,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIDCoefficients_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
		nullptr,
		&NewStructOps,
		"PIDCoefficients",
		sizeof(FPIDCoefficients),
		alignof(FPIDCoefficients),
		Z_Construct_UScriptStruct_FPIDCoefficients_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDCoefficients_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIDCoefficients()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIDCoefficients_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIDCoefficients"), sizeof(FPIDCoefficients), Get_Z_Construct_UScriptStruct_FPIDCoefficients_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIDCoefficients_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIDCoefficients_Hash() { return 2193467769U; }
class UScriptStruct* FPIDError::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLEAIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FPIDError_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIDError, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("PIDError"), sizeof(FPIDError), Get_Z_Construct_UScriptStruct_FPIDError_Hash());
	}
	return Singleton;
}
template<> VEHICLEAIPLUGIN_API UScriptStruct* StaticStruct<FPIDError>()
{
	return FPIDError::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIDError(FPIDError::StaticStruct, TEXT("/Script/VehicleAIPlugin"), TEXT("PIDError"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDError
{
	FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDError()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIDError")),new UScriptStruct::TCppStructOps<FPIDError>);
	}
} ScriptStruct_VehicleAIPlugin_StaticRegisterNativesFPIDError;
	struct Z_Construct_UScriptStruct_FPIDError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIDError_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIDController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIDError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIDError>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIDError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
		nullptr,
		&NewStructOps,
		"PIDError",
		sizeof(FPIDError),
		alignof(FPIDError),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIDError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIDError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIDError()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIDError_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIDError"), sizeof(FPIDError), Get_Z_Construct_UScriptStruct_FPIDError_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIDError_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIDError_Hash() { return 440053097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
