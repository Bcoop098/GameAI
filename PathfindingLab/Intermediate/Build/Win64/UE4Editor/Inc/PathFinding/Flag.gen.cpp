// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/Flag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlag() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_AFlag_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_AFlag();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerSphere();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AFlag_resetFlag();
// End Cross Module References
	static FName NAME_AFlag_resetFlag = FName(TEXT("resetFlag"));
	void AFlag::resetFlag()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFlag_resetFlag),NULL);
	}
	void AFlag::StaticRegisterNativesAFlag()
	{
	}
	struct Z_Construct_UFunction_AFlag_resetFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFlag_resetFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Flag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlag_resetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlag, nullptr, "resetFlag", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFlag_resetFlag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFlag_resetFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFlag_resetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFlag_resetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlag_NoRegister()
	{
		return AFlag::StaticClass();
	}
	struct Z_Construct_UClass_AFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerSphere,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFlag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlag_resetFlag, "resetFlag" }, // 969625306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Flag.h" },
		{ "ModuleRelativePath", "Public/Flag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlag_Statics::ClassParams = {
		&AFlag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlag, 1868917320);
	template<> PATHFINDING_API UClass* StaticClass<AFlag>()
	{
		return AFlag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlag(Z_Construct_UClass_AFlag, &AFlag::StaticClass, TEXT("/Script/PathFinding"), TEXT("AFlag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
