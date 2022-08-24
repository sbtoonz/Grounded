// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIAchievements/Public/AchievementEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementEntry() {}
// Cross Module References
	OEIACHIEVEMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementEntry();
	UPackage* Z_Construct_UPackage__Script_OEIAchievements();
// End Cross Module References
class UScriptStruct* FAchievementEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIACHIEVEMENTS_API uint32 Get_Z_Construct_UScriptStruct_FAchievementEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementEntry, Z_Construct_UPackage__Script_OEIAchievements(), TEXT("AchievementEntry"), sizeof(FAchievementEntry), Get_Z_Construct_UScriptStruct_FAchievementEntry_Hash());
	}
	return Singleton;
}
template<> OEIACHIEVEMENTS_API UScriptStruct* StaticStruct<FAchievementEntry>()
{
	return FAchievementEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementEntry(FAchievementEntry::StaticStruct, TEXT("/Script/OEIAchievements"), TEXT("AchievementEntry"), false, nullptr, nullptr);
static struct FScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementEntry
{
	FScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementEntry()
	{
		UScriptStruct::DeferCppStructOps<FAchievementEntry>(FName(TEXT("AchievementEntry")));
	}
} ScriptStruct_OEIAchievements_StaticRegisterNativesFAchievementEntry;
	struct Z_Construct_UScriptStruct_FAchievementEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameStringTableID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NameStringTableID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NameStringID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrimaryID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondaryID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_Tag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementEntry" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementEntry, Tag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringTableID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementEntry" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringTableID = { "NameStringTableID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementEntry, NameStringTableID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringTableID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringTableID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementEntry" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringID = { "NameStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementEntry, NameStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_PrimaryID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementEntry" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_PrimaryID = { "PrimaryID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementEntry, PrimaryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_PrimaryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_PrimaryID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_SecondaryID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementEntry" },
		{ "ModuleRelativePath", "Public/AchievementEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_SecondaryID = { "SecondaryID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementEntry, SecondaryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_SecondaryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_SecondaryID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAchievementEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringTableID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_NameStringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_PrimaryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementEntry_Statics::NewProp_SecondaryID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIAchievements,
		nullptr,
		&NewStructOps,
		"AchievementEntry",
		sizeof(FAchievementEntry),
		alignof(FAchievementEntry),
		Z_Construct_UScriptStruct_FAchievementEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIAchievements();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementEntry"), sizeof(FAchievementEntry), Get_Z_Construct_UScriptStruct_FAchievementEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementEntry_Hash() { return 413274586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
