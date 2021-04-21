// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/Tasks/Task_VehicleMoveToAtSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_VehicleMoveToAtSpeed() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UTask_VehicleMoveToAtSpeed();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UTask_VehicleMoveTo();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UTask_VehicleMoveToAtSpeed::StaticRegisterNativesUTask_VehicleMoveToAtSpeed()
	{
	}
	UClass* Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_NoRegister()
	{
		return UTask_VehicleMoveToAtSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DesiredSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTask_VehicleMoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes this vehicle move to a location but at a blackboard defined desired speed\n */" },
		{ "IncludePath", "Tasks/Task_VehicleMoveToAtSpeed.h" },
		{ "ModuleRelativePath", "Public/Tasks/Task_VehicleMoveToAtSpeed.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Makes this vehicle move to a location but at a blackboard defined desired speed" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::NewProp_DesiredSpeed_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/Task_VehicleMoveToAtSpeed.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::NewProp_DesiredSpeed = { "DesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTask_VehicleMoveToAtSpeed, DesiredSpeed), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::NewProp_DesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::NewProp_DesiredSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::NewProp_DesiredSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_VehicleMoveToAtSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::ClassParams = {
		&UTask_VehicleMoveToAtSpeed::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_VehicleMoveToAtSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_VehicleMoveToAtSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_VehicleMoveToAtSpeed, 2003688678);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UTask_VehicleMoveToAtSpeed>()
	{
		return UTask_VehicleMoveToAtSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_VehicleMoveToAtSpeed(Z_Construct_UClass_UTask_VehicleMoveToAtSpeed, &UTask_VehicleMoveToAtSpeed::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UTask_VehicleMoveToAtSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_VehicleMoveToAtSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
