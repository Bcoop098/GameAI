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

#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_RPC_WRAPPERS
#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine)


#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStateMachine(); \
	friend struct Z_Construct_UClass_UStateMachine_Statics; \
public: \
	DECLARE_CLASS(UStateMachine, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UStateMachine)


#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_STANDARD_CONSTRUCTORS \
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


#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateMachine(UStateMachine&&); \
	NO_API UStateMachine(const UStateMachine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateMachine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateMachine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateMachine)


#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_PRIVATE_PROPERTY_OFFSET
#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_11_PROLOG
#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_PRIVATE_PROPERTY_OFFSET \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_RPC_WRAPPERS \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_INCLASS \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_PRIVATE_PROPERTY_OFFSET \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_INCLASS_NO_PURE_DECLS \
	DecisionTrees_Source_PathFinding_Public_StateMachine_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class UStateMachine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DecisionTrees_Source_PathFinding_Public_StateMachine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
