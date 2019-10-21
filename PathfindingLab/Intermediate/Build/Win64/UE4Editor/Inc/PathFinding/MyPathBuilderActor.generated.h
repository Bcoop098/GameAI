// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef PATHFINDING_MyPathBuilderActor_generated_h
#error "MyPathBuilderActor.generated.h already included, missing '#pragma once' in MyPathBuilderActor.h"
#endif
#define PATHFINDING_MyPathBuilderActor_generated_h

#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execcheckPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->checkPoint(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchangeGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->changeGrid(Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_postion); \
		P_GET_STRUCT(FVector2D,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->getPath(Z_Param_postion,Z_Param_target); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcheckPoint) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->checkPoint(Z_Param_target); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execchangeGrid) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_num); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->changeGrid(Z_Param_num); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetPath) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_postion); \
		P_GET_STRUCT(FVector2D,Z_Param_target); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FVector>*)Z_Param__Result=P_THIS->getPath(Z_Param_postion,Z_Param_target); \
		P_NATIVE_END; \
	}


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPathBuilderActor(); \
	friend struct Z_Construct_UClass_AMyPathBuilderActor_Statics; \
public: \
	DECLARE_CLASS(AMyPathBuilderActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AMyPathBuilderActor)


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyPathBuilderActor(); \
	friend struct Z_Construct_UClass_AMyPathBuilderActor_Statics; \
public: \
	DECLARE_CLASS(AMyPathBuilderActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PathFinding"), NO_API) \
	DECLARE_SERIALIZER(AMyPathBuilderActor)


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPathBuilderActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPathBuilderActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPathBuilderActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPathBuilderActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPathBuilderActor(AMyPathBuilderActor&&); \
	NO_API AMyPathBuilderActor(const AMyPathBuilderActor&); \
public:


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPathBuilderActor(AMyPathBuilderActor&&); \
	NO_API AMyPathBuilderActor(const AMyPathBuilderActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPathBuilderActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPathBuilderActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPathBuilderActor)


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_PRIVATE_PROPERTY_OFFSET
#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_10_PROLOG
#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_RPC_WRAPPERS \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_INCLASS \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_INCLASS_NO_PURE_DECLS \
	PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDING_API UClass* StaticClass<class AMyPathBuilderActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PathfindingLab_Source_PathFinding_Public_MyPathBuilderActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
