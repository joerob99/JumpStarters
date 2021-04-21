// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UObject;
#ifdef VEHICLEAIPLUGIN_VehicleAIController_generated_h
#error "VehicleAIController.generated.h already included, missing '#pragma once' in VehicleAIController.h"
#endif
#define VEHICLEAIPLUGIN_VehicleAIController_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_RPC_WRAPPERS \
	virtual FVector OnNewPathSegment_Implementation(int32 PathPointIndex, FVector StartSegmentLocation, FVector TargetSegmentLocation, const UClass* AreaClass, bool bIsOnNavLink); \
	virtual FVector GetCustomDestination_Implementation(FVector CurrentMoveFocus); \
 \
	DECLARE_FUNCTION(execOnNewPathSegment); \
	DECLARE_FUNCTION(execGetCustomDestination);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector OnNewPathSegment_Implementation(int32 PathPointIndex, FVector StartSegmentLocation, FVector TargetSegmentLocation, const UClass* AreaClass, bool bIsOnNavLink); \
	virtual FVector GetCustomDestination_Implementation(FVector CurrentMoveFocus); \
 \
	DECLARE_FUNCTION(execOnNewPathSegment); \
	DECLARE_FUNCTION(execGetCustomDestination);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_EVENT_PARMS \
	struct VehicleAIController_eventGetCustomDestination_Parms \
	{ \
		FVector CurrentMoveFocus; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VehicleAIController_eventGetCustomDestination_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct VehicleAIController_eventOnNewPathSegment_Parms \
	{ \
		int32 PathPointIndex; \
		FVector StartSegmentLocation; \
		FVector TargetSegmentLocation; \
		const UClass* AreaClass; \
		bool bIsOnNavLink; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VehicleAIController_eventOnNewPathSegment_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleAIController(); \
	friend struct Z_Construct_UClass_AVehicleAIController_Statics; \
public: \
	DECLARE_CLASS(AVehicleAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVehicleAIController)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVehicleAIController(); \
	friend struct Z_Construct_UClass_AVehicleAIController_Statics; \
public: \
	DECLARE_CLASS(AVehicleAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVehicleAIController)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVehicleAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleAIController(AVehicleAIController&&); \
	NO_API AVehicleAIController(const AVehicleAIController&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVehicleAIController(AVehicleAIController&&); \
	NO_API AVehicleAIController(const AVehicleAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVehicleAIController)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_12_PROLOG \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_EVENT_PARMS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class AVehicleAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
