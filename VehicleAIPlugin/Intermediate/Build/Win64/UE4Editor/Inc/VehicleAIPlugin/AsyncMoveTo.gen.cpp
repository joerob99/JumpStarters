// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/AsyncMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncMoveTo() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UAsyncMoveTo_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UAsyncMoveTo();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics
	{
		struct _Script_VehicleAIPlugin_eventAsyncPathFindComplete_Parms
		{
			TEnumAsByte<ENavigationQueryResult::Type> Result;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_VehicleAIPlugin_eventAsyncPathFindComplete_Parms, Result), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncMoveTo.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VehicleAIPlugin, nullptr, "AsyncPathFindComplete__DelegateSignature", nullptr, nullptr, sizeof(_Script_VehicleAIPlugin_eventAsyncPathFindComplete_Parms), Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAsyncMoveTo::execAsyncMoveTo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
		P_GET_UBOOL(Z_Param_bStopOnOverlap);
		P_GET_UBOOL(Z_Param_bUsePathfinding);
		P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation);
		P_GET_UBOOL(Z_Param_bCanStrafe);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_GET_UBOOL(Z_Param_bAllowPartialPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncMoveTo**)Z_Param__Result=UAsyncMoveTo::AsyncMoveTo(Z_Param_WorldContextObject,Z_Param_Controller,Z_Param_Out_Dest,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath);
		P_NATIVE_END;
	}
	void UAsyncMoveTo::StaticRegisterNativesUAsyncMoveTo()
	{
		UClass* Class = UAsyncMoveTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncMoveTo", &UAsyncMoveTo::execAsyncMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics
	{
		struct AsyncMoveTo_eventAsyncMoveTo_Parms
		{
			const UObject* WorldContextObject;
			AAIController* Controller;
			FVector Dest;
			float AcceptanceRadius;
			bool bStopOnOverlap;
			bool bUsePathfinding;
			bool bProjectDestinationToNavigation;
			bool bCanStrafe;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool bAllowPartialPath;
			UAsyncMoveTo* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dest;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static void NewProp_bStopOnOverlap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static void NewProp_bProjectDestinationToNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation;
		static void NewProp_bCanStrafe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_bAllowPartialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Dest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Dest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Dest_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
	{
		((AsyncMoveTo_eventAsyncMoveTo_Parms*)Obj)->bStopOnOverlap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((AsyncMoveTo_eventAsyncMoveTo_Parms*)Obj)->bUsePathfinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bProjectDestinationToNavigation_SetBit(void* Obj)
	{
		((AsyncMoveTo_eventAsyncMoveTo_Parms*)Obj)->bProjectDestinationToNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bProjectDestinationToNavigation = { "bProjectDestinationToNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bProjectDestinationToNavigation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
	{
		((AsyncMoveTo_eventAsyncMoveTo_Parms*)Obj)->bCanStrafe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, FilterClass), Z_Construct_UClass_UNavigationQueryFilter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
	{
		((AsyncMoveTo_eventAsyncMoveTo_Parms*)Obj)->bAllowPartialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncMoveTo_eventAsyncMoveTo_Parms, ReturnValue), Z_Construct_UClass_UAsyncMoveTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_Dest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_AcceptanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bStopOnOverlap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bUsePathfinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bProjectDestinationToNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bCanStrafe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_FilterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_bAllowPartialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI" },
		{ "Comment", "/* Using the Async Pathfinder to find a path, this works with all AI and not just vehicles and can greatly help perforance especailly for complicated paths that need updating regularlly.\n\x09This is also experiemental and some crashes have been reported, so test it in your own project to ensure robustness before deploying. */" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "true" },
		{ "CPP_Default_bProjectDestinationToNavigation", "false" },
		{ "CPP_Default_bStopOnOverlap", "true" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Public/AsyncMoveTo.h" },
		{ "ToolTip", "Using the Async Pathfinder to find a path, this works with all AI and not just vehicles and can greatly help perforance especailly for complicated paths that need updating regularlly.\n      This is also experiemental and some crashes have been reported, so test it in your own project to ensure robustness before deploying." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncMoveTo, nullptr, "AsyncMoveTo", nullptr, nullptr, sizeof(AsyncMoveTo_eventAsyncMoveTo_Parms), Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncMoveTo_NoRegister()
	{
		return UAsyncMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_CompletedRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncMoveTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncMoveTo_AsyncMoveTo, "AsyncMoveTo" }, // 510878592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncMoveTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Finds a path for an AI agent asynchronously\n */" },
		{ "IncludePath", "AsyncMoveTo.h" },
		{ "ModuleRelativePath", "Public/AsyncMoveTo.h" },
		{ "ToolTip", "Finds a path for an AI agent asynchronously" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncMoveTo_Statics::NewProp_CompletedRequest_MetaData[] = {
		{ "Comment", "/* Called to blueprints when the pathfinding request has completed */" },
		{ "ModuleRelativePath", "Public/AsyncMoveTo.h" },
		{ "ToolTip", "Called to blueprints when the pathfinding request has completed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncMoveTo_Statics::NewProp_CompletedRequest = { "CompletedRequest", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncMoveTo, CompletedRequest), Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncMoveTo_Statics::NewProp_CompletedRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncMoveTo_Statics::NewProp_CompletedRequest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncMoveTo_Statics::NewProp_CompletedRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncMoveTo_Statics::ClassParams = {
		&UAsyncMoveTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncMoveTo_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncMoveTo, 3861278057);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UAsyncMoveTo>()
	{
		return UAsyncMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncMoveTo(Z_Construct_UClass_UAsyncMoveTo, &UAsyncMoveTo::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UAsyncMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
