// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetTradeStatusRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetTradeStatusRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetTradeStatusRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetTradeStatusRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetTradeStatusRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetTradeStatusRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetTradeStatusRequest"), sizeof(FClientGetTradeStatusRequest), Get_Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetTradeStatusRequest>()
{
	return FClientGetTradeStatusRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetTradeStatusRequest(FClientGetTradeStatusRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetTradeStatusRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetTradeStatusRequest>(FName(TEXT("ClientGetTradeStatusRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetTradeStatusRequest;
	struct Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingPlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferingPlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TradeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TradeId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetTradeStatusRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetTradeStatusRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_OfferingPlayerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetTradeStatusRequest" },
		{ "ModuleRelativePath", "Public/ClientGetTradeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_OfferingPlayerId = { "OfferingPlayerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetTradeStatusRequest, OfferingPlayerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_OfferingPlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_OfferingPlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_TradeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetTradeStatusRequest" },
		{ "ModuleRelativePath", "Public/ClientGetTradeStatusRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_TradeId = { "TradeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetTradeStatusRequest, TradeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_TradeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_TradeId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_OfferingPlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::NewProp_TradeId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetTradeStatusRequest",
		sizeof(FClientGetTradeStatusRequest),
		alignof(FClientGetTradeStatusRequest),
		Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetTradeStatusRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetTradeStatusRequest"), sizeof(FClientGetTradeStatusRequest), Get_Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetTradeStatusRequest_Hash() { return 2587128049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
