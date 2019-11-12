// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDING_StateMachine_generated_h
#error "StateMachine.generated.h already included, missing '#pragma once' in StateMachine.h"
#endif
#define PATHFINDING_StateMachine_generated_h

#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_RPC_WRAPPERS
#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine)


#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine)


#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateMachine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateMachine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public:


#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateMachine)


#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_PRIVATE_PROPERTY_OFFSET
#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_10_PROLOG
#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_INCLASS \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_StateMachine_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class UStateMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_StateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
