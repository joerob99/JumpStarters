// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/RoadSplineMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadSplineMeshComponent() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_URoadSplineMeshComponent_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_URoadSplineMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URoadSplineMeshComponent::execSetAreaClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaClass(Z_Param_NewAreaClass);
		P_NATIVE_END;
	}
	void URoadSplineMeshComponent::StaticRegisterNativesURoadSplineMeshComponent()
	{
		UClass* Class = URoadSplineMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &URoadSplineMeshComponent::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics
	{
		struct RoadSplineMeshComponent_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RoadSplineMeshComponent_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClass", "None" },
		{ "ModuleRelativePath", "Public/RoadSplineMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URoadSplineMeshComponent, nullptr, "SetAreaClass", nullptr, nullptr, sizeof(RoadSplineMeshComponent_eventSetAreaClass_Parms), Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URoadSplineMeshComponent_NoRegister()
	{
		return URoadSplineMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_URoadSplineMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoadSplineMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URoadSplineMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadSplineMeshComponent_SetAreaClass, "SetAreaClass" }, // 2269726048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Physics Physics Object Activation Components|Activation Trigger" },
		{ "IncludePath", "RoadSplineMeshComponent.h" },
		{ "ModuleRelativePath", "Public/RoadSplineMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoadSplineMeshComponent_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RoadSplineMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URoadSplineMeshComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URoadSplineMeshComponent, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URoadSplineMeshComponent_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineMeshComponent_Statics::NewProp_AreaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URoadSplineMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URoadSplineMeshComponent_Statics::NewProp_AreaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoadSplineMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadSplineMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URoadSplineMeshComponent_Statics::ClassParams = {
		&URoadSplineMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URoadSplineMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URoadSplineMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoadSplineMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoadSplineMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URoadSplineMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URoadSplineMeshComponent, 1937941125);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<URoadSplineMeshComponent>()
	{
		return URoadSplineMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URoadSplineMeshComponent(Z_Construct_UClass_URoadSplineMeshComponent, &URoadSplineMeshComponent::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("URoadSplineMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoadSplineMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
