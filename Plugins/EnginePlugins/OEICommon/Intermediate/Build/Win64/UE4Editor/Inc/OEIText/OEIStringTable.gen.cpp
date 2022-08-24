// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/OEIStringTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIStringTable() {}
// Cross Module References
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FOEIStringTable();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEICOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FIDSet();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FOEIStringEntry();
// End Cross Module References
class UScriptStruct* FOEIStringTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEITEXT_API uint32 Get_Z_Construct_UScriptStruct_FOEIStringTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIStringTable, Z_Construct_UPackage__Script_OEIText(), TEXT("OEIStringTable"), sizeof(FOEIStringTable), Get_Z_Construct_UScriptStruct_FOEIStringTable_Hash());
	}
	return Singleton;
}
template<> OEITEXT_API UScriptStruct* StaticStruct<FOEIStringTable>()
{
	return FOEIStringTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIStringTable(FOEIStringTable::StaticStruct, TEXT("/Script/OEIText"), TEXT("OEIStringTable"), false, nullptr, nullptr);
static struct FScriptStruct_OEIText_StaticRegisterNativesFOEIStringTable
{
	FScriptStruct_OEIText_StaticRegisterNativesFOEIStringTable()
	{
		UScriptStruct::DeferCppStructOps<FOEIStringTable>(FName(TEXT("OEIStringTable")));
	}
} ScriptStruct_OEIText_StaticRegisterNativesFOEIStringTable;
	struct Z_Construct_UScriptStruct_FOEIStringTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StringsWithTokens_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringsWithTokens_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_StringsWithTokens;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringsWithFemaleVO_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringsWithFemaleVO_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringsWithFemaleVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringsWithFemaleVO;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringsWithGenderNeutralVO_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringsWithGenderNeutralVO_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringsWithGenderNeutralVO_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringsWithGenderNeutralVO;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Entries_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Entries_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Entries;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIStringTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringTable" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens_ElementProp = { "StringsWithTokens", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringTable" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens = { "StringsWithTokens", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringTable, StringsWithTokens), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_ValueProp = { "StringsWithFemaleVO", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FIDSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_Key_KeyProp = { "StringsWithFemaleVO_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringTable" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO = { "StringsWithFemaleVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringTable, StringsWithFemaleVO), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_ValueProp = { "StringsWithGenderNeutralVO", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FIDSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_Key_KeyProp = { "StringsWithGenderNeutralVO_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringTable" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO = { "StringsWithGenderNeutralVO", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringTable, StringsWithGenderNeutralVO), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_ValueProp = { "Entries", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FOEIStringEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_Key_KeyProp = { "Entries_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringTable" },
		{ "ModuleRelativePath", "Public/OEIStringTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIStringTable, Entries), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIStringTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithTokens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithFemaleVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_StringsWithGenderNeutralVO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIStringTable_Statics::NewProp_Entries,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIStringTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
		nullptr,
		&NewStructOps,
		"OEIStringTable",
		sizeof(FOEIStringTable),
		alignof(FOEIStringTable),
		Z_Construct_UScriptStruct_FOEIStringTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIStringTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIStringTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIStringTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIStringTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIText();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIStringTable"), sizeof(FOEIStringTable), Get_Z_Construct_UScriptStruct_FOEIStringTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIStringTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIStringTable_Hash() { return 2590002827U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
