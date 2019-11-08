// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/PathFindingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFindingActor() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_APathFindingActor_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_APathFindingActor();
	PATHFINDING_API UClass* Z_Construct_UClass_ASteeringActor();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UFunction* Z_Construct_UFunction_APathFindingActor_AddToPathFollow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHFINDING_API UFunction* Z_Construct_UFunction_APathFindingActor_SetPathToFollow();
// End Cross Module References
	void APathFindingActor::StaticRegisterNativesAPathFindingActor()
	{
		UClass* Class = APathFindingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToPathFollow", &APathFindingActor::execAddToPathFollow },
			{ "SetPathToFollow", &APathFindingActor::execSetPathToFollow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics
	{
		struct PathFindingActor_eventAddToPathFollow_Parms
		{
			TArray<FVector> newPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_newPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath = { "newPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFindingActor_eventAddToPathFollow_Parms, newPath), METADATA_PARAMS(Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath_Inner = { "newPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::NewProp_newPath_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathFindingActor, nullptr, "AddToPathFollow", sizeof(PathFindingActor_eventAddToPathFollow_Parms), Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathFindingActor_AddToPathFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathFindingActor_AddToPathFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics
	{
		struct PathFindingActor_eventSetPathToFollow_Parms
		{
			TArray<FVector> newPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_newPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath = { "newPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PathFindingActor_eventSetPathToFollow_Parms, newPath), METADATA_PARAMS(Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath_Inner = { "newPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::NewProp_newPath_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APathFindingActor, nullptr, "SetPathToFollow", sizeof(PathFindingActor_eventSetPathToFollow_Parms), Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APathFindingActor_SetPathToFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APathFindingActor_SetPathToFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APathFindingActor_NoRegister()
	{
		return APathFindingActor::StaticClass();
	}
	struct Z_Construct_UClass_APathFindingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLooping_MetaData[];
#endif
		static void NewProp_IsLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedNewDestination_MetaData[];
#endif
		static void NewProp_NeedNewDestination_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedNewDestination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReachRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APathFindingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASteeringActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APathFindingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APathFindingActor_AddToPathFollow, "AddToPathFollow" }, // 1866452554
		{ &Z_Construct_UFunction_APathFindingActor_SetPathToFollow, "SetPathToFollow" }, // 3868039958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathFindingActor.h" },
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "PathFindingActor" },
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathFindingActor, Path), METADATA_PARAMS(Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping_MetaData[] = {
		{ "Category", "PathFindingActor" },
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	void Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping_SetBit(void* Obj)
	{
		((APathFindingActor*)Obj)->IsLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping = { "IsLooping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathFindingActor), &Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination_MetaData[] = {
		{ "Category", "PathFindingActor" },
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	void Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination_SetBit(void* Obj)
	{
		((APathFindingActor*)Obj)->NeedNewDestination = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination = { "NeedNewDestination", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APathFindingActor), &Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination_SetBit, METADATA_PARAMS(Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APathFindingActor_Statics::NewProp_ReachRadius_MetaData[] = {
		{ "Category", "PathFindingActor" },
		{ "ModuleRelativePath", "PathFindingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APathFindingActor_Statics::NewProp_ReachRadius = { "ReachRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APathFindingActor, ReachRadius), METADATA_PARAMS(Z_Construct_UClass_APathFindingActor_Statics::NewProp_ReachRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::NewProp_ReachRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APathFindingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathFindingActor_Statics::NewProp_Path_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathFindingActor_Statics::NewProp_IsLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathFindingActor_Statics::NewProp_NeedNewDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APathFindingActor_Statics::NewProp_ReachRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APathFindingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APathFindingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APathFindingActor_Statics::ClassParams = {
		&APathFindingActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APathFindingActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APathFindingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APathFindingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APathFindingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APathFindingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APathFindingActor, 2723975280);
	template<> PATHFINDING_API UClass* StaticClass<APathFindingActor>()
	{
		return APathFindingActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APathFindingActor(Z_Construct_UClass_APathFindingActor, &APathFindingActor::StaticClass, TEXT("/Script/PathFinding"), TEXT("APathFindingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APathFindingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
