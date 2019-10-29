// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/MyPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerCharacter() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_AMyPlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void AMyPlayerCharacter::StaticRegisterNativesAMyPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerCharacter_NoRegister()
	{
		return AMyPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/MyPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerCharacter_Statics::ClassParams = {
		&AMyPlayerCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerCharacter, 2619407762);
	template<> PATHFINDING_API UClass* StaticClass<AMyPlayerCharacter>()
	{
		return AMyPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerCharacter(Z_Construct_UClass_AMyPlayerCharacter, &AMyPlayerCharacter::StaticClass, TEXT("/Script/PathFinding"), TEXT("AMyPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
