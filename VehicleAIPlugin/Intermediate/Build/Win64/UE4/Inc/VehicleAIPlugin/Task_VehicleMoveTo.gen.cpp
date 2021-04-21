// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/Tasks/Task_VehicleMoveTo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTask_VehicleMoveTo() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UTask_VehicleMoveTo_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UTask_VehicleMoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
// End Cross Module References
	void UTask_VehicleMoveTo::StaticRegisterNativesUTask_VehicleMoveTo()
	{
	}
	UClass* Z_Construct_UClass_UTask_VehicleMoveTo_NoRegister()
	{
		return UTask_VehicleMoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UTask_VehicleMoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReverseTowardsTarget_MetaData[];
#endif
		static void NewProp_bReverseTowardsTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReverseTowardsTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTask_VehicleMoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_VehicleMoveTo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Same as normal MoveTo node but includes the ability to optionally tell this vehicle to reverse\n */" },
		{ "IncludePath", "Tasks/Task_VehicleMoveTo.h" },
		{ "ModuleRelativePath", "Public/Tasks/Task_VehicleMoveTo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Same as normal MoveTo node but includes the ability to optionally tell this vehicle to reverse" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget_MetaData[] = {
		{ "Category", "Vehicle AI" },
		{ "ModuleRelativePath", "Public/Tasks/Task_VehicleMoveTo.h" },
	};
#endif
	void Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget_SetBit(void* Obj)
	{
		((UTask_VehicleMoveTo*)Obj)->bReverseTowardsTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget = { "bReverseTowardsTarget", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTask_VehicleMoveTo), &Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTask_VehicleMoveTo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTask_VehicleMoveTo_Statics::NewProp_bReverseTowardsTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTask_VehicleMoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTask_VehicleMoveTo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTask_VehicleMoveTo_Statics::ClassParams = {
		&UTask_VehicleMoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTask_VehicleMoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveTo_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTask_VehicleMoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTask_VehicleMoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTask_VehicleMoveTo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTask_VehicleMoveTo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTask_VehicleMoveTo, 3499754146);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UTask_VehicleMoveTo>()
	{
		return UTask_VehicleMoveTo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTask_VehicleMoveTo(Z_Construct_UClass_UTask_VehicleMoveTo, &UTask_VehicleMoveTo::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UTask_VehicleMoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTask_VehicleMoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
