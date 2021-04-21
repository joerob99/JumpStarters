// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleAIPlugin/Public/VehicleAIFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAIFunctionLibrary() {}
// Cross Module References
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehicleAIFunctionLibrary_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehicleAIFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin();
	VEHICLEAIPLUGIN_API UEnum* Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	VEHICLEAIPLUGIN_API UClass* Z_Construct_UClass_UVehiclePathFollowingComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleAIFunctionLibrary::execFollowSplinePath)
	{
		P_GET_OBJECT(AAIController,Z_Param_AIController);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpaceBetweenParts);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVehicleAIFunctionLibrary::FollowSplinePath(Z_Param_AIController,Z_Param_Spline,Z_Param_SpaceBetweenParts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleAIFunctionLibrary::execSetPathPoints)
	{
		P_GET_OBJECT(AAIController,Z_Param_AIController);
		P_GET_TARRAY(FVector,Z_Param_NewPathPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVehicleAIFunctionLibrary::SetPathPoints(Z_Param_AIController,Z_Param_NewPathPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleAIFunctionLibrary::execConvertToTankSteering)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSteering);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThrottle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TurnInPlaceThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalTurnMultiplier);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutLeftTrack);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRightTrack);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehicleAIFunctionLibrary::ConvertToTankSteering(Z_Param_InSteering,Z_Param_InThrottle,Z_Param_TurnInPlaceThreshold,Z_Param_NormalTurnMultiplier,Z_Param_Out_OutLeftTrack,Z_Param_Out_OutRightTrack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleAIFunctionLibrary::execConvertVelocityByUnit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputVelocity);
		P_GET_PROPERTY(FByteProperty,Z_Param_InputVelocityType);
		P_GET_PROPERTY(FByteProperty,Z_Param_OutputVelocityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVehicleAIFunctionLibrary::ConvertVelocityByUnit(Z_Param_InputVelocity,ESpeedUnits(Z_Param_InputVelocityType),ESpeedUnits(Z_Param_OutputVelocityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleAIFunctionLibrary::execGetVehiclePathFollowingComponent)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVehiclePathFollowingComponent**)Z_Param__Result=UVehicleAIFunctionLibrary::GetVehiclePathFollowingComponent(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void UVehicleAIFunctionLibrary::StaticRegisterNativesUVehicleAIFunctionLibrary()
	{
		UClass* Class = UVehicleAIFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToTankSteering", &UVehicleAIFunctionLibrary::execConvertToTankSteering },
			{ "ConvertVelocityByUnit", &UVehicleAIFunctionLibrary::execConvertVelocityByUnit },
			{ "FollowSplinePath", &UVehicleAIFunctionLibrary::execFollowSplinePath },
			{ "GetVehiclePathFollowingComponent", &UVehicleAIFunctionLibrary::execGetVehiclePathFollowingComponent },
			{ "SetPathPoints", &UVehicleAIFunctionLibrary::execSetPathPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics
	{
		struct VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms
		{
			float InSteering;
			float InThrottle;
			float TurnInPlaceThreshold;
			float NormalTurnMultiplier;
			float OutLeftTrack;
			float OutRightTrack;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSteering;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InThrottle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnInPlaceThreshold;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalTurnMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutLeftTrack;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutRightTrack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_InSteering = { "InSteering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, InSteering), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_InThrottle = { "InThrottle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, InThrottle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_TurnInPlaceThreshold = { "TurnInPlaceThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, TurnInPlaceThreshold), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_NormalTurnMultiplier = { "NormalTurnMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, NormalTurnMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_OutLeftTrack = { "OutLeftTrack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, OutLeftTrack), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_OutRightTrack = { "OutRightTrack", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms, OutRightTrack), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_InSteering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_InThrottle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_TurnInPlaceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_NormalTurnMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_OutLeftTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::NewProp_OutRightTrack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Converts the steering of a vehicle into one usable for a tank */" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
		{ "ToolTip", "Converts the steering of a vehicle into one usable for a tank" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIFunctionLibrary, nullptr, "ConvertToTankSteering", nullptr, nullptr, sizeof(VehicleAIFunctionLibrary_eventConvertToTankSteering_Parms), Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics
	{
		struct VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms
		{
			float InputVelocity;
			TEnumAsByte<ESpeedUnits> InputVelocityType;
			TEnumAsByte<ESpeedUnits> OutputVelocityType;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputVelocity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputVelocityType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputVelocityType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_InputVelocity = { "InputVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms, InputVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_InputVelocityType = { "InputVelocityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms, InputVelocityType), Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_OutputVelocityType = { "OutputVelocityType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms, OutputVelocityType), Z_Construct_UEnum_VehicleAIPlugin_ESpeedUnits, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_InputVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_InputVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_OutputVelocityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Converts the input velocity into the output velocity. Used to change between units of data */" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
		{ "ToolTip", "Converts the input velocity into the output velocity. Used to change between units of data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIFunctionLibrary, nullptr, "ConvertVelocityByUnit", nullptr, nullptr, sizeof(VehicleAIFunctionLibrary_eventConvertVelocityByUnit_Parms), Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics
	{
		struct VehicleAIFunctionLibrary_eventFollowSplinePath_Parms
		{
			AAIController* AIController;
			USplineComponent* Spline;
			float SpaceBetweenParts;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpaceBetweenParts;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventFollowSplinePath_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventFollowSplinePath_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_Spline_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_SpaceBetweenParts = { "SpaceBetweenParts", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventFollowSplinePath_Parms, SpaceBetweenParts), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleAIFunctionLibrary_eventFollowSplinePath_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleAIFunctionLibrary_eventFollowSplinePath_Parms), &Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_Spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_SpaceBetweenParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Sets a path onto a spline that an agent can follow */" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
		{ "ToolTip", "Sets a path onto a spline that an agent can follow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIFunctionLibrary, nullptr, "FollowSplinePath", nullptr, nullptr, sizeof(VehicleAIFunctionLibrary_eventFollowSplinePath_Parms), Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics
	{
		struct VehicleAIFunctionLibrary_eventGetVehiclePathFollowingComponent_Parms
		{
			APawn* Pawn;
			UVehiclePathFollowingComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventGetVehiclePathFollowingComponent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventGetVehiclePathFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_UVehiclePathFollowingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Helper function that returns the path following component from a provided pawn by getting the controller and its path following component. */" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
		{ "ToolTip", "Helper function that returns the path following component from a provided pawn by getting the controller and its path following component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIFunctionLibrary, nullptr, "GetVehiclePathFollowingComponent", nullptr, nullptr, sizeof(VehicleAIFunctionLibrary_eventGetVehiclePathFollowingComponent_Parms), Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics
	{
		struct VehicleAIFunctionLibrary_eventSetPathPoints_Parms
		{
			AAIController* AIController;
			TArray<FVector> NewPathPoints;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewPathPoints_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewPathPoints;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventSetPathPoints_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_NewPathPoints_Inner = { "NewPathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_NewPathPoints = { "NewPathPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VehicleAIFunctionLibrary_eventSetPathPoints_Parms, NewPathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VehicleAIFunctionLibrary_eventSetPathPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VehicleAIFunctionLibrary_eventSetPathPoints_Parms), &Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_NewPathPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_NewPathPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehicle AI" },
		{ "Comment", "/* Manually sets path points for the current path on an AI controller */" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
		{ "ToolTip", "Manually sets path points for the current path on an AI controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleAIFunctionLibrary, nullptr, "SetPathPoints", nullptr, nullptr, sizeof(VehicleAIFunctionLibrary_eventSetPathPoints_Parms), Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehicleAIFunctionLibrary_NoRegister()
	{
		return UVehicleAIFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleAIPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertToTankSteering, "ConvertToTankSteering" }, // 255549700
		{ &Z_Construct_UFunction_UVehicleAIFunctionLibrary_ConvertVelocityByUnit, "ConvertVelocityByUnit" }, // 1814537229
		{ &Z_Construct_UFunction_UVehicleAIFunctionLibrary_FollowSplinePath, "FollowSplinePath" }, // 2261812082
		{ &Z_Construct_UFunction_UVehicleAIFunctionLibrary_GetVehiclePathFollowingComponent, "GetVehiclePathFollowingComponent" }, // 1982097942
		{ &Z_Construct_UFunction_UVehicleAIFunctionLibrary_SetPathPoints, "SetPathPoints" }, // 1648095826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VehicleAIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VehicleAIFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleAIFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::ClassParams = {
		&UVehicleAIFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehicleAIFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehicleAIFunctionLibrary, 669183648);
	template<> VEHICLEAIPLUGIN_API UClass* StaticClass<UVehicleAIFunctionLibrary>()
	{
		return UVehicleAIFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehicleAIFunctionLibrary(Z_Construct_UClass_UVehicleAIFunctionLibrary, &UVehicleAIFunctionLibrary::StaticClass, TEXT("/Script/VehicleAIPlugin"), TEXT("UVehicleAIFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleAIFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
