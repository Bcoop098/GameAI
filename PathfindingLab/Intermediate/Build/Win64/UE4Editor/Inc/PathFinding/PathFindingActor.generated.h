// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef PATHFINDING_PathFindingActor_generated_h
#error "PathFindingActor.generated.h already included, missing '#pragma once' in PathFindingActor.h"
#endif
#define PATHFINDING_PathFindingActor_generated_h

#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToPathFollow) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_newPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToPathFollow(Z_Param_Out_newPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathToFollow) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_newPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathToFollow(Z_Param_Out_newPath); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToPathFollow) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_newPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToPathFollow(Z_Param_Out_newPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPathToFollow) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_newPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPathToFollow(Z_Param_Out_newPath); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPathFindingActor(); \
	friend struct Z_Construct_UClass_APathFindingActor_Statics; \
public: \
	DECLARE_CLASS(APathFindingActor, ASteeringActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(APathFindingActor)


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPathFindingActor(); \
	friend struct Z_Construct_UClass_APathFindingActor_Statics; \
public: \
	DECLARE_CLASS(APathFindingActor, ASteeringActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(APathFindingActor)


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathFindingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APathFindingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathFindingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathFindingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathFindingActor(APathFindingActor&&); \
	NO_API APathFindingActor(const APathFindingActor&); \
public:


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APathFindingActor() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APathFindingActor(APathFindingActor&&); \
	NO_API APathFindingActor(const APathFindingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APathFindingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APathFindingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APathFindingActor)


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReachRadius() { return STRUCT_OFFSET(APathFindingActor, ReachRadius); } \
	FORCEINLINE static uint32 __PPO__NeedNewDestination() { return STRUCT_OFFSET(APathFindingActor, NeedNewDestination); } \
	FORCEINLINE static uint32 __PPO__IsLooping() { return STRUCT_OFFSET(APathFindingActor, IsLooping); } \
	FORCEINLINE static uint32 __PPO__Path() { return STRUCT_OFFSET(APathFindingActor, Path); } \
	FORCEINLINE static uint32 __PPO__pathBuilder() { return STRUCT_OFFSET(APathFindingActor, pathBuilder); }


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_10_PROLOG
#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_INCLASS \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_PathFindingActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_PathFindingActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class APathFindingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_PathFindingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
