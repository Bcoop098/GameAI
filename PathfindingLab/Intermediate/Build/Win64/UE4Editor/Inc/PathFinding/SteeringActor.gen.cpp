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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASteeringActor::StaticRegisterNativesASteeringActor()
	{
	}
	UClass* Z_Construct_UClass_ASteeringActor_NoRegister()
	{
		return ASteeringActor::StaticClass();
	}
	struct Z_Construct_UClass_ASteeringActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasFlag_MetaData[];
#endif
		static void NewProp_hasFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasFlag;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASteeringActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteeringActor.h" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag_MetaData[] = {
		{ "Category", "Steering" },
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	void Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag_SetBit(void* Obj)
	{
		((ASteeringActor*)Obj)->hasFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag = { "hasFlag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASteeringActor), &Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASteeringActor_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "SteeringActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASteeringActor_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASteeringActor, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASteeringActor_Statics::NewProp_Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASteeringActor_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASteeringActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_hasFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_TargetPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekDecelerationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SeekStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_DragForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_SteeringVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASteeringActor_Statics::NewProp_Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASteeringActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteeringActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASteeringActor_Statics::ClassParams = {
		&ASteeringActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASteeringActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ASteeringActor, 1540382683);
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
