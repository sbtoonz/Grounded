// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientPayForPurchaseResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientPayForPurchaseResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientPayForPurchaseResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ETransactionStatus();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientPayForPurchaseResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientPayForPurchaseResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientPayForPurchaseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientPayForPurchaseResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientPayForPurchaseResult"), sizeof(FClientPayForPurchaseResult), Get_Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientPayForPurchaseResult>()
{
	return FClientPayForPurchaseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientPayForPurchaseResult(FClientPayForPurchaseResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientPayForPurchaseResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseResult()
	{
		UScriptStruct::DeferCppStructOps<FClientPayForPurchaseResult>(FName(TEXT("ClientPayForPurchaseResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientPayForPurchaseResult;
	struct Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditApplied_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CreditApplied;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProviderToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseConfirmationPageURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseConfirmationPageURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchasePrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PurchasePrice;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VCAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VCAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientPayForPurchaseResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_CreditApplied_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_CreditApplied = { "CreditApplied", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, CreditApplied), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_CreditApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_CreditApplied_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderData = { "ProviderData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, ProviderData), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderToken = { "ProviderToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, ProviderToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseConfirmationPageURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseConfirmationPageURL = { "PurchaseConfirmationPageURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, PurchaseConfirmationPageURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseConfirmationPageURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseConfirmationPageURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseCurrency = { "PurchaseCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, PurchaseCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchasePrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchasePrice = { "PurchasePrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, PurchasePrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchasePrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchasePrice_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, Status), Z_Construct_UEnum_PlayFab_ETransactionStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VCAmount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VCAmount = { "VCAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, VCAmount), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VCAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VCAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientPayForPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientPayForPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientPayForPurchaseResult, VirtualCurrency), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_CreditApplied,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_ProviderToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseConfirmationPageURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchaseCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_PurchasePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VCAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientPayForPurchaseResult",
		sizeof(FClientPayForPurchaseResult),
		alignof(FClientPayForPurchaseResult),
		Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientPayForPurchaseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientPayForPurchaseResult"), sizeof(FClientPayForPurchaseResult), Get_Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientPayForPurchaseResult_Hash() { return 4287633004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
