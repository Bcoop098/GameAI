// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEERING_SteeringGameModeBase_generated_h
#error "SteeringGameModeBase.generated.h already included, missing '#pragma once' in SteeringGameModeBase.h"
#endif
#define STEERING_SteeringGameModeBase_generated_h

#define Steering_Source_Steering_SteeringGameModeBase_h_15_RPC_WRAPPERS
#define Steering_Source_Steering_SteeringGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Steering_Source_Steering_SteeringGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteeringGameModeBase(); \
	friend struct Z_Construct_UClass_ASteeringGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASteeringGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Steering"), NO_API) \
	DECLARE_SERIALIZER(ASteeringGameModeBase)


#define Steering_Source_Steering_SteeringGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASteeringGameModeBase(); \
	friend struct Z_Construct_UClass_ASteeringGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASteeringGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Steering"), NO_API) \
	DECLARE_SERIALIZER(ASteeringGameModeBase)


#define Steering_Source_Steering_SteeringGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASteeringGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASteeringGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteeringGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteeringGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASteeringGameModeBase(ASteeringGameModeBase&&); \
	NO_API ASteeringGameModeBase(const ASteeringGameModeBase&); \
public:


#define Steering_Source_Steering_SteeringGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASteeringGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASteeringGameModeBase(ASteeringGameModeBase&&); \
	NO_API ASteeringGameModeBase(const ASteeringGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteeringGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteeringGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASteeringGameModeBase)


#define Steering_Source_Steering_SteeringGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Steering_Source_Steering_SteeringGameModeBase_h_12_PROLOG
#define Steering_Source_Steering_SteeringGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Steering_Source_Steering_SteeringGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Steering_Source_Steering_SteeringGameModeBase_h_15_RPC_WRAPPERS \
	Steering_Source_Steering_SteeringGameModeBase_h_15_INCLASS \
	Steering_Source_Steering_SteeringGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Steering_Source_Steering_SteeringGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Steering_Source_Steering_SteeringGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Steering_Source_Steering_SteeringGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Steering_Source_Steering_SteeringGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Steering_Source_Steering_SteeringGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEERING_API UClass* StaticClass<class ASteeringGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Steering_Source_Steering_SteeringGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
