// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleAIPlugin_init() {}
	VEHICLEAIPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature();
	VEHICLEAIPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VehicleAIPlugin_OnMoveReachedLink__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VehicleAIPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VehicleAIPlugin_AsyncPathFindComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VehicleAIPlugin_OnMoveReachedLink__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/VehicleAIPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7C28CFD7,
				0x8154556E,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
