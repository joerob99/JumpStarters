// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef VEHICLEAIPLUGIN_VehicleAIInterface_generated_h
#error "VehicleAIInterface.generated.h already included, missing '#pragma once' in VehicleAIInterface.h"
#endif
#define VEHICLEAIPLUGIN_VehicleAIInterface_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_RPC_WRAPPERS \
	virtual bool OnVehicleStuck_Implementation(FVector& UnStuckLocation) { return false; }; \
 \
	DECLARE_FUNCTION(execOnVehicleStuck);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnVehicleStuck_Implementation(FVector& UnStuckLocation) { return false; }; \
 \
	DECLARE_FUNCTION(execOnVehicleStuck);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_EVENT_PARMS \
	struct VehicleAIInterface_eventCustomBraking_Parms \
	{ \
		float TargetAngle; \
		float DestinationDistance; \
		float DesiredSpeed; \
		float CalculatedBrake; \
	}; \
	struct VehicleAIInterface_eventCustomSteering_Parms \
	{ \
		float TargetAngle; \
		float Steering; \
		float DestinationDistance; \
	}; \
	struct VehicleAIInterface_eventCustomThrottle_Parms \
	{ \
		float TargetAngle; \
		float DestinationDistance; \
		float DesiredSpeed; \
		float CalculatedThrottle; \
	}; \
	struct VehicleAIInterface_eventOnVehicleStuck_Parms \
	{ \
		FVector UnStuckLocation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		VehicleAIInterface_eventOnVehicleStuck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAIInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VEHICLEAIPLUGIN_API, UVehicleAIInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAIInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(UVehicleAIInterface&&); \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(const UVehicleAIInterface&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(UVehicleAIInterface&&); \
	VEHICLEAIPLUGIN_API UVehicleAIInterface(const UVehicleAIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VEHICLEAIPLUGIN_API, UVehicleAIInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleAIInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleAIInterface)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVehicleAIInterface(); \
	friend struct Z_Construct_UClass_UVehicleAIInterface_Statics; \
public: \
	DECLARE_CLASS(UVehicleAIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), VEHICLEAIPLUGIN_API) \
	DECLARE_SERIALIZER(UVehicleAIInterface)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVehicleAIInterface() {} \
public: \
	typedef UVehicleAIInterface UClassType; \
	typedef IVehicleAIInterface ThisClass; \
	static void Execute_CustomBraking(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake); \
	static void Execute_CustomSteering(UObject* O, float TargetAngle, float Steering, float DestinationDistance); \
	static void Execute_CustomThrottle(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle); \
	static bool Execute_OnVehicleStuck(UObject* O, FVector& UnStuckLocation); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IVehicleAIInterface() {} \
public: \
	typedef UVehicleAIInterface UClassType; \
	typedef IVehicleAIInterface ThisClass; \
	static void Execute_CustomBraking(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedBrake); \
	static void Execute_CustomSteering(UObject* O, float TargetAngle, float Steering, float DestinationDistance); \
	static void Execute_CustomThrottle(UObject* O, float TargetAngle, float DestinationDistance, float DesiredSpeed, float CalculatedThrottle); \
	static bool Execute_OnVehicleStuck(UObject* O, FVector& UnStuckLocation); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_10_PROLOG \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_EVENT_PARMS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class UVehicleAIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_VehicleAIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
