// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientPayForPurchaseRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPayForPurchaseRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientPayForPurchaseRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientPayForPurchaseRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientPayForPurchaseRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientPayForPurchaseRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientPayForPurchaseRequest"), sizeof(FClientPayForPurchaseRequest), Get_Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientPayForPurchaseRequest>()
{
	return FClientPayForPurchaseRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientPayForPurchaseRequest(FClientPayForPurchaseRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientPayForPurchaseRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientPayForPurchaseRequest>(FName(TEXT("ClientPayForPurchaseRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseRequest;
	struct Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderTransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderTransactionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientPayForPurchaseRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseRequest, Currency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_Currency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseRequest, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseRequest, ProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderTransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderTransactionId = { "ProviderTransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseRequest, ProviderTransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderTransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderTransactionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::NewProp_ProviderTransactionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientPayForPurchaseRequest",
		sizeof(FClientPayForPurchaseRequest),
		alignof(FClientPayForPurchaseRequest),
		Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientPayForPurchaseRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientPayForPurchaseRequest"), sizeof(FClientPayForPurchaseRequest), Get_Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseRequest_Hash() { return 1473966079U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
