// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIEditorBookmarksFolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIEditorBookmarksFolder() {}
// Cross Module References
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmark();
// End Cross Module References
class UScriptStruct* FOEIEditorBookmarksFolder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIBOOKMARKS_API uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder, Z_Construct_UPackage__Script_OEIBookmarks(), TEXT("OEIEditorBookmarksFolder"), sizeof(FOEIEditorBookmarksFolder), Get_Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Hash());
	}
	return Singleton;
}
template<> OEIBOOKMARKS_API UScriptStruct* StaticStruct<FOEIEditorBookmarksFolder>()
{
	return FOEIEditorBookmarksFolder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIEditorBookmarksFolder(FOEIEditorBookmarksFolder::StaticStruct, TEXT("/Script/OEIBookmarks"), TEXT("OEIEditorBookmarksFolder"), false, nullptr, nullptr);
static struct FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarksFolder
{
	FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarksFolder()
	{
		UScriptStruct::DeferCppStructOps<FOEIEditorBookmarksFolder>(FName(TEXT("OEIEditorBookmarksFolder")));
	}
} ScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarksFolder;
	struct Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpen_MetaData[];
#endif
		static void NewProp_IsOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpen;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bookmarks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bookmarks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bookmarks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarksFolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIEditorBookmarksFolder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_FolderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmarksFolder" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarksFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmarksFolder, FolderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_FolderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmarksFolder" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarksFolder.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen_SetBit(void* Obj)
	{
		((FOEIEditorBookmarksFolder*)Obj)->IsOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen = { "IsOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOEIEditorBookmarksFolder), &Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks_Inner = { "Bookmarks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOEIEditorBookmark, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmarksFolder" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarksFolder.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks = { "Bookmarks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmarksFolder, Bookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_FolderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_IsOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::NewProp_Bookmarks,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
		nullptr,
		&NewStructOps,
		"OEIEditorBookmarksFolder",
		sizeof(FOEIEditorBookmarksFolder),
		alignof(FOEIEditorBookmarksFolder),
		Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIBookmarks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIEditorBookmarksFolder"), sizeof(FOEIEditorBookmarksFolder), Get_Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder_Hash() { return 3811724799U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
