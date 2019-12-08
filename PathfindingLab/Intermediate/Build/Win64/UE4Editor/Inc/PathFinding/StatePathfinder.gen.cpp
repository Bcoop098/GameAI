// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathFinding/Public/StatePathfinder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatePathfinder() {}
// Cross Module References
	PATHFINDING_API UEnum* Z_Construct_UEnum_PathFinding_EState();
	UPackage* Z_Construct_UPackage__Script_PathFinding();
	PATHFINDING_API UClass* Z_Construct_UClass_AStatePathfinder_NoRegister();
	PATHFINDING_API UClass* Z_Construct_UClass_AStatePathfinder();
	PATHFINDING_API UClass* Z_Construct_UClass_APathFindingActor();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_BulletAvoidance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_checkCone();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_checkDistance();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_checkDistanceChase();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_getBasePosition();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_GetLastPatrol();
	PATHFINDING_API UFunction* Z_Construct_UFunction_AStatePathfinder_GetPatrol();
	PATHFINDING_API UClass* Z_Construct_UClass_UStatePrimative_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PathFinding_EState, Z_Construct_UPackage__Script_PathFinding(), TEXT("EState"));
		}
		return Singleton;
	}
	template<> PATHFINDING_API UEnum* StaticEnum<EState>()
	{
		return EState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EState(EState_StaticEnum, TEXT("/Script/PathFinding"), TEXT("EState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PathFinding_EState_Hash() { return 1857332301U; }
	UEnum* Z_Construct_UEnum_PathFinding_EState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PathFinding();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EState"), 0, Get_Z_Construct_UEnum_PathFinding_EState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EState::ES_Patrol", (int64)EState::ES_Patrol },
				{ "EState::ES_Chase", (int64)EState::ES_Chase },
				{ "EState::ES_ReturnPatrol", (int64)EState::ES_ReturnPatrol },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ES_Chase.DisplayName", "Chase" },
				{ "ES_Patrol.DisplayName", "Patrol" },
				{ "ES_ReturnPatrol.DisplayName", "ReturnPartol" },
				{ "ModuleRelativePath", "Public/StatePathfinder.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PathFinding,
				nullptr,
				"EState",
				"EState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AStatePathfinder::StaticRegisterNativesAStatePathfinder()
	{
		UClass* Class = AStatePathfinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BulletAvoidance", &AStatePathfinder::execBulletAvoidance },
			{ "checkCone", &AStatePathfinder::execcheckCone },
			{ "checkDistance", &AStatePathfinder::execcheckDistance },
			{ "checkDistanceChase", &AStatePathfinder::execcheckDistanceChase },
			{ "getBasePosition", &AStatePathfinder::execgetBasePosition },
			{ "GetLastPatrol", &AStatePathfinder::execGetLastPatrol },
			{ "GetPatrol", &AStatePathfinder::execGetPatrol },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics
	{
		struct StatePathfinder_eventBulletAvoidance_Parms
		{
			FVector bulletPos;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bulletPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventBulletAvoidance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::NewProp_bulletPos = { "bulletPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventBulletAvoidance_Parms, bulletPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::NewProp_bulletPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "BulletAvoidance", sizeof(StatePathfinder_eventBulletAvoidance_Parms), Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_BulletAvoidance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_BulletAvoidance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_checkCone_Statics
	{
		struct StatePathfinder_eventcheckCone_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatePathfinder_eventcheckCone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatePathfinder_eventcheckCone_Parms), &Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckCone_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckCone_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "checkCone", sizeof(StatePathfinder_eventcheckCone_Parms), Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_checkCone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_checkCone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics
	{
		struct StatePathfinder_eventcheckDistance_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatePathfinder_eventcheckDistance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatePathfinder_eventcheckDistance_Parms), &Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckDistance_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckDistance_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "checkDistance", sizeof(StatePathfinder_eventcheckDistance_Parms), Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_checkDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_checkDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics
	{
		struct StatePathfinder_eventcheckDistanceChase_Parms
		{
			FVector actorPos;
			FVector playerPos;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_playerPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actorPos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatePathfinder_eventcheckDistanceChase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatePathfinder_eventcheckDistanceChase_Parms), &Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_playerPos = { "playerPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckDistanceChase_Parms, playerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_actorPos = { "actorPos", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventcheckDistanceChase_Parms, actorPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_playerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::NewProp_actorPos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "checkDistanceChase", sizeof(StatePathfinder_eventcheckDistanceChase_Parms), Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_checkDistanceChase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_checkDistanceChase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics
	{
		struct StatePathfinder_eventgetBasePosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventgetBasePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "getBasePosition", sizeof(StatePathfinder_eventgetBasePosition_Parms), Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_getBasePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_getBasePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics
	{
		struct StatePathfinder_eventGetLastPatrol_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventGetLastPatrol_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "GetLastPatrol", sizeof(StatePathfinder_eventGetLastPatrol_Parms), Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_GetLastPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_GetLastPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics
	{
		struct StatePathfinder_eventGetPatrol_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatePathfinder_eventGetPatrol_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStatePathfinder, nullptr, "GetPatrol", sizeof(StatePathfinder_eventGetPatrol_Parms), Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStatePathfinder_GetPatrol()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AStatePathfinder_GetPatrol_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AStatePathfinder_NoRegister()
	{
		return AStatePathfinder::StaticClass();
	}
	struct Z_Construct_UClass_AStatePathfinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceToDetectChase_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distanceToDetectChase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distanceToDetect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distanceToDetect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_detectionCone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_detectionCone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rad_MetaData[];
#endif
		static void NewProp_rad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_rad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cone_MetaData[];
#endif
		static void NewProp_cone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_cone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_stateObjects;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stateObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statesForSeeker_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_statesForSeeker;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_statesForSeeker_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_escapeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_escapeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bulletPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastPatrolPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_lastPatrolPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patrolRoute_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patrolRoute;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_patrolRoute_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletAvoidRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bulletAvoidRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_avoidanceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_avoidanceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sepStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sepStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_temp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_temp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_temp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_beenShotAt_MetaData[];
#endif
		static void NewProp_beenShotAt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_beenShotAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flagPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flagPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_targetOfPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStatePathfinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APathFindingActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PathFinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStatePathfinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStatePathfinder_BulletAvoidance, "BulletAvoidance" }, // 3160009257
		{ &Z_Construct_UFunction_AStatePathfinder_checkCone, "checkCone" }, // 3649636018
		{ &Z_Construct_UFunction_AStatePathfinder_checkDistance, "checkDistance" }, // 142003607
		{ &Z_Construct_UFunction_AStatePathfinder_checkDistanceChase, "checkDistanceChase" }, // 3034434625
		{ &Z_Construct_UFunction_AStatePathfinder_getBasePosition, "getBasePosition" }, // 1150694827
		{ &Z_Construct_UFunction_AStatePathfinder_GetLastPatrol, "GetLastPatrol" }, // 3383039346
		{ &Z_Construct_UFunction_AStatePathfinder_GetPatrol, "GetPatrol" }, // 37427671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatePathfinder.h" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetectChase_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetectChase = { "distanceToDetectChase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, distanceToDetectChase), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetectChase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetectChase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetect_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetect = { "distanceToDetect", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, distanceToDetect), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetect_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_detectionCone_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_detectionCone = { "detectionCone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, detectionCone), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_detectionCone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_detectionCone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	void Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad_SetBit(void* Obj)
	{
		((AStatePathfinder*)Obj)->rad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad = { "rad", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatePathfinder), &Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	void Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone_SetBit(void* Obj)
	{
		((AStatePathfinder*)Obj)->cone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone = { "cone", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatePathfinder), &Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, currentState), Z_Construct_UEnum_PathFinding_EState, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects = { "stateObjects", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, stateObjects), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects_Inner = { "stateObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatePrimative_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker = { "statesForSeeker", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, statesForSeeker), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker_Inner = { "statesForSeeker", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatePrimative_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_escapeTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_escapeTime = { "escapeTime", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, escapeTime), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_escapeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_escapeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletPos_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletPos = { "bulletPos", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, bulletPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_lastPatrolPoint_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_lastPatrolPoint = { "lastPatrolPoint", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, lastPatrolPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_lastPatrolPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_lastPatrolPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, patrolRoute), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute_Inner = { "patrolRoute", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point4_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point4 = { "Point4", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, Point4), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point4_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point3_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point3 = { "Point3", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, Point3), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point3_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point2_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, Point2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point1_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, Point1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point1_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletAvoidRadius_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletAvoidRadius = { "bulletAvoidRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, bulletAvoidRadius), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletAvoidRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletAvoidRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_avoidanceRadius_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_avoidanceRadius = { "avoidanceRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, avoidanceRadius), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_avoidanceRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_avoidanceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_sepStrength_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_sepStrength = { "sepStrength", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, sepStrength), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_sepStrength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_sepStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp = { "temp", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, temp), METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp_Inner = { "temp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	void Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt_SetBit(void* Obj)
	{
		((AStatePathfinder*)Obj)->beenShotAt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt = { "beenShotAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AStatePathfinder), &Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_flagPos_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_flagPos = { "flagPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, flagPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_flagPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_flagPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStatePathfinder_Statics::NewProp_targetOfPlayer_MetaData[] = {
		{ "Category", "StatePathfinder" },
		{ "ModuleRelativePath", "Public/StatePathfinder.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStatePathfinder_Statics::NewProp_targetOfPlayer = { "targetOfPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStatePathfinder, targetOfPlayer), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_targetOfPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::NewProp_targetOfPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStatePathfinder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetectChase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_distanceToDetect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_detectionCone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_rad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_cone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_currentState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_stateObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_statesForSeeker_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_escapeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_lastPatrolPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_patrolRoute_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_Point1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_bulletAvoidRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_avoidanceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_sepStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_temp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_beenShotAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_flagPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStatePathfinder_Statics::NewProp_targetOfPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStatePathfinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStatePathfinder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStatePathfinder_Statics::ClassParams = {
		&AStatePathfinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStatePathfinder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStatePathfinder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStatePathfinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStatePathfinder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStatePathfinder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStatePathfinder, 1434951946);
	template<> PATHFINDING_API UClass* StaticClass<AStatePathfinder>()
	{
		return AStatePathfinder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStatePathfinder(Z_Construct_UClass_AStatePathfinder, &AStatePathfinder::StaticClass, TEXT("/Script/PathFinding"), TEXT("AStatePathfinder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStatePathfinder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
