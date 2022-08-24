// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientValidateGooglePlayPurchaseRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientValidateGooglePlayPurchaseRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientValidateGooglePlayPurchaseRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientValidateGooglePlayPurchaseRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientValidateGooglePlayPurchaseRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientValidateGooglePlayPurchaseRequest"), sizeof(FClientValidateGooglePlayPurchaseRequest), Get_Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientValidateGooglePlayPurchaseRequest>()
{
	return FClientValidateGooglePlayPurchaseRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest(FClientValidateGooglePlayPurchaseRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientValidateGooglePlayPurchaseRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateGooglePlayPurchaseRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateGooglePlayPurchaseRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientValidateGooglePlayPurchaseRequest>(FName(TEXT("ClientValidateGooglePlayPurchaseRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientValidateGooglePlayPurchaseRequest;
	struct Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CatalogVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CatalogVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PurchasePrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptJson_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptJson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signature;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientValidateGooglePlayPurchaseRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_PurchasePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_PurchasePrice = { "PurchasePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, PurchasePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_PurchasePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_PurchasePrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_ReceiptJson_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_ReceiptJson = { "ReceiptJson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, ReceiptJson), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_ReceiptJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_ReceiptJson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_Signature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateGooglePlayPurchaseRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateGooglePlayPurchaseRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateGooglePlayPurchaseRequest, Signature), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_Signature_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_PurchasePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_ReceiptJson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::NewProp_Signature,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientValidateGooglePlayPurchaseRequest",
		sizeof(FClientValidateGooglePlayPurchaseRequest),
		alignof(FClientValidateGooglePlayPurchaseRequest),
		Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientValidateGooglePlayPurchaseRequest"), sizeof(FClientValidateGooglePlayPurchaseRequest), Get_Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientValidateGooglePlayPurchaseRequest_Hash() { return 1812584385U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
