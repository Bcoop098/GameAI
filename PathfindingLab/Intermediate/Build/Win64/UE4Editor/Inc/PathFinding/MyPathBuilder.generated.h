// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyPathBuilder;
#ifdef PATHFINDING_MyPathBuilder_generated_h
#error "MyPathBuilder.generated.h already included, missing '#pragma once' in MyPathBuilder.h"
#endif
#define PATHFINDING_MyPathBuilder_generated_h

#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyPathBuilder**)Z_Param__Result=UMyPathBuilder::getInstance(); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMyPathBuilder**)Z_Param__Result=UMyPathBuilder::getInstance(); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPathBuilder(); \
	friend struct Z_Construct_UClass_UMyPathBuilder_Statics; \
public: \
	DECLARE_CLASS(UMyPathBuilder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UMyPathBuilder)


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyPathBuilder(); \
	friend struct Z_Construct_UClass_UMyPathBuilder_Statics; \
public: \
	DECLARE_CLASS(UMyPathBuilder, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(UMyPathBuilder)


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPathBuilder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPathBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPathBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPathBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPathBuilder(UMyPathBuilder&&); \
	NO_API UMyPathBuilder(const UMyPathBuilder&); \
public:


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPathBuilder(UMyPathBuilder&&); \
	NO_API UMyPathBuilder(const UMyPathBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPathBuilder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPathBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyPathBuilder)


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_PRIVATE_PROPERTY_OFFSET
#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_12_PROLOG
#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_INCLASS \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_MyPathBuilder_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class UMyPathBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_MyPathBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
