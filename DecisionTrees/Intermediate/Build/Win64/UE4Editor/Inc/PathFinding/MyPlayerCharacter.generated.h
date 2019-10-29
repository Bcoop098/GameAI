// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDING_MyPlayerCharacter_generated_h
#error "MyPlayerCharacter.generated.h already included, missing '#pragma once' in MyPlayerCharacter.h"
#endif
#define PATHFINDING_MyPlayerCharacter_generated_h

#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_RPC_WRAPPERS
#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMyPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerCharacter)


#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public:


#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerCharacter(AMyPlayerCharacter&&); \
	NO_API AMyPlayerCharacter(const AMyPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerCharacter)


#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_9_PROLOG
#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_RPC_WRAPPERS \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_INCLASS \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class AMyPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DecisionTrees_Source_PathFinding_Public_MyPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
