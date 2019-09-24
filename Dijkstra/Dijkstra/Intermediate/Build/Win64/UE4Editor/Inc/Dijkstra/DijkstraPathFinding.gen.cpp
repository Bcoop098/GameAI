// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dijkstra/DijkstraPathFinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDijkstraPathFinding() {}
// Cross Module References
	DIJKSTRA_API UClass* Z_Construct_UClass_UDijkstraPathFinding_NoRegister();
	DIJKSTRA_API UClass* Z_Construct_UClass_UDijkstraPathFinding();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Dijkstra();
// End Cross Module References
	void UDijkstraPathFinding::StaticRegisterNativesUDijkstraPathFinding()
	{
	}
	UClass* Z_Construct_UClass_UDijkstraPathFinding_NoRegister()
	{
		return UDijkstraPathFinding::StaticClass();
	}
	struct Z_Construct_UClass_UDijkstraPathFinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDijkstraPathFinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Dijkstra,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDijkstraPathFinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DijkstraPathFinding.h" },
		{ "ModuleRelativePath", "DijkstraPathFinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDijkstraPathFinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDijkstraPathFinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDijkstraPathFinding_Statics::ClassParams = {
		&UDijkstraPathFinding::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDijkstraPathFinding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDijkstraPathFinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDijkstraPathFinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDijkstraPathFinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDijkstraPathFinding, 4174612652);
	template<> DIJKSTRA_API UClass* StaticClass<UDijkstraPathFinding>()
	{
		return UDijkstraPathFinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDijkstraPathFinding(Z_Construct_UClass_UDijkstraPathFinding, &UDijkstraPathFinding::StaticClass, TEXT("/Script/Dijkstra"), TEXT("UDijkstraPathFinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDijkstraPathFinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
