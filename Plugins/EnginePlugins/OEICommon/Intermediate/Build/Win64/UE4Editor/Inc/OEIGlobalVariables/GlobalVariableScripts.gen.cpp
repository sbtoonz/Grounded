// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableScripts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableScripts() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableScripts_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableScripts();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptLibrary();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGlobalVariableScripts::execIncrementGlobalValue)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_IncrementValue);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalVariableScripts::IncrementGlobalValue(Z_Param_Variable,Z_Param_IncrementValue,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalVariableScripts::execRandomizeGlobalValue)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxValue);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalVariableScripts::RandomizeGlobalValue(Z_Param_Variable,Z_Param_MinValue,Z_Param_MaxValue,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalVariableScripts::execRandomizeGlobalValueWithGlobals)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_STRUCT(FGuid,Z_Param_MinValueGlobal);
		P_GET_STRUCT(FGuid,Z_Param_MaxValueGlobal);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalVariableScripts::RandomizeGlobalValueWithGlobals(Z_Param_Variable,Z_Param_MinValueGlobal,Z_Param_MaxValueGlobal,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalVariableScripts::execSetGlobalIfGlobal)
	{
		P_GET_STRUCT(FGuid,Z_Param_ConditionVariable);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConditionValue);
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalVariableScripts::SetGlobalIfGlobal(Z_Param_ConditionVariable,Z_Param_ConditionValue,Z_Param_Variable,Z_Param_Value,Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlobalVariableScripts::execSetGlobalValue)
	{
		P_GET_STRUCT(FGuid,Z_Param_Variable);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlobalVariableScripts::SetGlobalValue(Z_Param_Variable,Z_Param_Value,Z_Param_Instigator);
		P_NATIVE_END;
	}
	void UGlobalVariableScripts::StaticRegisterNativesUGlobalVariableScripts()
	{
		UClass* Class = UGlobalVariableScripts::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementGlobalValue", &UGlobalVariableScripts::execIncrementGlobalValue },
			{ "RandomizeGlobalValue", &UGlobalVariableScripts::execRandomizeGlobalValue },
			{ "RandomizeGlobalValueWithGlobals", &UGlobalVariableScripts::execRandomizeGlobalValueWithGlobals },
			{ "SetGlobalIfGlobal", &UGlobalVariableScripts::execSetGlobalIfGlobal },
			{ "SetGlobalValue", &UGlobalVariableScripts::execSetGlobalValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics
	{
		struct GlobalVariableScripts_eventIncrementGlobalValue_Parms
		{
			FGuid Variable;
			int32 IncrementValue;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IncrementValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventIncrementGlobalValue_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_IncrementValue = { "IncrementValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventIncrementGlobalValue_Parms, IncrementValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventIncrementGlobalValue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_IncrementValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableScripts, nullptr, "IncrementGlobalValue", nullptr, nullptr, sizeof(GlobalVariableScripts_eventIncrementGlobalValue_Parms), Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics
	{
		struct GlobalVariableScripts_eventRandomizeGlobalValue_Parms
		{
			FGuid Variable;
			int32 MinValue;
			int32 MaxValue;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValue_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValue_Parms, MinValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValue_Parms, MaxValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableScripts, nullptr, "RandomizeGlobalValue", nullptr, nullptr, sizeof(GlobalVariableScripts_eventRandomizeGlobalValue_Parms), Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics
	{
		struct GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms
		{
			FGuid Variable;
			FGuid MinValueGlobal;
			FGuid MaxValueGlobal;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinValueGlobal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxValueGlobal;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_MinValueGlobal = { "MinValueGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms, MinValueGlobal), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_MaxValueGlobal = { "MaxValueGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms, MaxValueGlobal), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_MinValueGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_MaxValueGlobal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableScripts, nullptr, "RandomizeGlobalValueWithGlobals", nullptr, nullptr, sizeof(GlobalVariableScripts_eventRandomizeGlobalValueWithGlobals_Parms), Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics
	{
		struct GlobalVariableScripts_eventSetGlobalIfGlobal_Parms
		{
			FGuid ConditionVariable;
			int32 ConditionValue;
			FGuid Variable;
			int32 Value;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionVariable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_ConditionVariable = { "ConditionVariable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms, ConditionVariable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_ConditionValue = { "ConditionValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms, ConditionValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_ConditionVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_ConditionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableScripts, nullptr, "SetGlobalIfGlobal", nullptr, nullptr, sizeof(GlobalVariableScripts_eventSetGlobalIfGlobal_Parms), Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics
	{
		struct GlobalVariableScripts_eventSetGlobalValue_Parms
		{
			FGuid Variable;
			int32 Value;
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalValue_Parms, Variable), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GlobalVariableScripts_eventSetGlobalValue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlobalVariableScripts, nullptr, "SetGlobalValue", nullptr, nullptr, sizeof(GlobalVariableScripts_eventSetGlobalValue_Parms), Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGlobalVariableScripts_NoRegister()
	{
		return UGlobalVariableScripts::StaticClass();
	}
	struct Z_Construct_UClass_UGlobalVariableScripts_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlobalVariableScripts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlobalVariableScripts_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlobalVariableScripts_IncrementGlobalValue, "IncrementGlobalValue" }, // 2924938701
		{ &Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValue, "RandomizeGlobalValue" }, // 3093236048
		{ &Z_Construct_UFunction_UGlobalVariableScripts_RandomizeGlobalValueWithGlobals, "RandomizeGlobalValueWithGlobals" }, // 3195148635
		{ &Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalIfGlobal, "SetGlobalIfGlobal" }, // 2355592231
		{ &Z_Construct_UFunction_UGlobalVariableScripts_SetGlobalValue, "SetGlobalValue" }, // 3478125935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlobalVariableScripts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GlobalVariableScripts.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableScripts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlobalVariableScripts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlobalVariableScripts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGlobalVariableScripts_Statics::ClassParams = {
		&UGlobalVariableScripts::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlobalVariableScripts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlobalVariableScripts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlobalVariableScripts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGlobalVariableScripts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGlobalVariableScripts, 3497778982);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UGlobalVariableScripts>()
	{
		return UGlobalVariableScripts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGlobalVariableScripts(Z_Construct_UClass_UGlobalVariableScripts, &UGlobalVariableScripts::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UGlobalVariableScripts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlobalVariableScripts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
