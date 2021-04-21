// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineNavLinkComponent;
class AActor;
struct FVector;
#ifdef VEHICLEAIPLUGIN_SplineNavLinkComponent_generated_h
#error "SplineNavLinkComponent.generated.h already included, missing '#pragma once' in SplineNavLinkComponent.h"
#endif
#define VEHICLEAIPLUGIN_SplineNavLinkComponent_generated_h

#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_13_DELEGATE \
struct _Script_VehicleAIPlugin_eventOnMoveReachedLink_Parms \
{ \
	USplineNavLinkComponent* ThisComp; \
	AActor* Agent; \
	FVector DestPoint; \
}; \
static inline void FOnMoveReachedLink_DelegateWrapper(const FMulticastScriptDelegate& OnMoveReachedLink, USplineNavLinkComponent* ThisComp, AActor* Agent, FVector const& DestPoint) \
{ \
	_Script_VehicleAIPlugin_eventOnMoveReachedLink_Parms Parms; \
	Parms.ThisComp=ThisComp; \
	Parms.Agent=Agent; \
	Parms.DestPoint=DestPoint; \
	OnMoveReachedLink.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_SPARSE_DATA
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAllowTraverse); \
	DECLARE_FUNCTION(execResumePathFollowing); \
	DECLARE_FUNCTION(execCanTraverseLink);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAllowTraverse); \
	DECLARE_FUNCTION(execResumePathFollowing); \
	DECLARE_FUNCTION(execCanTraverseLink);


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineNavLinkComponent(); \
	friend struct Z_Construct_UClass_USplineNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(USplineNavLinkComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USplineNavLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USplineNavLinkComponent*>(this); }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSplineNavLinkComponent(); \
	friend struct Z_Construct_UClass_USplineNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(USplineNavLinkComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleAIPlugin"), NO_API) \
	DECLARE_SERIALIZER(USplineNavLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<USplineNavLinkComponent*>(this); }


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineNavLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineNavLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineNavLinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineNavLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineNavLinkComponent(USplineNavLinkComponent&&); \
	NO_API USplineNavLinkComponent(const USplineNavLinkComponent&); \
public:


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineNavLinkComponent(USplineNavLinkComponent&&); \
	NO_API USplineNavLinkComponent(const USplineNavLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineNavLinkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineNavLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineNavLinkComponent)


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_18_PROLOG
#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_RPC_WRAPPERS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_INCLASS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_SPARSE_DATA \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEAIPLUGIN_API UClass* StaticClass<class USplineNavLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_VehicleAIPlugin_Source_VehicleAIPlugin_Public_Components_SplineNavLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
