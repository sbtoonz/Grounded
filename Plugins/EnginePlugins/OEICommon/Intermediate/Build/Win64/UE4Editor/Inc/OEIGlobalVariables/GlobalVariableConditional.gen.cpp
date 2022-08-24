// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/GlobalVariableConditional.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalVariableConditional() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EComparisonOperator();
// End Cross Module References
class UScriptStruct* FGlobalVariableConditional::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIGLOBALVARIABLES_API uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableConditional_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalVariableConditional, Z_Construct_UPackage__Script_OEIGlobalVariables(), TEXT("GlobalVariableConditional"), sizeof(FGlobalVariableConditional), Get_Z_Construct_UScriptStruct_FGlobalVariableConditional_Hash());
	}
	return Singleton;
}
template<> OEIGLOBALVARIABLES_API UScriptStruct* StaticStruct<FGlobalVariableConditional>()
{
	return FGlobalVariableConditional::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGlobalVariableConditional(FGlobalVariableConditional::StaticStruct, TEXT("/Script/OEIGlobalVariables"), TEXT("GlobalVariableConditional"), false, nullptr, nullptr);
static struct FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableConditional
{
	FScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableConditional()
	{
		UScriptStruct::DeferCppStructOps<FGlobalVariableConditional>(FName(TEXT("GlobalVariableConditional")));
	}
} ScriptStruct_OEIGlobalVariables_StaticRegisterNativesFGlobalVariableConditional;
	struct Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalVariableValueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalVariableValueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultReturnValue_MetaData[];
#endif
		static void NewProp_bDefaultReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalVariableConditional>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableConditional" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableConditional, ID), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableConditional" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableConditional, Operator), Z_Construct_UEnum_OEICommon_EComparisonOperator, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_VariableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableConditional" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_VariableValue = { "VariableValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableConditional, VariableValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_VariableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_VariableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ExternalVariableValueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableConditional" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ExternalVariableValueID = { "ExternalVariableValueID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGlobalVariableConditional, ExternalVariableValueID), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ExternalVariableValueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ExternalVariableValueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GlobalVariableConditional" },
		{ "ModuleRelativePath", "Public/GlobalVariableConditional.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue_SetBit(void* Obj)
	{
		((FGlobalVariableConditional*)Obj)->bDefaultReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue = { "bDefaultReturnValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGlobalVariableConditional), &Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_Operator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_VariableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_ExternalVariableValueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::NewProp_bDefaultReturnValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
		nullptr,
		&NewStructOps,
		"GlobalVariableConditional",
		sizeof(FGlobalVariableConditional),
		alignof(FGlobalVariableConditional),
		Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableConditional()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableConditional_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIGlobalVariables();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GlobalVariableConditional"), sizeof(FGlobalVariableConditional), Get_Z_Construct_UScriptStruct_FGlobalVariableConditional_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGlobalVariableConditional_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGlobalVariableConditional_Hash() { return 3531281222U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
