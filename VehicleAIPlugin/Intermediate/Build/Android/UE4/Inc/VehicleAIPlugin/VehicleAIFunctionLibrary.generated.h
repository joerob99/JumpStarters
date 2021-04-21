// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class USplineComponent;
struct FVector;
class APawn;
class UVehiclePathFollowingComponent;
#ifdef VEHICLEAIPLUGIN_VehicleAIFunctionLibrary_generated_h
#error "VehicleAIFunctionLibrary.generated.h already included, missing '#pragma once' in VehicleAIFunctionLibrary.h"
#endif
#define VEHICLEAIPLUGIN_VehicleAIFunctionLibrary_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFollowSplinePath); \
	DECLARE_FUNCTION(execSetPathPoints); \
	DECLARE_FUNCTION(execConvertToTankSteering); \
	DECLARE_FUNCTION(execConvertVelocityByUnit); \
	DECLARE_FUNCTION(execGetVehiclePathFollowingComponent);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFollowSplinePath); \
	DECLARE_FUNCTION(execSetPathPoints); \
	DECLARE_FUNCTION(execConvertToTankSteering); \
	DECLARE_FUNCTION(execConvertVelocityByUnit); \
	DECLARE_FUNCTION(execGetVehiclePathFollowingComponent);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleAIFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVehicleAIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleAIFunctionLibrary)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleAIFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVehicleAIFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVehicleAIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleAIFunctionLibrary)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleAIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAIFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleAIFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAIFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleAIFunctionLibrary(UVehicleAIFunctionLibrary&&); \
	NO_API UVehicleAIFunctionLibrary(const UVehicleAIFunctionLibrary&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleAIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleAIFunctionLibrary(UVehicleAIFunctionLibrary&&); \
	NO_API UVehicleAIFunctionLibrary(const UVehicleAIFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleAIFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAIFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAIFunctionLibrary)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_14_PROLOG
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class UVehicleAIFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
