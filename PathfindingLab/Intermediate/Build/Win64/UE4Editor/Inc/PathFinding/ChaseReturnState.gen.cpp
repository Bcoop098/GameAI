// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/ChaseReturnState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaseReturnState() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_UChaseReturnState_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_UChaseReturnState();
	PATHFINDING_API UClass* Z_Construct_UClass_UStatePrimative();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
// End Cross Module References
	void UChaseReturnState::StaticRegisterNativesUChaseReturnState()
	{
	}
	UClass* Z_Construct_UClass_UChaseReturnState_NoRegister()
	{
		return UChaseReturnState::StaticClass();
	}
	struct Z_Construct_UClass_UChaseReturnState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaseReturnState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatePrimative,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseReturnState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaseReturnState.h" },
		{ "ModuleRelativePath", "Public/ChaseReturnState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaseReturnState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaseReturnState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaseReturnState_Statics::ClassParams = {
		&UChaseReturnState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaseReturnState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UChaseReturnState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaseReturnState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChaseReturnState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChaseReturnState, 3098688921);
	template<> PATHFINDING_API UClass* StaticClass<UChaseReturnState>()
	{
		return UChaseReturnState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChaseReturnState(Z_Construct_UClass_UChaseReturnState, &UChaseReturnState::StaticClass, TEXT("/Script/PathFinding"), TEXT("UChaseReturnState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaseReturnState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
