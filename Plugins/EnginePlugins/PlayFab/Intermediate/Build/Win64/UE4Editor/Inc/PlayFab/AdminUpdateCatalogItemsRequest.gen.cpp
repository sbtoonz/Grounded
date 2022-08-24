// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdateCatalogItemsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdateCatalogItemsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdateCatalogItemsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminUpdateCatalogItemsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminUpdateCatalogItemsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdateCatalogItemsRequest"), sizeof(FAdminUpdateCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdateCatalogItemsRequest>()
{
	return FAdminUpdateCatalogItemsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdateCatalogItemsRequest(FAdminUpdateCatalogItemsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdateCatalogItemsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCatalogItemsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCatalogItemsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdateCatalogItemsRequest>(FName(TEXT("AdminUpdateCatalogItemsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdateCatalogItemsRequest;
	struct Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Catalog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Catalog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAsDefaultCatalog_MetaData[];
#endif
		static void NewProp_SetAsDefaultCatalog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SetAsDefaultCatalog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdateCatalogItemsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdateCatalogItemsRequest>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog_Inner = { "Catalog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCatalogItemsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCatalogItemsRequest, Catalog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCatalogItemsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCatalogItemsRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCatalogItemsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdateCatalogItemsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdateCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/AdminUpdateCatalogItemsRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog_SetBit(void* Obj)
	{
		((FAdminUpdateCatalogItemsRequest*)Obj)->SetAsDefaultCatalog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog = { "SetAsDefaultCatalog", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAdminUpdateCatalogItemsRequest), &Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_Catalog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::NewProp_SetAsDefaultCatalog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminUpdateCatalogItemsRequest",
		sizeof(FAdminUpdateCatalogItemsRequest),
		alignof(FAdminUpdateCatalogItemsRequest),
		Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdateCatalogItemsRequest"), sizeof(FAdminUpdateCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdateCatalogItemsRequest_Hash() { return 2039886815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
