// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dijkstra/DijkstraGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDijkstraGameModeBase() {}
// Cross Module References
	DIJKSTRA_API UClass* Z_Construct_UClass_ADijkstraGameModeBase_NoRegister();
	DIJKSTRA_API UClass* Z_Construct_UClass_ADijkstraGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dijkstra();
// End Cross Module References
	void ADijkstraGameModeBase::StaticRegisterNativesADijkstraGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADijkstraGameModeBase_NoRegister()
	{
		return ADijkstraGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADijkstraGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADijkstraGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dijkstra,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADijkstraGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DijkstraGameModeBase.h" },
		{ "ModuleRelativePath", "DijkstraGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADijkstraGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADijkstraGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADijkstraGameModeBase_Statics::ClassParams = {
		&ADijkstraGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADijkstraGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADijkstraGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADijkstraGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADijkstraGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADijkstraGameModeBase, 4062068185);
	template<> DIJKSTRA_API UClass* StaticClass<ADijkstraGameModeBase>()
	{
		return ADijkstraGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADijkstraGameModeBase(Z_Construct_UClass_ADijkstraGameModeBase, &ADijkstraGameModeBase::StaticClass, TEXT("/Script/Dijkstra"), TEXT("ADijkstraGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADijkstraGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
