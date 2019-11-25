// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/MyPathBuilderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPathBuilderActor() {}
// Cross Module References
	PATHFINDING_API UClass* Z_Construct_UClass_AMyPathBuilderActor_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_AMyPathBuilderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_changeGrid();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_checkPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_getPath();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_resetGrid();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AMyPathBuilderActor_setGrid();
// End Cross Module References
	void AMyPathBuilderActor::StaticRegisterNativesAMyPathBuilderActor()
	{
		UClass* Class = AMyPathBuilderActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "changeGrid", &AMyPathBuilderActor::execchangeGrid },
			{ "checkPoint", &AMyPathBuilderActor::execcheckPoint },
			{ "checkPoint2D", &AMyPathBuilderActor::execcheckPoint2D },
			{ "getPath", &AMyPathBuilderActor::execgetPath },
			{ "resetGrid", &AMyPathBuilderActor::execresetGrid },
			{ "setGrid", &AMyPathBuilderActor::execsetGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics
	{
		struct MyPathBuilderActor_eventchangeGrid_Parms
		{
			int32 num;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventchangeGrid_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::NewProp_num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "changeGrid", sizeof(MyPathBuilderActor_eventchangeGrid_Parms), Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_changeGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_changeGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics
	{
		struct MyPathBuilderActor_eventcheckPoint_Parms
		{
			FVector target;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventcheckPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventcheckPoint_Parms, target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "checkPoint", sizeof(MyPathBuilderActor_eventcheckPoint_Parms), Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_checkPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_checkPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics
	{
		struct MyPathBuilderActor_eventcheckPoint2D_Parms
		{
			FVector2D target;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventcheckPoint2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventcheckPoint2D_Parms, target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "checkPoint2D", sizeof(MyPathBuilderActor_eventcheckPoint2D_Parms), Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics
	{
		struct MyPathBuilderActor_eventgetPath_Parms
		{
			FVector postion;
			FVector2D target;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_postion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventgetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventgetPath_Parms, target), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_postion = { "postion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventgetPath_Parms, postion), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::NewProp_postion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "getPath", sizeof(MyPathBuilderActor_eventgetPath_Parms), Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_getPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_getPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "resetGrid", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_resetGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_resetGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics
	{
		struct MyPathBuilderActor_eventsetGrid_Parms
		{
			TArray<FVector2D> listOfWalls;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_listOfWalls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_listOfWalls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_listOfWalls_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls = { "listOfWalls", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPathBuilderActor_eventsetGrid_Parms, listOfWalls), METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls_Inner = { "listOfWalls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::NewProp_listOfWalls_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AStarPath" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPathBuilderActor, nullptr, "setGrid", sizeof(MyPathBuilderActor_eventsetGrid_Parms), Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPathBuilderActor_setGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyPathBuilderActor_setGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyPathBuilderActor_NoRegister()
	{
		return AMyPathBuilderActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyPathBuilderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AstarActive_MetaData[];
#endif
		static void NewProp_AstarActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AstarActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walls_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Walls;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Walls_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPathBuilderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPathBuilderActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPathBuilderActor_changeGrid, "changeGrid" }, // 646305390
		{ &Z_Construct_UFunction_AMyPathBuilderActor_checkPoint, "checkPoint" }, // 736323069
		{ &Z_Construct_UFunction_AMyPathBuilderActor_checkPoint2D, "checkPoint2D" }, // 3456303115
		{ &Z_Construct_UFunction_AMyPathBuilderActor_getPath, "getPath" }, // 1860846237
		{ &Z_Construct_UFunction_AMyPathBuilderActor_resetGrid, "resetGrid" }, // 2646841304
		{ &Z_Construct_UFunction_AMyPathBuilderActor_setGrid, "setGrid" }, // 682646193
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPathBuilderActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyPathBuilderActor.h" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive_MetaData[] = {
		{ "Category", "MyPathBuilderActor" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	void Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive_SetBit(void* Obj)
	{
		((AMyPathBuilderActor*)Obj)->AstarActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive = { "AstarActive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyPathBuilderActor), &Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls_MetaData[] = {
		{ "Category", "MyPathBuilderActor" },
		{ "ModuleRelativePath", "Public/MyPathBuilderActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls = { "Walls", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyPathBuilderActor, Walls), METADATA_PARAMS(Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls_Inner = { "Walls", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPathBuilderActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_AstarActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPathBuilderActor_Statics::NewProp_Walls_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPathBuilderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPathBuilderActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyPathBuilderActor_Statics::ClassParams = {
		&AMyPathBuilderActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPathBuilderActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AMyPathBuilderActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPathBuilderActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyPathBuilderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPathBuilderActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyPathBuilderActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPathBuilderActor, 1212680272);
	template<> PATHFINDING_API UClass* StaticClass<AMyPathBuilderActor>()
	{
		return AMyPathBuilderActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPathBuilderActor(Z_Construct_UClass_AMyPathBuilderActor, &AMyPathBuilderActor::StaticClass, TEXT("/Script/PathFinding"), TEXT("AMyPathBuilderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPathBuilderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
