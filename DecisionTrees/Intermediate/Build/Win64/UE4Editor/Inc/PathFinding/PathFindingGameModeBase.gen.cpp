// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/PathFindingGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFindingGameModeBase() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_APathFindingGameModeBase_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_APathFindingGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void APathFindingGameModeBase::StaticRegisterNativesAPathFindingGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APathFindingGameModeBase_NoRegister()
	{
		return APathFindingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APathFindingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathFindingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PathFindingGameModeBase.h" },
		{ "ModuleRelativePath", "PathFindingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathFindingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathFindingGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathFindingGameModeBase_Statics::ClassParams = {
		&APathFindingGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_APathFindingGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APathFindingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathFindingGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathFindingGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathFindingGameModeBase, 2490951836);
	template<> PATHFINDING_API UClass* StaticClass<APathFindingGameModeBase>()
	{
		return APathFindingGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathFindingGameModeBase(Z_Construct_UClass_APathFindingGameModeBase, &APathFindingGameModeBase::StaticClass, TEXT("/Script/PathFinding"), TEXT("APathFindingGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathFindingGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
