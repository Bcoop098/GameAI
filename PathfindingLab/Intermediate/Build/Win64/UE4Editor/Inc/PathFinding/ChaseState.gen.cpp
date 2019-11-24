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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_targetTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTargetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxTargetTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseState_Statics::NewProp_targetTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaseState_Statics::NewProp_targetTime = { "targetTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaseState, targetTime), METADATA_PARAMS(Z_Construct_UClass_UChaseState_Statics::NewProp_targetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChaseState_Statics::NewProp_targetTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaseState_Statics::NewProp_maxTargetTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChaseState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UChaseState_Statics::NewProp_maxTargetTime = { "maxTargetTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChaseState, maxTargetTime), METADATA_PARAMS(Z_Construct_UClass_UChaseState_Statics::NewProp_maxTargetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UChaseState_Statics::NewProp_maxTargetTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaseState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaseState_Statics::NewProp_targetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaseState_Statics::NewProp_maxTargetTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaseState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaseState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChaseState_Statics::ClassParams = {
		&UChaseState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaseState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UChaseState_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UChaseState, 4265737414);
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
