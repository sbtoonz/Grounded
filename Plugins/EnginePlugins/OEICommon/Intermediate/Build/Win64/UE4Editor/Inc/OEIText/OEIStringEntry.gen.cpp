// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/OEIStringEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIStringEntry() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FOEIStringEntry();
	UPackage* Z_Construct_UPackage__Script_OEIText();
// End Cross Module References
class UScriptStruct* FOEIStringEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FOEIStringEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIStringEntry, Z_Construct_UPackage__Script_OEIText(), TEXT("OEIStringEntry"), sizeof(FOEIStringEntry), Get_Z_Construct_UScriptStruct_FOEIStringEntry_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FOEIStringEntry>()
{
	return FOEIStringEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIStringEntry(FOEIStringEntry::StaticStruct, TEXT("/Script/OEIText"), TEXT("OEIStringEntry"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFOEIStringEntry
{
	FScriptStruct_OEIText_StaticRegisterNativesFOEIStringEntry()
	{
		UScriptStruct::DeferCppStructOps<FOEIStringEntry>(FName(TEXT("OEIStringEntry")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFOEIStringEntry;
	struct Z_Construct_UScriptStruct_FOEIStringEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FemaleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FemaleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenderNeutralText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GenderNeutralText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIStringEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIStringEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringEntry" },
		{ "ModuleRelativePath", "Public/OEIStringEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringEntry, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_DefaultText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringEntry" },
		{ "ModuleRelativePath", "Public/OEIStringEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_DefaultText = { "DefaultText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringEntry, DefaultText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_DefaultText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_DefaultText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_FemaleText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringEntry" },
		{ "ModuleRelativePath", "Public/OEIStringEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_FemaleText = { "FemaleText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringEntry, FemaleText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_FemaleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_FemaleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_GenderNeutralText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringEntry" },
		{ "ModuleRelativePath", "Public/OEIStringEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_GenderNeutralText = { "GenderNeutralText", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringEntry, GenderNeutralText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_GenderNeutralText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_GenderNeutralText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIStringEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_DefaultText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_FemaleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringEntry_Statics::NewProp_GenderNeutralText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIStringEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"OEIStringEntry",
		sizeof(FOEIStringEntry),
		alignof(FOEIStringEntry),
		Z_Construct_UScriptStruct_FOEIStringEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIStringEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIStringEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIStringEntry"), sizeof(FOEIStringEntry), Get_Z_Construct_UScriptStruct_FOEIStringEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIStringEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIStringEntry_Hash() { return 785573878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
