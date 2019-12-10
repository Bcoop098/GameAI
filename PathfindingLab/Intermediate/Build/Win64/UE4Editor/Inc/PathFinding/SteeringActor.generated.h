// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef PATHFINDING_SteeringActor_generated_h
#error "SteeringActor.generated.h already included, missing '#pragma once' in SteeringActor.h"
#endif
#define PATHFINDING_SteeringActor_generated_h

#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execresetTheGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->resetTheGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execkill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->kill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshoot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->shoot(Z_Param_scale); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execresetTheGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->resetTheGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execkill) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->kill(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execshoot) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_scale); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->shoot(Z_Param_scale); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_EVENT_PARMS \
	struct SteeringActor_eventBP_Shoot_Parms \
	{ \
		FTransform shootDir; \
	};


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_CALLBACK_WRAPPERS
#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASteeringActor(); \
	friend struct Z_Construct_UClass_ASteeringActor_Statics; \
public: \
	DECLARE_CLASS(ASteeringActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(ASteeringActor)


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASteeringActor(); \
	friend struct Z_Construct_UClass_ASteeringActor_Statics; \
public: \
	DECLARE_CLASS(ASteeringActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(ASteeringActor)


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_STANDARD_CONSTRUCTORS \
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


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASteeringActor(ASteeringActor&&); \
	NO_API ASteeringActor(const ASteeringActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASteeringActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASteeringActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASteeringActor)


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(ASteeringActor, Position); } \
	FORCEINLINE static uint32 __PPO__SteeringVelocity() { return STRUCT_OFFSET(ASteeringActor, SteeringVelocity); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ASteeringActor, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__DragForce() { return STRUCT_OFFSET(ASteeringActor, DragForce); } \
	FORCEINLINE static uint32 __PPO__SeekStrength() { return STRUCT_OFFSET(ASteeringActor, SeekStrength); } \
	FORCEINLINE static uint32 __PPO__SeekDecelerationDistance() { return STRUCT_OFFSET(ASteeringActor, SeekDecelerationDistance); } \
	FORCEINLINE static uint32 __PPO__TargetPos() { return STRUCT_OFFSET(ASteeringActor, TargetPos); } \
	FORCEINLINE static uint32 __PPO__hasFlag() { return STRUCT_OFFSET(ASteeringActor, hasFlag); } \
	FORCEINLINE static uint32 __PPO__canShoot() { return STRUCT_OFFSET(ASteeringActor, canShoot); } \
	FORCEINLINE static uint32 __PPO__reset() { return STRUCT_OFFSET(ASteeringActor, reset); } \
	FORCEINLINE static uint32 __PPO__basePosition() { return STRUCT_OFFSET(ASteeringActor, basePosition); } \
	FORCEINLINE static uint32 __PPO__flagCount() { return STRUCT_OFFSET(ASteeringActor, flagCount); } \
	FORCEINLINE static uint32 __PPO__myFlag() { return STRUCT_OFFSET(ASteeringActor, myFlag); }


#define PathfindingLab_Source_PathFinding_SteeringActor_h_10_PROLOG \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_EVENT_PARMS


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_CALLBACK_WRAPPERS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_INCLASS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_SteeringActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_CALLBACK_WRAPPERS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_SteeringActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class ASteeringActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_SteeringActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
