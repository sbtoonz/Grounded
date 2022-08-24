// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterVariantSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterVariantSet() {}
// Cross Module References
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterVariantSet();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FIDSet();
// End Cross Module References
class UScriptStruct* FChatterVariantSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIFLOWCHARTS_API uint32 Get_Z_Construct_UScriptStruct_FChatterVariantSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChatterVariantSet, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ChatterVariantSet"), sizeof(FChatterVariantSet), Get_Z_Construct_UScriptStruct_FChatterVariantSet_Hash());
	}
	return Singleton;
}
template<> OEIFLOWCHARTS_API UScriptStruct* StaticStruct<FChatterVariantSet>()
{
	return FChatterVariantSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChatterVariantSet(FChatterVariantSet::StaticStruct, TEXT("/Script/OEIFlowCharts"), TEXT("ChatterVariantSet"), false, nullptr, nullptr);
static struct FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterVariantSet
{
	FScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterVariantSet()
	{
		UScriptStruct::DeferCppStructOps<FChatterVariantSet>(FName(TEXT("ChatterVariantSet")));
	}
} ScriptStruct_OEIFlowCharts_StaticRegisterNativesFChatterVariantSet;
	struct Z_Construct_UScriptStruct_FChatterVariantSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variants_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Variants_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variants_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Variants;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterVariantSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChatterVariantSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChatterVariantSet>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_LanguageCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterVariantSet" },
		{ "ModuleRelativePath", "Public/ChatterVariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterVariantSet, LanguageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_LanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_LanguageCode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_ValueProp = { "Variants", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FIDSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_Key_KeyProp = { "Variants_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterVariantSet" },
		{ "ModuleRelativePath", "Public/ChatterVariantSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants = { "Variants", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChatterVariantSet, Variants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChatterVariantSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_LanguageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChatterVariantSet_Statics::NewProp_Variants,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChatterVariantSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
		nullptr,
		&NewStructOps,
		"ChatterVariantSet",
		sizeof(FChatterVariantSet),
		alignof(FChatterVariantSet),
		Z_Construct_UScriptStruct_FChatterVariantSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChatterVariantSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChatterVariantSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChatterVariantSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChatterVariantSet"), sizeof(FChatterVariantSet), Get_Z_Construct_UScriptStruct_FChatterVariantSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChatterVariantSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChatterVariantSet_Hash() { return 1192867680U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
