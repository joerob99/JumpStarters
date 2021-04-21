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
struct FVehicleHandlingConfig;
struct FRotator;
#ifdef VEHICLEAIPLUGIN_VehiclePathFollowingComponent_generated_h
#error "VehiclePathFollowingComponent.generated.h already included, missing '#pragma once' in VehiclePathFollowingComponent.h"
#endif
#define VEHICLEAIPLUGIN_VehiclePathFollowingComponent_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleHandlingConfig_Statics; \
	VEHICLEAIPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLEAIPLUGIN_API UScriptStruct* StaticStruct<struct FVehicleHandlingConfig>();

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPathPointDataByIndex); \
	DECLARE_FUNCTION(execSetHandlingConfig); \
	DECLARE_FUNCTION(execGetHandlingConfig); \
	DECLARE_FUNCTION(execIsStuck); \
	DECLARE_FUNCTION(execSetStuckStatus); \
	DECLARE_FUNCTION(execSetStuckDetection); \
	DECLARE_FUNCTION(execSetCustomControl); \
	DECLARE_FUNCTION(execToggleDebug); \
	DECLARE_FUNCTION(execSetVehicleCrowdSimulation); \
	DECLARE_FUNCTION(execSetDesiredSpeed); \
	DECLARE_FUNCTION(execSetDestinationRotation); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execSetAutoReverse); \
	DECLARE_FUNCTION(execSetReverse);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPathPointDataByIndex); \
	DECLARE_FUNCTION(execSetHandlingConfig); \
	DECLARE_FUNCTION(execGetHandlingConfig); \
	DECLARE_FUNCTION(execIsStuck); \
	DECLARE_FUNCTION(execSetStuckStatus); \
	DECLARE_FUNCTION(execSetStuckDetection); \
	DECLARE_FUNCTION(execSetCustomControl); \
	DECLARE_FUNCTION(execToggleDebug); \
	DECLARE_FUNCTION(execSetVehicleCrowdSimulation); \
	DECLARE_FUNCTION(execSetDesiredSpeed); \
	DECLARE_FUNCTION(execSetDestinationRotation); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execSetAutoReverse); \
	DECLARE_FUNCTION(execSetReverse);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehiclePathFollowingComponent(); \
	friend struct Z_Construct_UClass_UVehiclePathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UVehiclePathFollowingComponent, UCrowdFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehiclePathFollowingComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUVehiclePathFollowingComponent(); \
	friend struct Z_Construct_UClass_UVehiclePathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UVehiclePathFollowingComponent, UCrowdFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehiclePathFollowingComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehiclePathFollowingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehiclePathFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehiclePathFollowingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehiclePathFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehiclePathFollowingComponent(UVehiclePathFollowingComponent&&); \
	NO_API UVehiclePathFollowingComponent(const UVehiclePathFollowingComponent&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehiclePathFollowingComponent(UVehiclePathFollowingComponent&&); \
	NO_API UVehiclePathFollowingComponent(const UVehiclePathFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehiclePathFollowingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehiclePathFollowingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehiclePathFollowingComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDebug() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bDebug); } \
	FORCEINLINE static uint32 __PPO__bUseCustomAcceptanceRadius() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bUseCustomAcceptanceRadius); } \
	FORCEINLINE static uint32 __PPO__VehiclePathPointAcceptanceRadius() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, VehiclePathPointAcceptanceRadius); } \
	FORCEINLINE static uint32 __PPO__VehicleNavLinkAcceptanceRadius() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, VehicleNavLinkAcceptanceRadius); } \
	FORCEINLINE static uint32 __PPO__bCustomSteering() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bCustomSteering); } \
	FORCEINLINE static uint32 __PPO__bCustomThrottle() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bCustomThrottle); } \
	FORCEINLINE static uint32 __PPO__bCustomBrake() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bCustomBrake); } \
	FORCEINLINE static uint32 __PPO__MinThrottle() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, MinThrottle); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeedCurve() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedCurve); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeedThreshold() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThreshold); } \
	FORCEINLINE static uint32 __PPO__StartingDesiredSpeed() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StartingDesiredSpeed); } \
	FORCEINLINE static uint32 __PPO__StartSpeedUnit() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StartSpeedUnit); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeed() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeed); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeedThrottleStepMax() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleStepMax); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeedThrottleStepMin() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleStepMin); } \
	FORCEINLINE static uint32 __PPO__DesiredSpeedThrottleThreshold() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DesiredSpeedThrottleThreshold); } \
	FORCEINLINE static uint32 __PPO__bUseBrakes() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bUseBrakes); } \
	FORCEINLINE static uint32 __PPO__BrakeThreshold() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, BrakeThreshold); } \
	FORCEINLINE static uint32 __PPO__NormalisedTurnThreshold() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, NormalisedTurnThreshold); } \
	FORCEINLINE static uint32 __PPO__BrakeAmount() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, BrakeAmount); } \
	FORCEINLINE static uint32 __PPO__MaxEmergencyBrakeAmount() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, MaxEmergencyBrakeAmount); } \
	FORCEINLINE static uint32 __PPO__bThrottleUsePID() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bThrottleUsePID); } \
	FORCEINLINE static uint32 __PPO__ThrottlePIDSetup() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, ThrottlePIDSetup); } \
	FORCEINLINE static uint32 __PPO__bUseAdvancedSpeedControl() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bUseAdvancedSpeedControl); } \
	FORCEINLINE static uint32 __PPO__CornerSpeedControlPercentage() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, CornerSpeedControlPercentage); } \
	FORCEINLINE static uint32 __PPO__bAutoCalculateSlowdownDistance() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bAutoCalculateSlowdownDistance); } \
	FORCEINLINE static uint32 __PPO__bEnableSlowdown() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bEnableSlowdown); } \
	FORCEINLINE static uint32 __PPO__bSlowdownAtNavLinks() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bSlowdownAtNavLinks); } \
	FORCEINLINE static uint32 __PPO__SlowdownDistance() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, SlowdownDistance); } \
	FORCEINLINE static uint32 __PPO__CornerSlowdownSamples() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, CornerSlowdownSamples); } \
	FORCEINLINE static uint32 __PPO__MaxCornerSpeed() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, MaxCornerSpeed); } \
	FORCEINLINE static uint32 __PPO__AverageCornerSampleRange() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, AverageCornerSampleRange); } \
	FORCEINLINE static uint32 __PPO__StuckDetectionSampleCount() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionSampleCount); } \
	FORCEINLINE static uint32 __PPO__bUseStuckDetection() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bUseStuckDetection); } \
	FORCEINLINE static uint32 __PPO__UnStuckDistance() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, UnStuckDistance); } \
	FORCEINLINE static uint32 __PPO__StuckDetectionDistance() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionDistance); } \
	FORCEINLINE static uint32 __PPO__StuckAcceptanceRadius() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckAcceptanceRadius); } \
	FORCEINLINE static uint32 __PPO__StuckDetectionInterval() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, StuckDetectionInterval); } \
	FORCEINLINE static uint32 __PPO__DetourCrowdSimulationState() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, DetourCrowdSimulationState); } \
	FORCEINLINE static uint32 __PPO__CrowdAvoidanceRangeMultiplier() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, CrowdAvoidanceRangeMultiplier); } \
	FORCEINLINE static uint32 __PPO__VehicleMaxSpeed() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, VehicleMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__ShouldReverseAngle() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, ShouldReverseAngle); } \
	FORCEINLINE static uint32 __PPO__ReverseMaxDistance() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, ReverseMaxDistance); } \
	FORCEINLINE static uint32 __PPO__ReverseThreshold() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, ReverseThreshold); } \
	FORCEINLINE static uint32 __PPO__bAutoReverse() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bAutoReverse); } \
	FORCEINLINE static uint32 __PPO__bOnlyReverseWhenStuck() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bOnlyReverseWhenStuck); } \
	FORCEINLINE static uint32 __PPO__SteeringMultiplier() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringMultiplier); } \
	FORCEINLINE static uint32 __PPO__SteeringCurve() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringCurve); } \
	FORCEINLINE static uint32 __PPO__bSteeringUsePID() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, bSteeringUsePID); } \
	FORCEINLINE static uint32 __PPO__SteeringPIDSetup() { return STRUCT_OFFSET(UVehiclePathFollowingComponent, SteeringPIDSetup); }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_86_PROLOG
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class UVehiclePathFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_VehiclePathFollowingComponent_h


#define FOREACH_ENUM_E_CROWDSIMULATIONSTATE(op) \
	op(Enabled) \
	op(ObstacleOnly) \
	op(Disabled) 
#define FOREACH_ENUM_ESPEEDUNITS(op) \
	op(MilesPerHour) \
	op(KilometersPerHour) \
	op(CentimetersPerSecond) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
