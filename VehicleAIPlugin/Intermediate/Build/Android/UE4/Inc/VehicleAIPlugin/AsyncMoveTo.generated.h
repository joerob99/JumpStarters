// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AAIController;
struct FVector;
class UNavigationQueryFilter;
class UAsyncMoveTo;
#ifdef VEHICLEAIPLUGIN_AsyncMoveTo_generated_h
#error "AsyncMoveTo.generated.h already included, missing '#pragma once' in AsyncMoveTo.h"
#endif
#define VEHICLEAIPLUGIN_AsyncMoveTo_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_14_DELEGATE \
struct _Script_VehicleAIPlugin_eventAsyncPathFindComplete_Parms \
{ \
	TEnumAsByte<ENavigationQueryResult::Type> Result; \
}; \
static inline void FAsyncPathFindComplete_DelegateWrapper(const FMulticastScriptDelegate& AsyncPathFindComplete, ENavigationQueryResult::Type Result) \
{ \
	_Script_VehicleAIPlugin_eventAsyncPathFindComplete_Parms Parms; \
	Parms.Result=Result; \
	AsyncPathFindComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncMoveTo);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncMoveTo);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncMoveTo(); \
	friend struct Z_Construct_UClass_UAsyncMoveTo_Statics; \
public: \
	DECLARE_CLASS(UAsyncMoveTo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAsyncMoveTo)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncMoveTo(); \
	friend struct Z_Construct_UClass_UAsyncMoveTo_Statics; \
public: \
	DECLARE_CLASS(UAsyncMoveTo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAsyncMoveTo)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncMoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncMoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncMoveTo(UAsyncMoveTo&&); \
	NO_API UAsyncMoveTo(const UAsyncMoveTo&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncMoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncMoveTo(UAsyncMoveTo&&); \
	NO_API UAsyncMoveTo(const UAsyncMoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncMoveTo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncMoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncMoveTo)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_19_PROLOG
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class UAsyncMoveTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_AsyncMoveTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
