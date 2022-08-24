// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/StringTableBundleSets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringTableBundleSets() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FStringTableBundleSets();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UClass* Z_Construct_UClass_UStringTableBundleSet_NoRegister();
// End Cross Module References
class UScriptStruct* FStringTableBundleSets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FStringTableBundleSets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringTableBundleSets, Z_Construct_UPackage__Script_OEIText(), TEXT("StringTableBundleSets"), sizeof(FStringTableBundleSets), Get_Z_Construct_UScriptStruct_FStringTableBundleSets_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FStringTableBundleSets>()
{
	return FStringTableBundleSets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStringTableBundleSets(FStringTableBundleSets::StaticStruct, TEXT("/Script/OEIText"), TEXT("StringTableBundleSets"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFStringTableBundleSets
{
	FScriptStruct_OEIText_StaticRegisterNativesFStringTableBundleSets()
	{
		UScriptStruct::DeferCppStructOps<FStringTableBundleSets>(FName(TEXT("StringTableBundleSets")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFStringTableBundleSets;
	struct Z_Construct_UScriptStruct_FStringTableBundleSets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryRegionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrimaryRegionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFallbackForLanguage_MetaData[];
#endif
		static void NewProp_bIsFallbackForLanguage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFallbackForLanguage;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FallbackRegionCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallbackRegionCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FallbackRegionCodes;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StringTableBundleSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableBundleSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringTableBundleSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringTableBundleSets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_LanguageCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSets" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_LanguageCode = { "LanguageCode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStringTableBundleSets, LanguageCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_LanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_LanguageCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_PrimaryRegionCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSets" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_PrimaryRegionCode = { "PrimaryRegionCode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStringTableBundleSets, PrimaryRegionCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_PrimaryRegionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_PrimaryRegionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSets" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage_SetBit(void* Obj)
	{
		((FStringTableBundleSets*)Obj)->bIsFallbackForLanguage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage = { "bIsFallbackForLanguage", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStringTableBundleSets), &Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes_Inner = { "FallbackRegionCodes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSets" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes = { "FallbackRegionCodes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStringTableBundleSets, FallbackRegionCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets_Inner = { "StringTableBundleSets", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStringTableBundleSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StringTableBundleSets" },
		{ "ModuleRelativePath", "Public/StringTableBundleSets.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets = { "StringTableBundleSets", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStringTableBundleSets, StringTableBundleSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_LanguageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_PrimaryRegionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_bIsFallbackForLanguage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_FallbackRegionCodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::NewProp_StringTableBundleSets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"StringTableBundleSets",
		sizeof(FStringTableBundleSets),
		alignof(FStringTableBundleSets),
		Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringTableBundleSets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStringTableBundleSets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StringTableBundleSets"), sizeof(FStringTableBundleSets), Get_Z_Construct_UScriptStruct_FStringTableBundleSets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStringTableBundleSets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStringTableBundleSets_Hash() { return 4200684342U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
