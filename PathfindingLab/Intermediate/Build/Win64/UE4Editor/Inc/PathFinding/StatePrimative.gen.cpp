// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/StatePrimative.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatePrimative() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_UStatePrimative_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_UStatePrimative();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void UStatePrimative::StaticRegisterNativesUStatePrimative()
	{
	}
	UClass* Z_Construct_UClass_UStatePrimative_NoRegister()
	{
		return UStatePrimative::StaticClass();
	}
	struct Z_Construct_UClass_UStatePrimative_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatePrimative_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatePrimative_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatePrimative.h" },
		{ "ModuleRelativePath", "Public/StatePrimative.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatePrimative_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatePrimative>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatePrimative_Statics::ClassParams = {
		&UStatePrimative::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStatePrimative_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStatePrimative_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatePrimative()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatePrimative_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatePrimative, 3250333574);
	template<> PATHFINDING_API UClass* StaticClass<UStatePrimative>()
	{
		return UStatePrimative::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatePrimative(Z_Construct_UClass_UStatePrimative, &UStatePrimative::StaticClass, TEXT("/Script/PathFinding"), TEXT("UStatePrimative"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatePrimative);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
