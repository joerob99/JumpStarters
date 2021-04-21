// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/Components/CrowdAgentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrowdAgentComponent() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UCrowdAgentComponent_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UCrowdAgentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UCrowdAgentInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCrowdAgentComponent::execRegisterWithCrowdManager)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterWithCrowdManager(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void UCrowdAgentComponent::StaticRegisterNativesUCrowdAgentComponent()
	{
		UClass* Class = UCrowdAgentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterWithCrowdManager", &UCrowdAgentComponent::execRegisterWithCrowdManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics
	{
		struct CrowdAgentComponent_eventRegisterWithCrowdManager_Parms
		{
			APawn* Pawn;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CrowdAgentComponent_eventRegisterWithCrowdManager_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CrowdAgentComponent_eventRegisterWithCrowdManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CrowdAgentComponent_eventRegisterWithCrowdManager_Parms), &Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Registers the owning actor with the crowd manager */" },
		{ "ModuleRelativePath", "Public/Components/CrowdAgentComponent.h" },
		{ "ToolTip", "Registers the owning actor with the crowd manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCrowdAgentComponent, nullptr, "RegisterWithCrowdManager", nullptr, nullptr, sizeof(CrowdAgentComponent_eventRegisterWithCrowdManager_Parms), Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCrowdAgentComponent_NoRegister()
	{
		return UCrowdAgentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCrowdAgentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrowdAgentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCrowdAgentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrowdAgentComponent_RegisterWithCrowdManager, "RegisterWithCrowdManager" }, // 414833296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrowdAgentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n*\x09""Allows this actor to be registered with the crowd manager. Must call the registration function!\n*/" },
		{ "IncludePath", "Components/CrowdAgentComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CrowdAgentComponent.h" },
		{ "ToolTip", "*      Allows this actor to be registered with the crowd manager. Must call the registration function!" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCrowdAgentComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCrowdAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UCrowdAgentComponent, ICrowdAgentInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrowdAgentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrowdAgentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrowdAgentComponent_Statics::ClassParams = {
		&UCrowdAgentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrowdAgentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrowdAgentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrowdAgentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrowdAgentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrowdAgentComponent, 1776707894);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UCrowdAgentComponent>()
	{
		return UCrowdAgentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrowdAgentComponent(Z_Construct_UClass_UCrowdAgentComponent, &UCrowdAgentComponent::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UCrowdAgentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrowdAgentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
