// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/SteeringActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteeringActor() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_ASteeringActor_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_ASteeringActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UFunction* Z_Construct_UFunction_ASteeringActor_checkCone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHFINDING_API UFunction* Z_Construct_UFunction_ASteeringActor_checkDistance();
	PATHFINDING_API UFunction* Z_Construct_UFunction_ASteeringActor_checkDistanceChase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATHFINDING_API UClass* Z_Construct_UClass_AStatePrimative_NoRegister();
// End Cross Module References
	void ASteeringActor::StaticRegisterNativesASteeringActor()
	{
		UClass* Class = ASteeringActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "checkCone", &ASteeringActor::execcheckCone },
			{ "checkDistance", &ASteeringActor::execcheckDistance },
			{ "checkDistanceChase", &ASteeringActor::execcheckDistanceChase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASteeringActor_checkCone_Statics
	{
		struct SteeringActor_eventcheckCone_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteeringActor_eventcheckCone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteeringActor_eventcheckCone_Parms), &Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckCone_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckCone_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASteeringActor_checkCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkCone_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASteeringActor_checkCone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASteeringActor_checkCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASteeringActor, nullptr, "checkCone", sizeof(SteeringActor_eventcheckCone_Parms), Z_Construct_UFunction_ASteeringActor_checkCone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkCone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASteeringActor_checkCone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkCone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASteeringActor_checkCone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASteeringActor_checkCone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASteeringActor_checkDistance_Statics
	{
		struct SteeringActor_eventcheckDistance_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteeringActor_eventcheckDistance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteeringActor_eventcheckDistance_Parms), &Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckDistance_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckDistance_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASteeringActor, nullptr, "checkDistance", sizeof(SteeringActor_eventcheckDistance_Parms), Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASteeringActor_checkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASteeringActor_checkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics
	{
		struct SteeringActor_eventcheckDistanceChase_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteeringActor_eventcheckDistanceChase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteeringActor_eventcheckDistanceChase_Parms), &Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckDistanceChase_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteeringActor_eventcheckDistanceChase_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASteeringActor, nullptr, "checkDistanceChase", sizeof(SteeringActor_eventcheckDistanceChase_Parms), Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASteeringActor_checkDistanceChase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASteeringActor_checkDistanceChase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASteeringActor_NoRegister()
	{
		return ASteeringActor::StaticClass();
	}
	struct Z_Construct_UClass_ASteeringActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekDecelerationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeekDecelerationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeekStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteeringVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceToDetectChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distanceToDetectChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceToDetect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distanceToDetect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_detectionCone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_detectionCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rad_MetaData[];
#endif
		static void NewProp_rad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cone_MetaData[];
#endif
		static void NewProp_cone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_cone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_currentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statesForSeeker_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_statesForSeeker;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_statesForSeeker_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteeringActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASteeringActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASteeringActor_checkCone, "checkCone" }, // 1510049753
		{ &Z_Construct_UFunction_ASteeringActor_checkDistance, "checkDistance" }, // 567682636
		{ &Z_Construct_UFunction_ASteeringActor_checkDistanceChase, "checkDistanceChase" }, // 4229473396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteeringActor.h" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos = { "TargetPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, TargetPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance_MetaData[] = {
		{ "Category", "Steering" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance = { "SeekDecelerationDistance", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, SeekDecelerationDistance), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength_MetaData[] = {
		{ "Category", "Steering" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength = { "SeekStrength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, SeekStrength), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce_MetaData[] = {
		{ "Category", "Steering" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce = { "DragForce", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, DragForce), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Steering" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity = { "SteeringVelocity", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, SteeringVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetectChase_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetectChase = { "distanceToDetectChase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, distanceToDetectChase), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetectChase_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetectChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetect_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetect = { "distanceToDetect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, distanceToDetect), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_detectionCone_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_detectionCone = { "detectionCone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, detectionCone), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_detectionCone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_detectionCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	void Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad_SetBit(void* Obj)
	{
		((ASteeringActor*)Obj)->rad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad = { "rad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASteeringActor), &Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	void Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone_SetBit(void* Obj)
	{
		((ASteeringActor*)Obj)->cone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone = { "cone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASteeringActor), &Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_currentState_MetaData[] = {
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, currentState), Z_Construct_UClass_AStatePrimative_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_currentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_currentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker_MetaData[] = {
		{ "Category", "SteeringActor" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker = { "statesForSeeker", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, statesForSeeker), METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker_Inner = { "statesForSeeker", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AStatePrimative_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASteeringActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetectChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_distanceToDetect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_detectionCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_rad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_cone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_statesForSeeker_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteeringActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteeringActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteeringActor_Statics::ClassParams = {
		&ASteeringActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASteeringActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASteeringActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASteeringActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASteeringActor, 3864910961);
	template<> PATHFINDING_API UClass* StaticClass<ASteeringActor>()
	{
		return ASteeringActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASteeringActor(Z_Construct_UClass_ASteeringActor, &ASteeringActor::StaticClass, TEXT("/Script/PathFinding"), TEXT("ASteeringActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASteeringActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
