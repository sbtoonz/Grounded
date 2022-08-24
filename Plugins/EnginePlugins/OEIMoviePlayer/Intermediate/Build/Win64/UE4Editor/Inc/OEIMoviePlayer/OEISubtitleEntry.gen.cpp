// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEISubtitleEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEISubtitleEntry() {}
// Cross Module References
	OEIMOVIEPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FOEISubtitleEntry();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
	OEIMOVIEPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIMiniTimeSpan();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FLocString();
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EOEIGender();
// End Cross Module References
class UScriptStruct* FOEISubtitleEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIMOVIEPLAYER_API uint32 Get_Z_Construct_UScriptStruct_FOEISubtitleEntry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEISubtitleEntry, Z_Construct_UPackage__Script_OEIMoviePlayer(), TEXT("OEISubtitleEntry"), sizeof(FOEISubtitleEntry), Get_Z_Construct_UScriptStruct_FOEISubtitleEntry_Hash());
	}
	return Singleton;
}
template<> OEIMOVIEPLAYER_API UScriptStruct* StaticStruct<FOEISubtitleEntry>()
{
	return FOEISubtitleEntry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEISubtitleEntry(FOEISubtitleEntry::StaticStruct, TEXT("/Script/OEIMoviePlayer"), TEXT("OEISubtitleEntry"), false, nullptr, nullptr);
static struct FScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEISubtitleEntry
{
	FScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEISubtitleEntry()
	{
		UScriptStruct::DeferCppStructOps<FOEISubtitleEntry>(FName(TEXT("OEISubtitleEntry")));
	}
} ScriptStruct_OEIMoviePlayer_StaticRegisterNativesFOEISubtitleEntry;
	struct Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NameString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseConversationTable_MetaData[];
#endif
		static void NewProp_UseConversationTable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseConversationTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitleStringID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitleStringID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEISubtitleEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_DebugName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, StartTime), Z_Construct_UScriptStruct_FOEIMiniTimeSpan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, EndTime), Z_Construct_UScriptStruct_FOEIMiniTimeSpan, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_NameString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_NameString = { "NameString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, NameString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_NameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_NameString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable_SetBit(void* Obj)
	{
		((FOEISubtitleEntry*)Obj)->UseConversationTable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable = { "UseConversationTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOEISubtitleEntry), &Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_BodyString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_BodyString = { "BodyString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, BodyString), Z_Construct_UScriptStruct_FLocString, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_BodyString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_BodyString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_SubtitleStringID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_SubtitleStringID = { "SubtitleStringID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, SubtitleStringID), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_SubtitleStringID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_SubtitleStringID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEISubtitleEntry" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEISubtitleEntry, Gender), Z_Construct_UEnum_OEICommon_EOEIGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_DebugName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_NameString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_UseConversationTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_BodyString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_SubtitleStringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::NewProp_Gender,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
		nullptr,
		&NewStructOps,
		"OEISubtitleEntry",
		sizeof(FOEISubtitleEntry),
		alignof(FOEISubtitleEntry),
		Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEISubtitleEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEISubtitleEntry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIMoviePlayer();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEISubtitleEntry"), sizeof(FOEISubtitleEntry), Get_Z_Construct_UScriptStruct_FOEISubtitleEntry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEISubtitleEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEISubtitleEntry_Hash() { return 2801474954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
