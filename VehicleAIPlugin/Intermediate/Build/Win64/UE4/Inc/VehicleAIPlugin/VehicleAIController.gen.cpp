// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/VehicleAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAIController() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_AVehicleAIController_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_AVehicleAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVehicleAIController::execOnNewPathSegment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PathPointIndex);
		P_GET_STRUCT(FVector,Z_Param_StartSegmentLocation);
		P_GET_STRUCT(FVector,Z_Param_TargetSegmentLocation);
		P_GET_OBJECT(UClass,Z_Param_AreaClass);
		P_GET_UBOOL(Z_Param_bIsOnNavLink);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->OnNewPathSegment_Implementation(Z_Param_PathPointIndex,Z_Param_StartSegmentLocation,Z_Param_TargetSegmentLocation,Z_Param_AreaClass,Z_Param_bIsOnNavLink);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVehicleAIController::execGetCustomDestination)
	{
		P_GET_STRUCT(FVector,Z_Param_CurrentMoveFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCustomDestination_Implementation(Z_Param_CurrentMoveFocus);
		P_NATIVE_END;
	}
	static FName NAME_AVehicleAIController_GetCustomDestination = FName(TEXT("GetCustomDestination"));
	FVector AVehicleAIController::GetCustomDestination(FVector CurrentMoveFocus)
	{
		VehicleAIController_eventGetCustomDestination_Parms Parms;
		Parms.CurrentMoveFocus=CurrentMoveFocus;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleAIController_GetCustomDestination),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AVehicleAIController_OnNewPathSegment = FName(TEXT("OnNewPathSegment"));
	FVector AVehicleAIController::OnNewPathSegment(int32 PathPointIndex, FVector StartSegmentLocation, FVector TargetSegmentLocation, const UClass* AreaClass, bool bIsOnNavLink)
	{
		VehicleAIController_eventOnNewPathSegment_Parms Parms;
		Parms.PathPointIndex=PathPointIndex;
		Parms.StartSegmentLocation=StartSegmentLocation;
		Parms.TargetSegmentLocation=TargetSegmentLocation;
		Parms.AreaClass=AreaClass;
		Parms.bIsOnNavLink=bIsOnNavLink ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVehicleAIController_OnNewPathSegment),&Parms);
		return Parms.ReturnValue;
	}
	void AVehicleAIController::StaticRegisterNativesAVehicleAIController()
	{
		UClass* Class = AVehicleAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomDestination", &AVehicleAIController::execGetCustomDestination },
			{ "OnNewPathSegment", &AVehicleAIController::execOnNewPathSegment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentMoveFocus;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::NewProp_CurrentMoveFocus = { "CurrentMoveFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventGetCustomDestination_Parms, CurrentMoveFocus), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventGetCustomDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::NewProp_CurrentMoveFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Path Control" },
		{ "Comment", "/**\n\x09* Change the current move destination than the one the pathfinding system is providing (In debug mode, this is a blue square). \n\x09* Useful for following a path precisely every frame, like a spline to navigate a difficult corner or obstacle.\n\x09* @param CurrentMoveFocus - The target that the pathfinding system has set, and the agent is currently moving towards\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIController.h" },
		{ "ToolTip", "Change the current move destination than the one the pathfinding system is providing (In debug mode, this is a blue square).\nUseful for following a path precisely every frame, like a spline to navigate a difficult corner or obstacle.\n@param CurrentMoveFocus - The target that the pathfinding system has set, and the agent is currently moving towards" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleAIController, nullptr, "GetCustomDestination", nullptr, nullptr, sizeof(VehicleAIController_eventGetCustomDestination_Parms), Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleAIController_GetCustomDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleAIController_GetCustomDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PathPointIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartSegmentLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetSegmentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static void NewProp_bIsOnNavLink_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnNavLink;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_PathPointIndex = { "PathPointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventOnNewPathSegment_Parms, PathPointIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_StartSegmentLocation = { "StartSegmentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventOnNewPathSegment_Parms, StartSegmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_TargetSegmentLocation = { "TargetSegmentLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventOnNewPathSegment_Parms, TargetSegmentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_AreaClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventOnNewPathSegment_Parms, AreaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_AreaClass_MetaData)) };
	void Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_bIsOnNavLink_SetBit(void* Obj)
	{
		((VehicleAIController_eventOnNewPathSegment_Parms*)Obj)->bIsOnNavLink = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_bIsOnNavLink = { "bIsOnNavLink", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleAIController_eventOnNewPathSegment_Parms), &Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_bIsOnNavLink_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIController_eventOnNewPathSegment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_PathPointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_StartSegmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_TargetSegmentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_AreaClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_bIsOnNavLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom Path Control" },
		{ "Comment", "/**\n\x09* Allows you to change the current path point to a different location (Debug mode: Yellow square).\n\x09* This is executed once every time the vehicle reaches a new path point, so can be more optimial than GetCustomDestination (executed every frame)\n\x09* @param PathPointIndex - The index of this new path point, which can then be used to check other path points relative to this one\n\x09* @param StartSegmentLocation - The point which the vehicle reached when it triggered this event\n\x09* @param TargetSegmentLocation - The unchanged path point this vehicle is trying to reach\n\x09* @param AreaClass - The area class of the target segment\n\x09* @param bIsOnNavLink - Whether or not the target segment is on a nav link or not\n\x09* @return The new location for this path point to be set\n\x09*/" },
		{ "ModuleRelativePath", "Public/VehicleAIController.h" },
		{ "ToolTip", "Allows you to change the current path point to a different location (Debug mode: Yellow square).\nThis is executed once every time the vehicle reaches a new path point, so can be more optimial than GetCustomDestination (executed every frame)\n@param PathPointIndex - The index of this new path point, which can then be used to check other path points relative to this one\n@param StartSegmentLocation - The point which the vehicle reached when it triggered this event\n@param TargetSegmentLocation - The unchanged path point this vehicle is trying to reach\n@param AreaClass - The area class of the target segment\n@param bIsOnNavLink - Whether or not the target segment is on a nav link or not\n@return The new location for this path point to be set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleAIController, nullptr, "OnNewPathSegment", nullptr, nullptr, sizeof(VehicleAIController_eventOnNewPathSegment_Parms), Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVehicleAIController_NoRegister()
	{
		return AVehicleAIController::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVehicleAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleAIController_GetCustomDestination, "GetCustomDestination" }, // 502388992
		{ &Z_Construct_UFunction_AVehicleAIController_OnNewPathSegment, "OnNewPathSegment" }, // 2346760365
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "VehicleAIController.h" },
		{ "ModuleRelativePath", "Public/VehicleAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVehicleAIController_Statics::ClassParams = {
		&AVehicleAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVehicleAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVehicleAIController, 348689832);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<AVehicleAIController>()
	{
		return AVehicleAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVehicleAIController(Z_Construct_UClass_AVehicleAIController, &AVehicleAIController::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("AVehicleAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
