// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PATHFINDING_StatePathfinder_generated_h
#error "StatePathfinder.generated.h already included, missing '#pragma once' in StatePathfinder.h"
#endif
#define PATHFINDING_StatePathfinder_generated_h

#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBulletAvoidance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bulletPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->BulletAvoidance(Z_Param_bulletPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetBasePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->getBasePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckCone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkCone(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckDistanceChase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkDistanceChase(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckDistance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkDistance(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBulletAvoidance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_bulletPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->BulletAvoidance(Z_Param_bulletPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetBasePosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->getBasePosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLastPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPatrol) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPatrol(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckCone) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkCone(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckDistanceChase) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkDistanceChase(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcheckDistance) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_actorPos); \
		P_GET_STRUCT(FVector,Z_Param_playerPos); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->checkDistance(Z_Param_actorPos,Z_Param_playerPos); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStatePathfinder(); \
	friend struct Z_Construct_UClass_AStatePathfinder_Statics; \
public: \
	DECLARE_CLASS(AStatePathfinder, APathFindingActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AStatePathfinder)


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAStatePathfinder(); \
	friend struct Z_Construct_UClass_AStatePathfinder_Statics; \
public: \
	DECLARE_CLASS(AStatePathfinder, APathFindingActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AStatePathfinder)


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatePathfinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStatePathfinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatePathfinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatePathfinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatePathfinder(AStatePathfinder&&); \
	NO_API AStatePathfinder(const AStatePathfinder&); \
public:


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStatePathfinder() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStatePathfinder(AStatePathfinder&&); \
	NO_API AStatePathfinder(const AStatePathfinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStatePathfinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStatePathfinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStatePathfinder)


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__temp() { return STRUCT_OFFSET(AStatePathfinder, temp); } \
	FORCEINLINE static uint32 __PPO__sepStrength() { return STRUCT_OFFSET(AStatePathfinder, sepStrength); } \
	FORCEINLINE static uint32 __PPO__avoidanceRadius() { return STRUCT_OFFSET(AStatePathfinder, avoidanceRadius); } \
	FORCEINLINE static uint32 __PPO__bulletAvoidRadius() { return STRUCT_OFFSET(AStatePathfinder, bulletAvoidRadius); } \
	FORCEINLINE static uint32 __PPO__Point1() { return STRUCT_OFFSET(AStatePathfinder, Point1); } \
	FORCEINLINE static uint32 __PPO__Point2() { return STRUCT_OFFSET(AStatePathfinder, Point2); } \
	FORCEINLINE static uint32 __PPO__Point3() { return STRUCT_OFFSET(AStatePathfinder, Point3); } \
	FORCEINLINE static uint32 __PPO__Point4() { return STRUCT_OFFSET(AStatePathfinder, Point4); } \
	FORCEINLINE static uint32 __PPO__patrolRoute() { return STRUCT_OFFSET(AStatePathfinder, patrolRoute); } \
	FORCEINLINE static uint32 __PPO__lastPatrolPoint() { return STRUCT_OFFSET(AStatePathfinder, lastPatrolPoint); } \
	FORCEINLINE static uint32 __PPO__bulletPos() { return STRUCT_OFFSET(AStatePathfinder, bulletPos); } \
	FORCEINLINE static uint32 __PPO__escapeTime() { return STRUCT_OFFSET(AStatePathfinder, escapeTime); } \
	FORCEINLINE static uint32 __PPO__statesForSeeker() { return STRUCT_OFFSET(AStatePathfinder, statesForSeeker); } \
	FORCEINLINE static uint32 __PPO__stateObjects() { return STRUCT_OFFSET(AStatePathfinder, stateObjects); } \
	FORCEINLINE static uint32 __PPO__currentState() { return STRUCT_OFFSET(AStatePathfinder, currentState); } \
	FORCEINLINE static uint32 __PPO__cone() { return STRUCT_OFFSET(AStatePathfinder, cone); } \
	FORCEINLINE static uint32 __PPO__rad() { return STRUCT_OFFSET(AStatePathfinder, rad); } \
	FORCEINLINE static uint32 __PPO__detectionCone() { return STRUCT_OFFSET(AStatePathfinder, detectionCone); } \
	FORCEINLINE static uint32 __PPO__distanceToDetect() { return STRUCT_OFFSET(AStatePathfinder, distanceToDetect); } \
	FORCEINLINE static uint32 __PPO__distanceToDetectChase() { return STRUCT_OFFSET(AStatePathfinder, distanceToDetectChase); } \
	FORCEINLINE static uint32 __PPO__shouldShoot() { return STRUCT_OFFSET(AStatePathfinder, shouldShoot); }


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_17_PROLOG
#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_INCLASS \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_StatePathfinder_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class AStatePathfinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_StatePathfinder_h


#define FOREACH_ENUM_ESTATE(op) \
	op(EState::ES_Patrol) \
	op(EState::ES_Chase) \
	op(EState::ES_ReturnPatrol) 

enum class EState : uint8;
template<> PATHFINDING_API UEnum* StaticEnum<EState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
