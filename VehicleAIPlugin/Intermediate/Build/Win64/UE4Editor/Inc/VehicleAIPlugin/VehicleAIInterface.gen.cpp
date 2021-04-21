// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/VehicleAIInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAIInterface() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehicleAIInterface_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehicleAIInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IVehicleAIInterface::execOnVehicleStuck)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_UnStuckLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnVehicleStuck_Implementation(Z_Param_Out_UnStuckLocation);
		P_NATIVE_END;
	}
	void IVehicleAIInterface::CustomBraking(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CustomBraking instead.");
	}
	void IVehicleAIInterface::CustomSteering(float TargetAngle, float Steering, float DestinationDistance)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CustomSteering instead.");
	}
	void IVehicleAIInterface::CustomThrottle(float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CustomThrottle instead.");
	}
	bool IVehicleAIInterface::OnVehicleStuck(FVector& UnStuckLocation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnVehicleStuck instead.");
		VehicleAIInterface_eventOnVehicleStuck_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVehicleAIInterface::StaticRegisterNativesUVehicleAIInterface()
	{
		UClass* Class = UVehicleAIInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnVehicleStuck", &IVehicleAIInterface::execOnVehicleStuck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestinationDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalculatedBrake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomBraking_Parms, TargetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_DestinationDistance = { "DestinationDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomBraking_Parms, DestinationDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomBraking_Parms, DesiredSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_CalculatedBrake = { "CalculatedBrake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomBraking_Parms, CalculatedBrake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_TargetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_DestinationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_DesiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::NewProp_CalculatedBrake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/*\n\x09* Called to implement custom braking behaviour\n\x09* @param TargetAngle - Angle towards the target move location\n\x09* @param DestinationDistance - Distance to the current move destination\n\x09* @param DesiredSpeed - The adjusted desired speed\n\x09* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIInterface.h" },
		{ "ToolTip", "* Called to implement custom braking behaviour\n* @param TargetAngle - Angle towards the target move location\n* @param DestinationDistance - Distance to the current move destination\n* @param DesiredSpeed - The adjusted desired speed\n* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIInterface, nullptr, "CustomBraking", nullptr, nullptr, sizeof(VehicleAIInterface_eventCustomBraking_Parms), Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIInterface_CustomBraking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIInterface_CustomBraking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steering;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestinationDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomSteering_Parms, TargetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomSteering_Parms, Steering), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_DestinationDistance = { "DestinationDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomSteering_Parms, DestinationDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_TargetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_Steering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::NewProp_DestinationDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/*\n\x09* Called to implement custom steering behaviour\n\x09* @param TargetAngle - Angle towards the target move location\n\x09* @param Steering - Normalised adjusted steering angle, this is whats normally used by the system internally\n\x09* @param DestinationDistance - Distance to the current move destination\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIInterface.h" },
		{ "ToolTip", "* Called to implement custom steering behaviour\n* @param TargetAngle - Angle towards the target move location\n* @param Steering - Normalised adjusted steering angle, this is whats normally used by the system internally\n* @param DestinationDistance - Distance to the current move destination" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIInterface, nullptr, "CustomSteering", nullptr, nullptr, sizeof(VehicleAIInterface_eventCustomSteering_Parms), Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIInterface_CustomSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIInterface_CustomSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestinationDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredSpeed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CalculatedThrottle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_TargetAngle = { "TargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomThrottle_Parms, TargetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_DestinationDistance = { "DestinationDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomThrottle_Parms, DestinationDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomThrottle_Parms, DesiredSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_CalculatedThrottle = { "CalculatedThrottle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventCustomThrottle_Parms, CalculatedThrottle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_TargetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_DestinationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_DesiredSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::NewProp_CalculatedThrottle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/*\n\x09* Called to implement custom steering behaviour\n\x09* @param TargetAngle - Angle towards the target move location\n\x09* @param DestinationDistance - Distance to the current move destination\n\x09* @param DesiredSpeed - The adjusted desired speed\n\x09* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIInterface.h" },
		{ "ToolTip", "* Called to implement custom steering behaviour\n* @param TargetAngle - Angle towards the target move location\n* @param DestinationDistance - Distance to the current move destination\n* @param DesiredSpeed - The adjusted desired speed\n* @param CalculatedThrottle - The throttle thats been calculated, this is whats normally used by the system internally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIInterface, nullptr, "CustomThrottle", nullptr, nullptr, sizeof(VehicleAIInterface_eventCustomThrottle_Parms), Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnStuckLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_UnStuckLocation = { "UnStuckLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIInterface_eventOnVehicleStuck_Parms, UnStuckLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleAIInterface_eventOnVehicleStuck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleAIInterface_eventOnVehicleStuck_Parms), &Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_UnStuckLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* \n\x09* Called when the vehicle gets stuck according to the stuck detection\n\x09* @param UnStuckLocation - The location we want to move to, to get this actor unstuck, this is for simple unstuck custom behaviour\n\x09* @return true will keep the vehicle in a stuck state until you manually notify. False (default) will handle the stuck behaivour internally\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIInterface.h" },
		{ "ToolTip", "* Called when the vehicle gets stuck according to the stuck detection\n* @param UnStuckLocation - The location we want to move to, to get this actor unstuck, this is for simple unstuck custom behaviour\n* @return true will keep the vehicle in a stuck state until you manually notify. False (default) will handle the stuck behaivour internally" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIInterface, nullptr, "OnVehicleStuck", nullptr, nullptr, sizeof(VehicleAIInterface_eventOnVehicleStuck_Parms), Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleAIInterface_NoRegister()
	{
		return UVehicleAIInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleAIInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleAIInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleAIInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleAIInterface_CustomBraking, "CustomBraking" }, // 2192410528
		{ &Z_Construct_UFunction_UVehicleAIInterface_CustomSteering, "CustomSteering" }, // 1434461101
		{ &Z_Construct_UFunction_UVehicleAIInterface_CustomThrottle, "CustomThrottle" }, // 1788221533
		{ &Z_Construct_UFunction_UVehicleAIInterface_OnVehicleStuck, "OnVehicleStuck" }, // 3849219409
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAIInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleAIInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleAIInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVehicleAIInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleAIInterface_Statics::ClassParams = {
		&UVehicleAIInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleAIInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAIInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleAIInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleAIInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleAIInterface, 2749772114);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UVehicleAIInterface>()
	{
		return UVehicleAIInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleAIInterface(Z_Construct_UClass_UVehicleAIInterface, &UVehicleAIInterface::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UVehicleAIInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleAIInterface);
	static FName NAME_UVehicleAIInterface_CustomBraking = FName(TEXT("CustomBraking"));
	void IVehicleAIInterface::Execute_CustomBraking(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass()));
		VehicleAIInterface_eventCustomBraking_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVehicleAIInterface_CustomBraking);
		if (Func)
		{
			Parms.TargetAngle=TargetAngle;
			Parms.DestinationDistance=DestinationDistance;
			Parms.DesiredSpeed=DesiredSpeed;
			Parms.CalculatedBrake=CalculatedBrake;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UVehicleAIInterface_CustomSteering = FName(TEXT("CustomSteering"));
	void IVehicleAIInterface::Execute_CustomSteering(UObject* O, float TargetAngle, float Steering, float DestinationDistance)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass()));
		VehicleAIInterface_eventCustomSteering_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVehicleAIInterface_CustomSteering);
		if (Func)
		{
			Parms.TargetAngle=TargetAngle;
			Parms.Steering=Steering;
			Parms.DestinationDistance=DestinationDistance;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UVehicleAIInterface_CustomThrottle = FName(TEXT("CustomThrottle"));
	void IVehicleAIInterface::Execute_CustomThrottle(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass()));
		VehicleAIInterface_eventCustomThrottle_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVehicleAIInterface_CustomThrottle);
		if (Func)
		{
			Parms.TargetAngle=TargetAngle;
			Parms.DestinationDistance=DestinationDistance;
			Parms.DesiredSpeed=DesiredSpeed;
			Parms.CalculatedThrottle=CalculatedThrottle;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UVehicleAIInterface_OnVehicleStuck = FName(TEXT("OnVehicleStuck"));
	bool IVehicleAIInterface::Execute_OnVehicleStuck(UObject* O, FVector& UnStuckLocation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVehicleAIInterface::StaticClass()));
		VehicleAIInterface_eventOnVehicleStuck_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVehicleAIInterface_OnVehicleStuck);
		if (Func)
		{
			Parms.UnStuckLocation=UnStuckLocation;
			O->ProcessEvent(Func, &Parms);
			UnStuckLocation=Parms.UnStuckLocation;
		}
		else if (auto I = (IVehicleAIInterface*)(O->GetNativeInterfaceAddress(UVehicleAIInterface::StaticClass())))
		{
			Parms.ReturnValue = I->OnVehicleStuck_Implementation(UnStuckLocation);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
