// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEERING_SteeringActor_generated_h
#error "SteeringActor.generated.h already included, missing '#pragma once' in SteeringActor.h"
#endif
#define STEERING_SteeringActor_generated_h

#define Steering_Source_Steering_SteeringActor_h_12_RPC_WRAPPERS
#define Steering_Source_Steering_SteeringActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Steering_Source_Steering_SteeringActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteeringActor(); \
	friend struct Z_Construct_UClass_ASteeringActor_Statics; \
public: \
	DECLARE_CLASS(ASteeringActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Steering"), NO_API) \
	DECLARE_SERIALIZER(ASteeringActor)


#define Steering_Source_Steering_SteeringActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASteeringActor(); \
	friend struct Z_Construct_UClass_ASteeringActor_Statics; \
public: \
	DECLARE_CLASS(ASteeringActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Steering"), NO_API) \
	DECLARE_SERIALIZER(ASteeringActor)


#define Steering_Source_Steering_SteeringActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASteeringActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASteeringActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteeringActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteeringActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASteeringActor(ASteeringActor&&); \
	NO_API ASteeringActor(const ASteeringActor&); \
public:


#define Steering_Source_Steering_SteeringActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASteeringActor(ASteeringActor&&); \
	NO_API ASteeringActor(const ASteeringActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteeringActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteeringActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASteeringActor)


#define Steering_Source_Steering_SteeringActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__radius() { return STRUCT_OFFSET(ASteeringActor, radius); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ASteeringActor, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__TargetPos() { return STRUCT_OFFSET(ASteeringActor, TargetPos); } \
	FORCEINLINE static uint32 __PPO__AllSteeringActors() { return STRUCT_OFFSET(ASteeringActor, AllSteeringActors); }


#define Steering_Source_Steering_SteeringActor_h_9_PROLOG
#define Steering_Source_Steering_SteeringActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Steering_Source_Steering_SteeringActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Steering_Source_Steering_SteeringActor_h_12_RPC_WRAPPERS \
	Steering_Source_Steering_SteeringActor_h_12_INCLASS \
	Steering_Source_Steering_SteeringActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Steering_Source_Steering_SteeringActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Steering_Source_Steering_SteeringActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Steering_Source_Steering_SteeringActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Steering_Source_Steering_SteeringActor_h_12_INCLASS_NO_PURE_DECLS \
	Steering_Source_Steering_SteeringActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEERING_API UClass* StaticClass<class ASteeringActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Steering_Source_Steering_SteeringActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
