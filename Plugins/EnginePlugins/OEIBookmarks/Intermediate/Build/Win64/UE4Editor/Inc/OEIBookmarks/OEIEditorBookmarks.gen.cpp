// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIBookmarks/Public/OEIEditorBookmarks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIEditorBookmarks() {}
// Cross Module References
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarks();
	UPackage* Z_Construct_UPackage__Script_OEIBookmarks();
	OEIBOOKMARKS_API UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder();
// End Cross Module References
class UScriptStruct* FOEIEditorBookmarks::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIBOOKMARKS_API uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarks_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOEIEditorBookmarks, Z_Construct_UPackage__Script_OEIBookmarks(), TEXT("OEIEditorBookmarks"), sizeof(FOEIEditorBookmarks), Get_Z_Construct_UScriptStruct_FOEIEditorBookmarks_Hash());
	}
	return Singleton;
}
template<> OEIBOOKMARKS_API UScriptStruct* StaticStruct<FOEIEditorBookmarks>()
{
	return FOEIEditorBookmarks::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOEIEditorBookmarks(FOEIEditorBookmarks::StaticStruct, TEXT("/Script/OEIBookmarks"), TEXT("OEIEditorBookmarks"), false, nullptr, nullptr);
static struct FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarks
{
	FScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarks()
	{
		UScriptStruct::DeferCppStructOps<FOEIEditorBookmarks>(FName(TEXT("OEIEditorBookmarks")));
	}
} ScriptStruct_OEIBookmarks_StaticRegisterNativesFOEIEditorBookmarks;
	struct Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subfolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subfolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Subfolders;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOEIEditorBookmarks>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders_Inner = { "Subfolders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOEIEditorBookmarksFolder, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIEditorBookmarks" },
		{ "ModuleRelativePath", "Public/OEIEditorBookmarks.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders = { "Subfolders", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOEIEditorBookmarks, Subfolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::NewProp_Subfolders,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIBookmarks,
		nullptr,
		&NewStructOps,
		"OEIEditorBookmarks",
		sizeof(FOEIEditorBookmarks),
		alignof(FOEIEditorBookmarks),
		Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOEIEditorBookmarks()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarks_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIBookmarks();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OEIEditorBookmarks"), sizeof(FOEIEditorBookmarks), Get_Z_Construct_UScriptStruct_FOEIEditorBookmarks_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOEIEditorBookmarks_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOEIEditorBookmarks_Hash() { return 2840545531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
