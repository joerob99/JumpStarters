// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/Components/VehiclePathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehiclePathFollowingComponent() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UEnum* Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	VEHICLEAIPLUGIN_API UEnum* Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits();
	VEHICLEAIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleHandlingConfig();
	VEHICLEAIPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPIDCoefficients();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehiclePathFollowingComponent_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehiclePathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	static UEnum* E_CrowdSimulationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("E_CrowdSimulationState"));
		}
		return Singleton;
	}
	template<> VEHICLEAIPLUGIN_API UEnum* StaticEnum<E_CrowdSimulationState>()
	{
		return E_CrowdSimulationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E_CrowdSimulationState(E_CrowdSimulationState_StaticEnum, TEXT("/Script/VehicleAIPlugin"), TEXT("E_CrowdSimulationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState_Hash() { return 899569924U; }
	UEnum* Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_CrowdSimulationState"), 0, Get_Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Enabled", (int64)Enabled },
				{ "ObstacleOnly", (int64)ObstacleOnly },
				{ "Disabled", (int64)Disabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Disabled.Name", "Disabled" },
				{ "Enabled.Name", "Enabled" },
				{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
				{ "ObstacleOnly.Name", "ObstacleOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
				nullptr,
				"E_CrowdSimulationState",
				"E_CrowdSimulationState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpeedUnits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("ESpeedUnits"));
		}
		return Singleton;
	}
	template<> VEHICLEAIPLUGIN_API UEnum* StaticEnum<ESpeedUnits>()
	{
		return ESpeedUnits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedUnits(ESpeedUnits_StaticEnum, TEXT("/Script/VehicleAIPlugin"), TEXT("ESpeedUnits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits_Hash() { return 1168422631U; }
	UEnum* Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedUnits"), 0, Get_Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MilesPerHour", (int64)MilesPerHour },
				{ "KilometersPerHour", (int64)KilometersPerHour },
				{ "CentimetersPerSecond", (int64)CentimetersPerSecond },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CentimetersPerSecond.Name", "CentimetersPerSecond" },
				{ "Comment", "/* Enumeration defining the speed units used for speed control */" },
				{ "KilometersPerHour.Name", "KilometersPerHour" },
				{ "MilesPerHour.Name", "MilesPerHour" },
				{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
				{ "ToolTip", "Enumeration defining the speed units used for speed control" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
				nullptr,
				"ESpeedUnits",
				"ESpeedUnits",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVehicleHandlingConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VEHICLEAIPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVehicleHandlingConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleHandlingConfig, Z_Construct_UPackage__Script_VehicleAIPlugin(), TEXT("VehicleHandlingConfig"), sizeof(FVehicleHandlingConfig), Get_Z_Construct_UScriptStruct_FVehicleHandlingConfig_Hash());
	}
	return Singleton;
}
template<> VEHICLEAIPLUGIN_API UScriptStruct* StaticStruct<FVehicleHandlingConfig>()
{
	return FVehicleHandlingConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVehicleHandlingConfig(FVehicleHandlingConfig::StaticStruct, TEXT("/Script/VehicleAIPlugin"), TEXT("VehicleHandlingConfig"), false, nullptr, nullptr);
static struct FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFVehicleHandlingConfig
{
	FScriptStruct_VehicleAIPlugin_StaticRegisterNativesFVehicleHandlingConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VehicleHandlingConfig")),new UScriptStruct::TCppStructOps<FVehicleHandlingConfig>);
	}
} ScriptStruct_VehicleAIPlugin_StaticRegisterNativesFVehicleHandlingConfig;
	struct Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinThrottle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottlePIDConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrottlePIDConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBrakes_MetaData[];
#endif
		static void NewProp_bUseBrakes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBrakes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSlowdown_MetaData[];
#endif
		static void NewProp_bEnableSlowdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSlowdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowdownDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowdownDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerSlowdownSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CornerSlowdownSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCornerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCornerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringPIDConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringPIDConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Defines a set of properties that changes how this vehicle handles */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Defines a set of properties that changes how this vehicle handles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleHandlingConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MinThrottle_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "Comment", "/* Speed Control */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Speed Control" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MinThrottle = { "MinThrottle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, MinThrottle), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MinThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MinThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_DesiredSpeedThreshold_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_DesiredSpeedThreshold = { "DesiredSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, DesiredSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_DesiredSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_DesiredSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_ThrottlePIDConfig_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_ThrottlePIDConfig = { "ThrottlePIDConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, ThrottlePIDConfig), Z_Construct_UScriptStruct_FPIDCoefficients, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_ThrottlePIDConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_ThrottlePIDConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes_SetBit(void* Obj)
	{
		((FVehicleHandlingConfig*)Obj)->bUseBrakes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes = { "bUseBrakes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleHandlingConfig), &Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeThreshold_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeThreshold = { "BrakeThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, BrakeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeAmount_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeAmount = { "BrakeAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, BrakeAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "Comment", "/* Slowdown */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Slowdown" },
	};
#endif
	void Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown_SetBit(void* Obj)
	{
		((FVehicleHandlingConfig*)Obj)->bEnableSlowdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown = { "bEnableSlowdown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVehicleHandlingConfig), &Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SlowdownDistance_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SlowdownDistance = { "SlowdownDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, SlowdownDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SlowdownDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SlowdownDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_CornerSlowdownSamples_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_CornerSlowdownSamples = { "CornerSlowdownSamples", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, CornerSlowdownSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_CornerSlowdownSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_CornerSlowdownSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MaxCornerSpeed_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MaxCornerSpeed = { "MaxCornerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, MaxCornerSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MaxCornerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MaxCornerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SteeringPIDConfig_MetaData[] = {
		{ "Category", "Steering Control" },
		{ "Comment", "/* Steering Control */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Steering Control" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SteeringPIDConfig = { "SteeringPIDConfig", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVehicleHandlingConfig, SteeringPIDConfig), Z_Construct_UScriptStruct_FPIDCoefficients, METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SteeringPIDConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SteeringPIDConfig_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MinThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_DesiredSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_ThrottlePIDConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bUseBrakes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_BrakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_bEnableSlowdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SlowdownDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_CornerSlowdownSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_MaxCornerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::NewProp_SteeringPIDConfig,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
		nullptr,
		&NewStructOps,
		"VehicleHandlingConfig",
		sizeof(FVehicleHandlingConfig),
		alignof(FVehicleHandlingConfig),
		Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVehicleHandlingConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVehicleHandlingConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VehicleAIPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VehicleHandlingConfig"), sizeof(FVehicleHandlingConfig), Get_Z_Construct_UScriptStruct_FVehicleHandlingConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVehicleHandlingConfig_Hash() { return 836068175U; }
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execGetPathPointDataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PointLocation);
		P_GET_OBJECT_REF(UClass,Z_Param_Out_AreaClass);
		P_GET_UBOOL_REF(Z_Param_Out_bIsOnNavLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPathPointDataByIndex(Z_Param_Index,Z_Param_Out_PointLocation,Z_Param_Out_AreaClass,Z_Param_Out_bIsOnNavLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetHandlingConfig)
	{
		P_GET_STRUCT(FVehicleHandlingConfig,Z_Param_HandlingConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHandlingConfig(Z_Param_HandlingConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execGetHandlingConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVehicleHandlingConfig*)Z_Param__Result=P_THIS->GetHandlingConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execIsStuck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStuck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetStuckStatus)
	{
		P_GET_UBOOL(Z_Param_NewStuckState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStuckStatus(Z_Param_NewStuckState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetStuckDetection)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStuckDetection(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetCustomControl)
	{
		P_GET_UBOOL(Z_Param_bToggleCustomSteering);
		P_GET_UBOOL(Z_Param_bToggleCustomThrottle);
		P_GET_UBOOL(Z_Param_bToggleCustomBrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomControl(Z_Param_bToggleCustomSteering,Z_Param_bToggleCustomThrottle,Z_Param_bToggleCustomBrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execToggleDebug)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleDebug(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetVehicleCrowdSimulation)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVehicleCrowdSimulation(E_CrowdSimulationState(Z_Param_NewState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetDesiredSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_GET_PROPERTY(FByteProperty,Z_Param_Unit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSpeed(Z_Param_NewSpeed,ESpeedUnits(Z_Param_Unit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetDestinationRotation)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_GET_STRUCT(FRotator,Z_Param_WorldRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestinationRotation(Z_Param_bActive,Z_Param_WorldRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execIsReversing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReversing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetAutoReverse)
	{
		P_GET_UBOOL(Z_Param_Reverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoReverse(Z_Param_Reverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehiclePathFollowingComponent::execSetReverse)
	{
		P_GET_UBOOL(Z_Param_Reverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverse(Z_Param_Reverse);
		P_NATIVE_END;
	}
	void UVehiclePathFollowingComponent::StaticRegisterNativesUVehiclePathFollowingComponent()
	{
		UClass* Class = UVehiclePathFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHandlingConfig", &UVehiclePathFollowingComponent::execGetHandlingConfig },
			{ "GetPathPointDataByIndex", &UVehiclePathFollowingComponent::execGetPathPointDataByIndex },
			{ "IsReversing", &UVehiclePathFollowingComponent::execIsReversing },
			{ "IsStuck", &UVehiclePathFollowingComponent::execIsStuck },
			{ "SetAutoReverse", &UVehiclePathFollowingComponent::execSetAutoReverse },
			{ "SetCustomControl", &UVehiclePathFollowingComponent::execSetCustomControl },
			{ "SetDesiredSpeed", &UVehiclePathFollowingComponent::execSetDesiredSpeed },
			{ "SetDestinationRotation", &UVehiclePathFollowingComponent::execSetDestinationRotation },
			{ "SetHandlingConfig", &UVehiclePathFollowingComponent::execSetHandlingConfig },
			{ "SetReverse", &UVehiclePathFollowingComponent::execSetReverse },
			{ "SetStuckDetection", &UVehiclePathFollowingComponent::execSetStuckDetection },
			{ "SetStuckStatus", &UVehiclePathFollowingComponent::execSetStuckStatus },
			{ "SetVehicleCrowdSimulation", &UVehiclePathFollowingComponent::execSetVehicleCrowdSimulation },
			{ "ToggleDebug", &UVehiclePathFollowingComponent::execToggleDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics
	{
		struct VehiclePathFollowingComponent_eventGetHandlingConfig_Parms
		{
			FVehicleHandlingConfig ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventGetHandlingConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FVehicleHandlingConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Stuck Detection" },
		{ "Comment", "/**\n\x09* Returns the handling configuration for this vehicle\n\x09* @return the current handling configuration\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Returns the handling configuration for this vehicle\n@return the current handling configuration" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "GetHandlingConfig", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventGetHandlingConfig_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics
	{
		struct VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms
		{
			int32 Index;
			FVector PointLocation;
			UClass* AreaClass;
			bool bIsOnNavLink;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointLocation;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static void NewProp_bIsOnNavLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnNavLink;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_PointLocation = { "PointLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms, PointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms, AreaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_bIsOnNavLink_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms*)Obj)->bIsOnNavLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_bIsOnNavLink = { "bIsOnNavLink", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_bIsOnNavLink_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_PointLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_bIsOnNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Helpers" },
		{ "Comment", "/* Get data about a path point by supplying an index. Useful when you want to look up data ahead on a path for a vehicle so you can make speed adjustments */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Get data about a path point by supplying an index. Useful when you want to look up data ahead on a path for a vehicle so you can make speed adjustments" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "GetPathPointDataByIndex", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventGetPathPointDataByIndex_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics
	{
		struct VehiclePathFollowingComponent_eventIsReversing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Reverse" },
		{ "Comment", "/**\n\x09* Toggles the automatic reverse capability\n\x09* @param Reverse - Toggle the automatic reverse\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles the automatic reverse capability\n@param Reverse - Toggle the automatic reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "IsReversing", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventIsReversing_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics
	{
		struct VehiclePathFollowingComponent_eventIsStuck_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventIsStuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventIsStuck_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Stuck Detection" },
		{ "Comment", "/**\n\x09* Checks if this vehicle is stuck (on path but hasn't moved in a while according to sample data)\n\x09* @return true if the vehicle is stuck\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Checks if this vehicle is stuck (on path but hasn't moved in a while according to sample data)\n@return true if the vehicle is stuck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "IsStuck", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventIsStuck_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics
	{
		struct VehiclePathFollowingComponent_eventSetAutoReverse_Parms
		{
			bool Reverse;
		};
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetAutoReverse_Parms*)Obj)->Reverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetAutoReverse_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::NewProp_Reverse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Reverse" },
		{ "Comment", "/**\n\x09* Toggles the automatic reverse capability\n\x09* @param Reverse - Toggle the automatic reverse\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles the automatic reverse capability\n@param Reverse - Toggle the automatic reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetAutoReverse", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetAutoReverse_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics
	{
		struct VehiclePathFollowingComponent_eventSetCustomControl_Parms
		{
			bool bToggleCustomSteering;
			bool bToggleCustomThrottle;
			bool bToggleCustomBrake;
		};
		static void NewProp_bToggleCustomSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleCustomSteering;
		static void NewProp_bToggleCustomThrottle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleCustomThrottle;
		static void NewProp_bToggleCustomBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToggleCustomBrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomSteering_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetCustomControl_Parms*)Obj)->bToggleCustomSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomSteering = { "bToggleCustomSteering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetCustomControl_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomSteering_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomThrottle_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetCustomControl_Parms*)Obj)->bToggleCustomThrottle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomThrottle = { "bToggleCustomThrottle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetCustomControl_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomThrottle_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomBrake_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetCustomControl_Parms*)Obj)->bToggleCustomBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomBrake = { "bToggleCustomBrake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetCustomControl_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomBrake_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::NewProp_bToggleCustomBrake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Control" },
		{ "Comment", "/**\n\x09* Toggles this vehicle to use custom controls at runtime. Useful if you need to use specific custom controlling at a particular event\n\x09* @param bToggleCustomSteering - Toggles the custom steering\n\x09* @param bToggleCustomThrottle - Toggles the custom throttle setting\n\x09* @param bToggleCustomBrake - Toggles the custom brake setting\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles this vehicle to use custom controls at runtime. Useful if you need to use specific custom controlling at a particular event\n@param bToggleCustomSteering - Toggles the custom steering\n@param bToggleCustomThrottle - Toggles the custom throttle setting\n@param bToggleCustomBrake - Toggles the custom brake setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetCustomControl", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetCustomControl_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics
	{
		struct VehiclePathFollowingComponent_eventSetDesiredSpeed_Parms
		{
			float NewSpeed;
			TEnumAsByte<ESpeedUnits> Unit;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Unit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventSetDesiredSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventSetDesiredSpeed_Parms, Unit), Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::NewProp_NewSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::NewProp_Unit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Speed Control" },
		{ "Comment", "/**\n\x09* Updates this agents desired speed\n\x09* @param NewSpeed - Defines the new speed, given in Unreal Units (cm/s)\n\x09* @param Unit - The units of data to use for the speed conversion which is done internally\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Updates this agents desired speed\n@param NewSpeed - Defines the new speed, given in Unreal Units (cm/s)\n@param Unit - The units of data to use for the speed conversion which is done internally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetDesiredSpeed", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetDesiredSpeed_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics
	{
		struct VehiclePathFollowingComponent_eventSetDestinationRotation_Parms
		{
			bool bActive;
			FRotator WorldRotation;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetDestinationRotation_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetDestinationRotation_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventSetDestinationRotation_Parms, WorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::NewProp_WorldRotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Reverse" },
		{ "Comment", "/**\n\x09* Toggles the ability to face a direction when at a target location\n\x09* @param bActive - Toggles the rotation ability\n\x09* @param WorldRotation - The rotation the vehicle should face\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles the ability to face a direction when at a target location\n@param bActive - Toggles the rotation ability\n@param WorldRotation - The rotation the vehicle should face" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetDestinationRotation", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetDestinationRotation_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics
	{
		struct VehiclePathFollowingComponent_eventSetHandlingConfig_Parms
		{
			FVehicleHandlingConfig HandlingConfig;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HandlingConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::NewProp_HandlingConfig = { "HandlingConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventSetHandlingConfig_Parms, HandlingConfig), Z_Construct_UScriptStruct_FVehicleHandlingConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::NewProp_HandlingConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Stuck Detection" },
		{ "Comment", "/**\n\x09* Set a handling configuration profile onto this controller\n\x09* @param HandlingConfig \n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Set a handling configuration profile onto this controller\n@param HandlingConfig" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetHandlingConfig", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetHandlingConfig_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics
	{
		struct VehiclePathFollowingComponent_eventSetReverse_Parms
		{
			bool Reverse;
		};
		static void NewProp_Reverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Reverse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::NewProp_Reverse_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetReverse_Parms*)Obj)->Reverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::NewProp_Reverse = { "Reverse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetReverse_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::NewProp_Reverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::NewProp_Reverse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Reverse" },
		{ "Comment", "/**\n\x09* Set this agent to force reverse manually\n\x09* @param Reverse - Toggle the force reverse\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Set this agent to force reverse manually\n@param Reverse - Toggle the force reverse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetReverse", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetReverse_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics
	{
		struct VehiclePathFollowingComponent_eventSetStuckDetection_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetStuckDetection_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetStuckDetection_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Stuck Detection" },
		{ "Comment", "/**\n\x09* Toggles this vehicles stuck detection, which you might want to disable in certain scenarios\n\x09* @param bActive - Toggles the stuck detection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles this vehicles stuck detection, which you might want to disable in certain scenarios\n@param bActive - Toggles the stuck detection" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetStuckDetection", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetStuckDetection_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics
	{
		struct VehiclePathFollowingComponent_eventSetStuckStatus_Parms
		{
			bool NewStuckState;
		};
		static void NewProp_NewStuckState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewStuckState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::NewProp_NewStuckState_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventSetStuckStatus_Parms*)Obj)->NewStuckState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::NewProp_NewStuckState = { "NewStuckState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventSetStuckStatus_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::NewProp_NewStuckState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::NewProp_NewStuckState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Stuck Detection" },
		{ "Comment", "/**\n\x09* Sets the stuck status of this vehicle. Use to manually perform unstuck behaviour. Can also implement custom stuck behaviour\n\x09* @param NewStuckState - Sets if this vehicle is stuck or not\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Sets the stuck status of this vehicle. Use to manually perform unstuck behaviour. Can also implement custom stuck behaviour\n@param NewStuckState - Sets if this vehicle is stuck or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetStuckStatus", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetStuckStatus_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics
	{
		struct VehiclePathFollowingComponent_eventSetVehicleCrowdSimulation_Parms
		{
			TEnumAsByte<E_CrowdSimulationState> NewState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehiclePathFollowingComponent_eventSetVehicleCrowdSimulation_Parms, NewState), Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Avoidance" },
		{ "Comment", "/**\n\x09* Update the crowd simulation, allows for setting crowd simulation on a per agent basis\n\x09* @param NewState - Changes the crowd simulation state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Update the crowd simulation, allows for setting crowd simulation on a per agent basis\n@param NewState - Changes the crowd simulation state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "SetVehicleCrowdSimulation", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventSetVehicleCrowdSimulation_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics
	{
		struct VehiclePathFollowingComponent_eventToggleDebug_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((VehiclePathFollowingComponent_eventToggleDebug_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehiclePathFollowingComponent_eventToggleDebug_Parms), &Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI|Debug" },
		{ "Comment", "/**\n\x09* Toggles the debug state on this agent. Debug shows information such as target angle, desired speed etc.\n\x09* @param bActive - Toggles whether the debug is active\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Toggles the debug state on this agent. Debug shows information such as target angle, desired speed etc.\n@param bActive - Toggles whether the debug is active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehiclePathFollowingComponent, nullptr, "ToggleDebug", nullptr, nullptr, sizeof(VehiclePathFollowingComponent_eventToggleDebug_Parms), Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehiclePathFollowingComponent_NoRegister()
	{
		return UVehiclePathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVehiclePathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomAcceptanceRadius_MetaData[];
#endif
		static void NewProp_bUseCustomAcceptanceRadius_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehiclePathPointAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehiclePathPointAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleNavLinkAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleNavLinkAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomSteering_MetaData[];
#endif
		static void NewProp_bCustomSteering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomSteering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomThrottle_MetaData[];
#endif
		static void NewProp_bCustomThrottle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomBrake_MetaData[];
#endif
		static void NewProp_bCustomBrake_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomBrake;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinThrottle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinThrottle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DesiredSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingDesiredSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingDesiredSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSpeedUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StartSpeedUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedThrottleStepMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeedThrottleStepMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedThrottleStepMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeedThrottleStepMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeedThrottleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeedThrottleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBrakes_MetaData[];
#endif
		static void NewProp_bUseBrakes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBrakes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalisedTurnThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalisedTurnThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BrakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEmergencyBrakeAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEmergencyBrakeAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bThrottleUsePID_MetaData[];
#endif
		static void NewProp_bThrottleUsePID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bThrottleUsePID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrottlePIDSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrottlePIDSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAdvancedSpeedControl_MetaData[];
#endif
		static void NewProp_bUseAdvancedSpeedControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAdvancedSpeedControl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerSpeedControlPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CornerSpeedControlPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSlowdownDistance_MetaData[];
#endif
		static void NewProp_bAutoCalculateSlowdownDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSlowdownDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticFrictionCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StaticFrictionCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSlowdown_MetaData[];
#endif
		static void NewProp_bEnableSlowdown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSlowdown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSlowdownAtNavLinks_MetaData[];
#endif
		static void NewProp_bSlowdownAtNavLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSlowdownAtNavLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlowdownDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlowdownDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CornerSlowdownSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CornerSlowdownSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCornerSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxCornerSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageCornerSampleRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageCornerSampleRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StuckDetectionSampleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_StuckDetectionSampleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseStuckDetection_MetaData[];
#endif
		static void NewProp_bUseStuckDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseStuckDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnStuckDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnStuckDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StuckDetectionDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StuckDetectionDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StuckAcceptanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StuckAcceptanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StuckDetectionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StuckDetectionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetourCrowdSimulationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetourCrowdSimulationState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrowdAvoidanceRangeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrowdAvoidanceRangeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleMaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VehicleMaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldReverseAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShouldReverseAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseMaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseMaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReverseThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoReverse_MetaData[];
#endif
		static void NewProp_bAutoReverse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoReverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyReverseWhenStuck_MetaData[];
#endif
		static void NewProp_bOnlyReverseWhenStuck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyReverseWhenStuck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SteeringCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSteeringUsePID_MetaData[];
#endif
		static void NewProp_bSteeringUsePID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSteeringUsePID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringPIDSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringPIDSetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCrowdFollowingComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_GetHandlingConfig, "GetHandlingConfig" }, // 3584636481
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_GetPathPointDataByIndex, "GetPathPointDataByIndex" }, // 1955768784
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_IsReversing, "IsReversing" }, // 1589230559
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_IsStuck, "IsStuck" }, // 1372195420
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetAutoReverse, "SetAutoReverse" }, // 2381264525
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetCustomControl, "SetCustomControl" }, // 2850480976
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDesiredSpeed, "SetDesiredSpeed" }, // 3837320961
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetDestinationRotation, "SetDestinationRotation" }, // 1900004458
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetHandlingConfig, "SetHandlingConfig" }, // 420796468
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetReverse, "SetReverse" }, // 999994967
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckDetection, "SetStuckDetection" }, // 1027036612
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetStuckStatus, "SetStuckStatus" }, // 1458545504
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_SetVehicleCrowdSimulation, "SetVehicleCrowdSimulation" }, // 2697245730
		{ &Z_Construct_UFunction_UVehiclePathFollowingComponent_ToggleDebug, "ToggleDebug" }, // 3355399032
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles the path following for a wheeled vehicle. Inherits from Crowd Following for Detour Crowd control\n */" },
		{ "IncludePath", "Components/VehiclePathFollowingComponent.h" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Handles the path following for a wheeled vehicle. Inherits from Crowd Following for Detour Crowd control" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Shows debug data on screen for this agent */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Shows debug data on screen for this agent" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius_MetaData[] = {
		{ "Category", "Path Following" },
		{ "Comment", "/* Changes the acceptance radius from the defaults set in the project settings */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Changes the acceptance radius from the defaults set in the project settings" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bUseCustomAcceptanceRadius = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius = { "bUseCustomAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehiclePathPointAcceptanceRadius_MetaData[] = {
		{ "Category", "Path Following" },
		{ "Comment", "/* The acceptance radius for an individual path point */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The acceptance radius for an individual path point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehiclePathPointAcceptanceRadius = { "VehiclePathPointAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, VehiclePathPointAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehiclePathPointAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehiclePathPointAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleNavLinkAcceptanceRadius_MetaData[] = {
		{ "Category", "Path Following" },
		{ "Comment", "/* The acceptance radius for an navigation link */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The acceptance radius for an navigation link" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleNavLinkAcceptanceRadius = { "VehicleNavLinkAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, VehicleNavLinkAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleNavLinkAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleNavLinkAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering_MetaData[] = {
		{ "Category", "Custom Handling" },
		{ "Comment", "/* Let an interface on the agent handle the steering output */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Let an interface on the agent handle the steering output" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bCustomSteering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering = { "bCustomSteering", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle_MetaData[] = {
		{ "Category", "Custom Handling" },
		{ "Comment", "/* Let an interface on the agent handle the throttle output */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Let an interface on the agent handle the throttle output" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bCustomThrottle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle = { "bCustomThrottle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake_MetaData[] = {
		{ "Category", "Custom Handling" },
		{ "Comment", "/* Let an interface on the agent handle the brake output */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Let an interface on the agent handle the brake output" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bCustomBrake = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake = { "bCustomBrake", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MinThrottle_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Minimum throttle to step down to when controlling speed. Don't set the value too low or the vehicle might not move */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Minimum throttle to step down to when controlling speed. Don't set the value too low or the vehicle might not move" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MinThrottle = { "MinThrottle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, MinThrottle), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MinThrottle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MinThrottle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedCurve_MetaData[] = {
		{ "Category", "Speed Control|Deprecated" },
		{ "Comment", "/* Curve that changes the percentage of the desired speed (0 -> 1) based on the normalised steering angle (0 -> 1)\n\x09This property will be depcreated in a future release as it doesn't seem to be that useful and getting the same functionality can be done using\n\x09the blueprint interface. If you are actively using this feature and would not like it removed, then */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Curve that changes the percentage of the desired speed (0 -> 1) based on the normalised steering angle (0 -> 1)\n      This property will be depcreated in a future release as it doesn't seem to be that useful and getting the same functionality can be done using\n      the blueprint interface. If you are actively using this feature and would not like it removed, then" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedCurve = { "DesiredSpeedCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThreshold_MetaData[] = {
		{ "Category", "Speed Control|Desired Speed" },
		{ "Comment", "/* Threshold where throttle will be adjusted for meet the desired speed */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Threshold where throttle will be adjusted for meet the desired speed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThreshold = { "DesiredSpeedThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartingDesiredSpeed_MetaData[] = {
		{ "Category", "Speed Control|Desired Speed" },
		{ "Comment", "/* The starting desired speed of this vehicle, the units of which are defined by the Start Speed Unit */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The starting desired speed of this vehicle, the units of which are defined by the Start Speed Unit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartingDesiredSpeed = { "StartingDesiredSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StartingDesiredSpeed), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartingDesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartingDesiredSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartSpeedUnit_MetaData[] = {
		{ "Category", "Speed Control|Desired Speed" },
		{ "Comment", "/* The speed units this vehicle will use when the desired speed */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The speed units this vehicle will use when the desired speed" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartSpeedUnit = { "StartSpeedUnit", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StartSpeedUnit), Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartSpeedUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartSpeedUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeed_MetaData[] = {
		{ "Category", "Speed Control|Desired Speed" },
		{ "Comment", "/* The speed of this vehicle in cm/s, speed is always converted into cm/s in the plugin as this is the default velocity units\n\x09This value changes as the Starting Desired Speed changes and/or its units change */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The speed of this vehicle in cm/s, speed is always converted into cm/s in the plugin as this is the default velocity units\n      This value changes as the Starting Desired Speed changes and/or its units change" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeed), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMax_MetaData[] = {
		{ "Category", "Speed Control|Throttle" },
		{ "Comment", "/* The amount of change the throttle by each frame to keep the speed within the threshold */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The amount of change the throttle by each frame to keep the speed within the threshold" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMax = { "DesiredSpeedThrottleStepMax", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleStepMax), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMin_MetaData[] = {
		{ "Category", "Speed Control|Throttle" },
		{ "Comment", "/* The amount of change the throttle by each frame to keep the speed within the threshold */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The amount of change the throttle by each frame to keep the speed within the threshold" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMin = { "DesiredSpeedThrottleStepMin", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleStepMin), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleThreshold_MetaData[] = {
		{ "Category", "Speed Control|Throttle" },
		{ "Comment", "/* When the speed is above or below this value, use the full throttle value */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "When the speed is above or below this value, use the full throttle value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleThreshold = { "DesiredSpeedThrottleThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleThreshold), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes_MetaData[] = {
		{ "Category", "Speed Control|Brakes" },
		{ "Comment", "/* Whether this AI is allowed to use its brakes  */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Whether this AI is allowed to use its brakes" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bUseBrakes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes = { "bUseBrakes", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeThreshold_MetaData[] = {
		{ "Category", "Speed Control|Brakes" },
		{ "Comment", "/* The threshold above the desired speed (+ speed threshold) at which to apply the brakes\n\x09*  Decrease this if the vehicle doesnt apply brakes quickly enough \x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The threshold above the desired speed (+ speed threshold) at which to apply the brakes\n      *  Decrease this if the vehicle doesnt apply brakes quickly enough" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeThreshold = { "BrakeThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, BrakeThreshold), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_NormalisedTurnThreshold_MetaData[] = {
		{ "Category", "Speed Control|Throttle" },
		{ "Comment", "/* If the normalised turn value is greater than this you can force the throttle to be off (where 1 is fully right and -1 is fully left)\n\x09*  then we don't want to accelerate anymore as it means the vehicle will miss its turning.\n\x09*  Reduce this if the vehicle keeps overshooting corners\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "If the normalised turn value is greater than this you can force the throttle to be off (where 1 is fully right and -1 is fully left)\n      *  then we don't want to accelerate anymore as it means the vehicle will miss its turning.\n      *  Reduce this if the vehicle keeps overshooting corners" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_NormalisedTurnThreshold = { "NormalisedTurnThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, NormalisedTurnThreshold), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_NormalisedTurnThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_NormalisedTurnThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeAmount_MetaData[] = {
		{ "Category", "Speed Control|Brakes" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The amount of intensity you want the brakes to apply when using brakes to slow down, use higher values if you want the brakes to be applied\n\x09   more aggressively such as in a racing game */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The amount of intensity you want the brakes to apply when using brakes to slow down, use higher values if you want the brakes to be applied\n         more aggressively such as in a racing game" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeAmount = { "BrakeAmount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, BrakeAmount), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxEmergencyBrakeAmount_MetaData[] = {
		{ "Category", "Speed Control|Brakes" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* The amount of intensity you want the brakes to apply if normal braking wouldn't slow the vehicle down in time */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The amount of intensity you want the brakes to apply if normal braking wouldn't slow the vehicle down in time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxEmergencyBrakeAmount = { "MaxEmergencyBrakeAmount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, MaxEmergencyBrakeAmount), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxEmergencyBrakeAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxEmergencyBrakeAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "Comment", "/* Should throttle use a PID controller, instead of any other method. The other method just steps up and down the throttle\n\x09*  to get to the desired speed, which can in some cases work better (especially with abnormal vehicle types) \n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Should throttle use a PID controller, instead of any other method. The other method just steps up and down the throttle\n      *  to get to the desired speed, which can in some cases work better (especially with abnormal vehicle types)" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bThrottleUsePID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID = { "bThrottleUsePID", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ThrottlePIDSetup_MetaData[] = {
		{ "Category", "Speed Control" },
		{ "Comment", "/* Sets up each coefficient for the throttle PID controller\n\x09*  P: Proportional to the amount needed to speed up, generally fine left as 1\n\x09*  I: Adjust this value if the throttle keeps oscillating (increase in small intervals 0.1)\n\x09*  D: Generally not needed, but increase if I doesn't fix the oscillating\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Sets up each coefficient for the throttle PID controller\n      *  P: Proportional to the amount needed to speed up, generally fine left as 1\n      *  I: Adjust this value if the throttle keeps oscillating (increase in small intervals 0.1)\n      *  D: Generally not needed, but increase if I doesn't fix the oscillating" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ThrottlePIDSetup = { "ThrottlePIDSetup", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, ThrottlePIDSetup), Z_Construct_UScriptStruct_FPIDCoefficients, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ThrottlePIDSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ThrottlePIDSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "Comment", "/* This is an experiemental setting to calculate the maximum speed the vehicle can take a corner with the given parameters.\n\x09*  It hasn't been tested in enough scenarios to enable as default yet, but if you want to try it out on your project it could greatly improve cornering\n\x09*  with no additional steps required. This also does have a slightly bigger impact on performance too, but its relatively negligible. \n\x09*  This uses the physical properties of the vehicle such as its mass and the friction coefficient to calculate things like stopping distance. The goal here is to use\n\x09*  physical values that are pulled directly from the vehicle, so that very little manual tweaking is required to get it working \n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "This is an experiemental setting to calculate the maximum speed the vehicle can take a corner with the given parameters.\n      *  It hasn't been tested in enough scenarios to enable as default yet, but if you want to try it out on your project it could greatly improve cornering\n      *  with no additional steps required. This also does have a slightly bigger impact on performance too, but its relatively negligible.\n      *  This uses the physical properties of the vehicle such as its mass and the friction coefficient to calculate things like stopping distance. The goal here is to use\n      *  physical values that are pulled directly from the vehicle, so that very little manual tweaking is required to get it working" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bUseAdvancedSpeedControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl = { "bUseAdvancedSpeedControl", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSpeedControlPercentage_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* This is the value that the speed control scales by when using the advanced control, 1 means it goes the max speed it physically can around a corner\n\x09*  (within the desired speed), but the default of 0.5 means it should easily follow the path exactly around a corner.\n\x09* \n\x09*  Tweaking:\n\x09* \n\x09*  Vehicle doesn't follow corner precisely enough: Reduce\n\x09*  Vehicle goes around corners too slowly: Increase (until it starts to not handle very well)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "This is the value that the speed control scales by when using the advanced control, 1 means it goes the max speed it physically can around a corner\n      *  (within the desired speed), but the default of 0.5 means it should easily follow the path exactly around a corner.\n      *\n      *  Tweaking:\n      *\n      *  Vehicle doesn't follow corner precisely enough: Reduce\n      *  Vehicle goes around corners too slowly: Increase (until it starts to not handle very well)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSpeedControlPercentage = { "CornerSpeedControlPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, CornerSpeedControlPercentage), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSpeedControlPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSpeedControlPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "Comment", "/* Automatically calculates the slowdown distance instead of having a fixed value, generally want this on if using advanced speed control\n\x09""and it is enabled by default but you can disable it to maintain the older functionality */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Automatically calculates the slowdown distance instead of having a fixed value, generally want this on if using advanced speed control\n      and it is enabled by default but you can disable it to maintain the older functionality" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bAutoCalculateSlowdownDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance = { "bAutoCalculateSlowdownDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMass_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "Comment", "/* The mass of the vehicle being used, can be changed if using a different vehicle setup */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The mass of the vehicle being used, can be changed if using a different vehicle setup" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMass = { "VehicleMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, VehicleMass), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StaticFrictionCoefficient_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "Comment", "/* The coefficient of static friction of the tyre and road surface */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The coefficient of static friction of the tyre and road surface" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StaticFrictionCoefficient = { "StaticFrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StaticFrictionCoefficient), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StaticFrictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StaticFrictionCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_WorldGravity_MetaData[] = {
		{ "Category", "Speed Control|Advanced" },
		{ "Comment", "/* The world gravity, if you use a custom gravity setting you can change this here */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The world gravity, if you use a custom gravity setting you can change this here" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_WorldGravity = { "WorldGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, WorldGravity), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_WorldGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_WorldGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown_MetaData[] = {
		{ "Category", "Slowdown" },
		{ "Comment", "/* Enables the ability to slowdown at the final destination, generally you want this on unless\n\x09*  you want to control this yourself using the interface */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Enables the ability to slowdown at the final destination, generally you want this on unless\n      *  you want to control this yourself using the interface" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bEnableSlowdown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown = { "bEnableSlowdown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks_MetaData[] = {
		{ "Category", "Slowdown" },
		{ "Comment", "/* The vehicle will attempt to slow down at path points that are Nav Links, this is important if   */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The vehicle will attempt to slow down at path points that are Nav Links, this is important if" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bSlowdownAtNavLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks = { "bSlowdownAtNavLinks", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SlowdownDistance_MetaData[] = {
		{ "Category", "Slowdown" },
		{ "Comment", "/* The distance at which to start the slowdown, the greater this is, the smoother the slowdown is,\n\x09   especially at higher speeds */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The distance at which to start the slowdown, the greater this is, the smoother the slowdown is,\n         especially at higher speeds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SlowdownDistance = { "SlowdownDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, SlowdownDistance), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SlowdownDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SlowdownDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSlowdownSamples_MetaData[] = {
		{ "Category", "Slowdown" },
		{ "Comment", "/* The number of samples taken to calculate the speed at which to slow down\n\x09   they are only included if within the slowdown distance. This helps a vehicle get\n\x09   around a corner which could be made up of multiple path points, close together. This is mainly here for performance reasons*/" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The number of samples taken to calculate the speed at which to slow down\n         they are only included if within the slowdown distance. This helps a vehicle get\n         around a corner which could be made up of multiple path points, close together. This is mainly here for performance reasons" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSlowdownSamples = { "CornerSlowdownSamples", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, CornerSlowdownSamples), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSlowdownSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSlowdownSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxCornerSpeed_MetaData[] = {
		{ "Category", "Slowdown" },
		{ "Comment", "/* The maxmimum speed that a corner of 180 degrees will be taken.\n\x09   For example if the desired speed is 1000cm/s and the corner is at 90 degrees, this will result in\n\x09   a desired speed of 600cm/s. This value is overriden if using the advanced speed control method. */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The maxmimum speed that a corner of 180 degrees will be taken.\n         For example if the desired speed is 1000cm/s and the corner is at 90 degrees, this will result in\n         a desired speed of 600cm/s. This value is overriden if using the advanced speed control method." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxCornerSpeed = { "MaxCornerSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, MaxCornerSpeed), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxCornerSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxCornerSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_AverageCornerSampleRange_MetaData[] = {
		{ "Category", "Slowdown|Advanced" },
		{ "Comment", "/* How far ahead to sample path point corners to start the slow down, defaults to 200m\n\x09Increase this if the vehicle is emergency braking too much */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "How far ahead to sample path point corners to start the slow down, defaults to 200m\n      Increase this if the vehicle is emergency braking too much" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_AverageCornerSampleRange = { "AverageCornerSampleRange", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, AverageCornerSampleRange), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_AverageCornerSampleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_AverageCornerSampleRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionSampleCount_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Amount of samples in an array to use for stuck detection */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Amount of samples in an array to use for stuck detection" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionSampleCount = { "StuckDetectionSampleCount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionSampleCount), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionSampleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Enables detecting when this agent hasn't moved in a while, then executing the UnStuck code */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Enables detecting when this agent hasn't moved in a while, then executing the UnStuck code" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bUseStuckDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection = { "bUseStuckDetection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_UnStuckDistance_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Distance to try and move when stuck */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Distance to try and move when stuck" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_UnStuckDistance = { "UnStuckDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, UnStuckDistance), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_UnStuckDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_UnStuckDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionDistance_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Distance at which the agent will be classified as stuck */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Distance at which the agent will be classified as stuck" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionDistance = { "StuckDetectionDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionDistance), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckAcceptanceRadius_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Distance at which to stop and recheck if stuck */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Distance at which to stop and recheck if stuck" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckAcceptanceRadius = { "StuckAcceptanceRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionInterval_MetaData[] = {
		{ "Category", "Stuck Detection" },
		{ "Comment", "/* Time interval when to add to the stuck sample array */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Time interval when to add to the stuck sample array" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionInterval = { "StuckDetectionInterval", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionInterval), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DetourCrowdSimulationState_MetaData[] = {
		{ "Category", "Crowd Following" },
		{ "Comment", "/* Enables crowd simulation */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Enables crowd simulation" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DetourCrowdSimulationState = { "DetourCrowdSimulationState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, DetourCrowdSimulationState), Z_Construct_UEnum_VehicleAIPlugin_E_CrowdSimulationState, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DetourCrowdSimulationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DetourCrowdSimulationState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CrowdAvoidanceRangeMultiplier_MetaData[] = {
		{ "Category", "Crowd Following" },
		{ "Comment", "/* Multiplies the range at which the crowd simulation will attempt to avoid obstacles, use this if the vehicle is crashing into obstacles during crowd simulation */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Multiplies the range at which the crowd simulation will attempt to avoid obstacles, use this if the vehicle is crashing into obstacles during crowd simulation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CrowdAvoidanceRangeMultiplier = { "CrowdAvoidanceRangeMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, CrowdAvoidanceRangeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CrowdAvoidanceRangeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CrowdAvoidanceRangeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMaxSpeed_MetaData[] = {
		{ "Category", "Crowd Following" },
		{ "Comment", "/* The maximum speed this vehicle is able to get to. Used by crowd following for collision sampling */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The maximum speed this vehicle is able to get to. Used by crowd following for collision sampling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMaxSpeed = { "VehicleMaxSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, VehicleMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ShouldReverseAngle_MetaData[] = {
		{ "Category", "Reverse" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* If the angle to the target is greater than this, the vehicle will reverse to the target point */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "If the angle to the target is greater than this, the vehicle will reverse to the target point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ShouldReverseAngle = { "ShouldReverseAngle", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, ShouldReverseAngle), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ShouldReverseAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ShouldReverseAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseMaxDistance_MetaData[] = {
		{ "Category", "Reverse" },
		{ "Comment", "/* If the distance is lower than this then the vehicle will reverse to the target point */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "If the distance is lower than this then the vehicle will reverse to the target point" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseMaxDistance = { "ReverseMaxDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, ReverseMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseMaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseThreshold_MetaData[] = {
		{ "Category", "Reverse" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/* Threshold to toggle the reverse state */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Threshold to toggle the reverse state" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseThreshold = { "ReverseThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, ReverseThreshold), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse_MetaData[] = {
		{ "Category", "Reverse" },
		{ "Comment", "/* Allow the vehicle to automatically reverse whenever it meets the reverse conditions */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Allow the vehicle to automatically reverse whenever it meets the reverse conditions" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bAutoReverse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse = { "bAutoReverse", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck_MetaData[] = {
		{ "Category", "Reverse" },
		{ "Comment", "/* Only let this vehicle reverse when its in a stuck position, bAllowReverse must be set to true! */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Only let this vehicle reverse when its in a stuck position, bAllowReverse must be set to true!" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bOnlyReverseWhenStuck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck = { "bOnlyReverseWhenStuck", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringMultiplier_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/* The muliplier used to increase steering based on on the size of the angle if there is no curve (normalised steering * multiplier) */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the Steering PID controller instead" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "The muliplier used to increase steering based on on the size of the angle if there is no curve (normalised steering * multiplier)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringMultiplier = { "SteeringMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringMultiplier), METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringCurve_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/* How steering output is adjusted based on the size of the angle. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "The steering curve is relatively complicated and unnecessary and will be removed, if you still want this functionality, implement this with the interface" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "How steering output is adjusted based on the size of the angle." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringCurve = { "SteeringCurve", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/* Should steering use a PID controller, instead of any other method */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "The steering will use the PID controller as default in a future version, the old method is just the proportional part of the PID controller" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Should steering use a PID controller, instead of any other method" },
	};
#endif
	void Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID_SetBit(void* Obj)
	{
		((UVehiclePathFollowingComponent*)Obj)->bSteeringUsePID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID = { "bSteeringUsePID", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVehiclePathFollowingComponent), &Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringPIDSetup_MetaData[] = {
		{ "Category", "Steering" },
		{ "Comment", "/* Sets up each coefficient for the steering PID controller */" },
		{ "ModuleRelativePath", "Public/Components/VehiclePathFollowingComponent.h" },
		{ "ToolTip", "Sets up each coefficient for the steering PID controller" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringPIDSetup = { "SteeringPIDSetup", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringPIDSetup), Z_Construct_UScriptStruct_FPIDCoefficients, METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringPIDSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringPIDSetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseCustomAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehiclePathPointAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleNavLinkAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bCustomBrake,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MinThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartingDesiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StartSpeedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleStepMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DesiredSpeedThrottleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseBrakes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_NormalisedTurnThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_BrakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxEmergencyBrakeAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bThrottleUsePID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ThrottlePIDSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseAdvancedSpeedControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSpeedControlPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoCalculateSlowdownDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StaticFrictionCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_WorldGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bEnableSlowdown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSlowdownAtNavLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SlowdownDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CornerSlowdownSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_MaxCornerSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_AverageCornerSampleRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionSampleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bUseStuckDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_UnStuckDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckAcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_StuckDetectionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_DetourCrowdSimulationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_CrowdAvoidanceRangeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_VehicleMaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ShouldReverseAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseMaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_ReverseThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bAutoReverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bOnlyReverseWhenStuck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_bSteeringUsePID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::NewProp_SteeringPIDSetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehiclePathFollowingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::ClassParams = {
		&UVehiclePathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehiclePathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehiclePathFollowingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehiclePathFollowingComponent, 3104262972);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UVehiclePathFollowingComponent>()
	{
		return UVehiclePathFollowingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehiclePathFollowingComponent(Z_Construct_UClass_UVehiclePathFollowingComponent, &UVehiclePathFollowingComponent::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UVehiclePathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehiclePathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
