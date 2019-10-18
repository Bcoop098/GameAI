// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/MyPathBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPathBuilder() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_UMyPathBuilder_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_UMyPathBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UFunction* Z_Construct_UFunction_UMyPathBuilder_getInstance();
// End Cross Module References
	void UMyPathBuilder::StaticRegisterNativesUMyPathBuilder()
	{
		UClass* Class = UMyPathBuilder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getInstance", &UMyPathBuilder::execgetInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics
	{
		struct MyPathBuilder_eventgetInstance_Parms
		{
			UMyPathBuilder* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilder_eventgetInstance_Parms, ReturnValue), Z_Construct_UClass_UMyPathBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "MyPathBuilder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPathBuilder, nullptr, "getInstance", sizeof(MyPathBuilder_eventgetInstance_Parms), Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPathBuilder_getInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPathBuilder_getInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyPathBuilder_NoRegister()
	{
		return UMyPathBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMyPathBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPathBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyPathBuilder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPathBuilder_getInstance, "getInstance" }, // 2257175130
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPathBuilder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyPathBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyPathBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPathBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPathBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyPathBuilder_Statics::ClassParams = {
		&UMyPathBuilder::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPathBuilder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyPathBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPathBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyPathBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyPathBuilder, 397704270);
	template<> PATHFINDING_API UClass* StaticClass<UMyPathBuilder>()
	{
		return UMyPathBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPathBuilder(Z_Construct_UClass_UMyPathBuilder, &UMyPathBuilder::StaticClass, TEXT("/Script/PathFinding"), TEXT("UMyPathBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPathBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
