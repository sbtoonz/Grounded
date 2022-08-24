// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetCatalogItemsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetCatalogItemsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetCatalogItemsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetCatalogItemsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetCatalogItemsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetCatalogItemsRequest"), sizeof(FClientGetCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetCatalogItemsRequest>()
{
	return FClientGetCatalogItemsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetCatalogItemsRequest(FClientGetCatalogItemsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetCatalogItemsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCatalogItemsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCatalogItemsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetCatalogItemsRequest>(FName(TEXT("ClientGetCatalogItemsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetCatalogItemsRequest;
	struct Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetCatalogItemsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetCatalogItemsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCatalogItemsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetCatalogItemsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCatalogItemsRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewProp_CatalogVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::NewProp_CatalogVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetCatalogItemsRequest",
		sizeof(FClientGetCatalogItemsRequest),
		alignof(FClientGetCatalogItemsRequest),
		Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetCatalogItemsRequest"), sizeof(FClientGetCatalogItemsRequest), Get_Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetCatalogItemsRequest_Hash() { return 3597340902U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
