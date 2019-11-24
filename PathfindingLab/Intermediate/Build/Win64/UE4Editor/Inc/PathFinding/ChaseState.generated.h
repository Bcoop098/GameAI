// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDING_ChaseState_generated_h
#error "ChaseState.generated.h already included, missing '#pragma once' in ChaseState.h"
#endif
#define PATHFINDING_ChaseState_generated_h

#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_RPC_WRAPPERS
#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaseState(); \
	friend struct Z_Construct_UClass_UChaseState_Statics; \
public: \
	DECLARE_CLASS(UChaseState, UStatePrimative, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UChaseState)


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUChaseState(); \
	friend struct Z_Construct_UClass_UChaseState_Statics; \
public: \
	DECLARE_CLASS(UChaseState, UStatePrimative, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UChaseState)


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaseState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaseState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaseState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaseState(UChaseState&&); \
	NO_API UChaseState(const UChaseState&); \
public:


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaseState() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaseState(UChaseState&&); \
	NO_API UChaseState(const UChaseState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaseState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaseState)


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__maxTargetTime() { return STRUCT_OFFSET(UChaseState, maxTargetTime); } \
	FORCEINLINE static uint32 __PPO__targetTime() { return STRUCT_OFFSET(UChaseState, targetTime); }


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_12_PROLOG
#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_INCLASS \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_ChaseState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class UChaseState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_ChaseState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
