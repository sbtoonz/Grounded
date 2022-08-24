// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientOpenTradeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientOpenTradeRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientOpenTradeRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientOpenTradeRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientOpenTradeRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientOpenTradeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientOpenTradeRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientOpenTradeRequest"), sizeof(FClientOpenTradeRequest), Get_Z_Construct_UScriptStruct_FClientOpenTradeRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientOpenTradeRequest>()
{
	return FClientOpenTradeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientOpenTradeRequest(FClientOpenTradeRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientOpenTradeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientOpenTradeRequest>(FName(TEXT("ClientOpenTradeRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientOpenTradeRequest;
	struct Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedPlayerIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AllowedPlayerIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferedInventoryInstanceIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferedInventoryInstanceIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestedCatalogItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestedCatalogItemIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientOpenTradeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_AllowedPlayerIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientOpenTradeRequest" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_AllowedPlayerIds = { "AllowedPlayerIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientOpenTradeRequest, AllowedPlayerIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_AllowedPlayerIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_AllowedPlayerIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_OfferedInventoryInstanceIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientOpenTradeRequest" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_OfferedInventoryInstanceIds = { "OfferedInventoryInstanceIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientOpenTradeRequest, OfferedInventoryInstanceIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_OfferedInventoryInstanceIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_OfferedInventoryInstanceIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_RequestedCatalogItemIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientOpenTradeRequest" },
		{ "ModuleRelativePath", "Public/ClientOpenTradeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_RequestedCatalogItemIds = { "RequestedCatalogItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientOpenTradeRequest, RequestedCatalogItemIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_RequestedCatalogItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_RequestedCatalogItemIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_AllowedPlayerIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_OfferedInventoryInstanceIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::NewProp_RequestedCatalogItemIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientOpenTradeRequest",
		sizeof(FClientOpenTradeRequest),
		alignof(FClientOpenTradeRequest),
		Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientOpenTradeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientOpenTradeRequest"), sizeof(FClientOpenTradeRequest), Get_Z_Construct_UScriptStruct_FClientOpenTradeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientOpenTradeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientOpenTradeRequest_Hash() { return 694720042U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
