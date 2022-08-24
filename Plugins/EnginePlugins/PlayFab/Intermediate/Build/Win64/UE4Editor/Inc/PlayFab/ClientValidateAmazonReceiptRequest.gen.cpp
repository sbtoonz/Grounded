// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientValidateAmazonReceiptRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientValidateAmazonReceiptRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientValidateAmazonReceiptRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientValidateAmazonReceiptRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientValidateAmazonReceiptRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientValidateAmazonReceiptRequest"), sizeof(FClientValidateAmazonReceiptRequest), Get_Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientValidateAmazonReceiptRequest>()
{
	return FClientValidateAmazonReceiptRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientValidateAmazonReceiptRequest(FClientValidateAmazonReceiptRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientValidateAmazonReceiptRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateAmazonReceiptRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientValidateAmazonReceiptRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientValidateAmazonReceiptRequest>(FName(TEXT("ClientValidateAmazonReceiptRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientValidateAmazonReceiptRequest;
	struct Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientValidateAmazonReceiptRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CatalogVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CatalogVersion = { "CatalogVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, CatalogVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CatalogVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CatalogVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_PurchasePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_PurchasePrice = { "PurchasePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, PurchasePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_PurchasePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_PurchasePrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_ReceiptId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_ReceiptId = { "ReceiptId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, ReceiptId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_ReceiptId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_ReceiptId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientValidateAmazonReceiptRequest" },
		{ "ModuleRelativePath", "Public/ClientValidateAmazonReceiptRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientValidateAmazonReceiptRequest, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CatalogVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_PurchasePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_ReceiptId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientValidateAmazonReceiptRequest",
		sizeof(FClientValidateAmazonReceiptRequest),
		alignof(FClientValidateAmazonReceiptRequest),
		Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientValidateAmazonReceiptRequest"), sizeof(FClientValidateAmazonReceiptRequest), Get_Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientValidateAmazonReceiptRequest_Hash() { return 949427802U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
