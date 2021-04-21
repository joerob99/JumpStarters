// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef VEHICLEAIPLUGIN_RoadSplineMeshComponent_generated_h
#error "RoadSplineMeshComponent.generated.h already included, missing '#pragma once' in RoadSplineMeshComponent.h"
#endif
#define VEHICLEAIPLUGIN_RoadSplineMeshComponent_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAreaClass);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAreaClass);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURoadSplineMeshComponent(); \
	friend struct Z_Construct_UClass_URoadSplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(URoadSplineMeshComponent, USplineMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(URoadSplineMeshComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesURoadSplineMeshComponent(); \
	friend struct Z_Construct_UClass_URoadSplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(URoadSplineMeshComponent, USplineMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(URoadSplineMeshComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadSplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadSplineMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadSplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadSplineMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoadSplineMeshComponent(URoadSplineMeshComponent&&); \
	NO_API URoadSplineMeshComponent(const URoadSplineMeshComponent&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadSplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URoadSplineMeshComponent(URoadSplineMeshComponent&&); \
	NO_API URoadSplineMeshComponent(const URoadSplineMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadSplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadSplineMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadSplineMeshComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaClass() { return STRUCT_OFFSET(URoadSplineMeshComponent, AreaClass); }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_10_PROLOG
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class URoadSplineMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_RoadSplineMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
