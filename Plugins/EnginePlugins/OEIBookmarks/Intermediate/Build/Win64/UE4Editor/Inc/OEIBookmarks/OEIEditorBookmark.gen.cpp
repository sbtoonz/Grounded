// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIEditorBookmark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIEditorBookmark() {}
// Cross Module References
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmark();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FOEIEditorBookmark::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIBOOKMARKS_API uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmark_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIEditorBookmark, Z_Construct_UPackage__Script_OEIBookmarks(), TEXT("OEIEditorBookmark"), sizeof(FOEIEditorBookmark), Get_Z_Construct_UScriptStruct_FOEIEditorBookmark_Hash());
	}
	return Singleton;
}
template<> OEIBOOKMARKS_API UScriptStruct* StaticStruct<FOEIEditorBookmark>()
{
	return FOEIEditorBookmark::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIEditorBookmark(FOEIEditorBookmark::StaticStruct, TEXT("/Script/OEIBookmarks"), TEXT("OEIEditorBookmark"), false, nullptr, nullptr);
static struct FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmark
{
	FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmark()
	{
		UScriptStruct::DeferCppStructOps<FOEIEditorBookmark>(FName(TEXT("OEIEditorBookmark")));
	}
} ScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmark;
	struct Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmark.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIEditorBookmark>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmark" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmark.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmark, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_MapName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmark" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmark.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmark, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmark" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmark.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmark, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmark" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmark.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmark, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
		nullptr,
		&NewStructOps,
		"OEIEditorBookmark",
		sizeof(FOEIEditorBookmark),
		alignof(FOEIEditorBookmark),
		Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmark()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmark_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIBookmarks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIEditorBookmark"), sizeof(FOEIEditorBookmark), Get_Z_Construct_UScriptStruct_FOEIEditorBookmark_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIEditorBookmark_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmark_Hash() { return 3018675272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
