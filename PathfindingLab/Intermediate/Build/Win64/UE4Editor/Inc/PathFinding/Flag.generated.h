// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDING_Flag_generated_h
#error "Flag.generated.h already included, missing '#pragma once' in Flag.h"
#endif
#define PATHFINDING_Flag_generated_h

#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_RPC_WRAPPERS
#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_EVENT_PARMS
#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_CALLBACK_WRAPPERS
#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlag(); \
	friend struct Z_Construct_UClass_AFlag_Statics; \
public: \
	DECLARE_CLASS(AFlag, ATriggerSphere, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AFlag)


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFlag(); \
	friend struct Z_Construct_UClass_AFlag_Statics; \
public: \
	DECLARE_CLASS(AFlag, ATriggerSphere, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AFlag)


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlag(AFlag&&); \
	NO_API AFlag(const AFlag&); \
public:


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlag(AFlag&&); \
	NO_API AFlag(const AFlag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlag)


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_PRIVATE_PROPERTY_OFFSET
#define PathfindingLab_Source_PathFinding_Public_Flag_h_12_PROLOG \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_EVENT_PARMS


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_CALLBACK_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_INCLASS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_Flag_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_CALLBACK_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_Flag_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class AFlag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_Flag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
