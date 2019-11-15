// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/PatrolState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolState() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_APatrolState_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_APatrolState();
	PATHFINDING_API UClass* Z_Construct_UClass_AStatePrimative();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void APatrolState::StaticRegisterNativesAPatrolState()
	{
	}
	UClass* Z_Construct_UClass_APatrolState_NoRegister()
	{
		return APatrolState::StaticClass();
	}
	struct Z_Construct_UClass_APatrolState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStatePrimative,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatrolState.h" },
		{ "ModuleRelativePath", "Public/PatrolState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrolState_Statics::ClassParams = {
		&APatrolState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APatrolState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APatrolState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrolState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrolState, 1599873801);
	template<> PATHFINDING_API UClass* StaticClass<APatrolState>()
	{
		return APatrolState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrolState(Z_Construct_UClass_APatrolState, &APatrolState::StaticClass, TEXT("/Script/PathFinding"), TEXT("APatrolState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
