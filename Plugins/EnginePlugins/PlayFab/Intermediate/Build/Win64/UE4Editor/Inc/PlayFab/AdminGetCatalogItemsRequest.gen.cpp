// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetCatalogItemsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetCatalogItemsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetCatalogItemsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetCatalogItemsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetCatalogItemsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetCatalogItemsRequest"), sizeof(FAdminGetCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetCatalogItemsRequest>()
{
	return FAdminGetCatalogItemsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetCatalogItemsRequest(FAdminGetCatalogItemsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetCatalogItemsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCatalogItemsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCatalogItemsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetCatalogItemsRequest>(FName(TEXT("AdminGetCatalogItemsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetCatalogItemsRequest;
	struct Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetCatalogItemsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetCatalogItemsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/AdminGetCatalogItemsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetCatalogItemsRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::NewProp_CatalogVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetCatalogItemsRequest",
		sizeof(FAdminGetCatalogItemsRequest),
		alignof(FAdminGetCatalogItemsRequest),
		Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetCatalogItemsRequest"), sizeof(FAdminGetCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetCatalogItemsRequest_Hash() { return 2108195103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif