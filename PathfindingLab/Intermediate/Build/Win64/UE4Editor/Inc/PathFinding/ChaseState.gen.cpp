// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/ChaseState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaseState() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_UChaseState_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_UChaseState();
	PATHFINDING_API UClass* Z_Construct_UClass_UStatePrimative();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void UChaseState::StaticRegisterNativesUChaseState()
	{
	}
	UClass* Z_Construct_UClass_UChaseState_NoRegister()
	{
		return UChaseState::StaticClass();
	}
	struct Z_Construct_UClass_UChaseState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaseState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatePrimative,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaseState.h" },
		{ "ModuleRelativePath", "Public/ChaseState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaseState_Statics::ClassParams = {
		&UChaseState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaseState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaseState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaseState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaseState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaseState, 1018181327);
	template<> PATHFINDING_API UClass* StaticClass<UChaseState>()
	{
		return UChaseState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaseState(Z_Construct_UClass_UChaseState, &UChaseState::StaticClass, TEXT("/Script/PathFinding"), TEXT("UChaseState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaseState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
