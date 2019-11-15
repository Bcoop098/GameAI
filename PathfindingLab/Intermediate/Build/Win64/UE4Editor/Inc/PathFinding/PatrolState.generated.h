// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDING_PatrolState_generated_h
#error "PatrolState.generated.h already included, missing '#pragma once' in PatrolState.h"
#endif
#define PATHFINDING_PatrolState_generated_h

#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_RPC_WRAPPERS
#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatrolState(); \
	friend struct Z_Construct_UClass_APatrolState_Statics; \
public: \
	DECLARE_CLASS(APatrolState, AStatePrimative, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(APatrolState)


#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPatrolState(); \
	friend struct Z_Construct_UClass_APatrolState_Statics; \
public: \
	DECLARE_CLASS(APatrolState, AStatePrimative, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(APatrolState)


#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatrolState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatrolState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatrolState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatrolState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatrolState(APatrolState&&); \
	NO_API APatrolState(const APatrolState&); \
public:


#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatrolState() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatrolState(APatrolState&&); \
	NO_API APatrolState(const APatrolState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatrolState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatrolState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatrolState)


#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_PRIVATE_PROPERTY_OFFSET
#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_12_PROLOG
#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_INCLASS \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_PatrolState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class APatrolState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_PatrolState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
