// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPurchaseResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPurchaseResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPurchaseResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPurchaseResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetPurchaseResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetPurchaseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPurchaseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPurchaseResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPurchaseResult"), sizeof(FClientGetPurchaseResult), Get_Z_Construct_UScriptStruct_FClientGetPurchaseResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPurchaseResult>()
{
	return FClientGetPurchaseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPurchaseResult(FClientGetPurchaseResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPurchaseResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPurchaseResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPurchaseResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPurchaseResult>(FName(TEXT("ClientGetPurchaseResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPurchaseResult;
	struct Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PaymentProvider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPurchaseResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPurchaseResult, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_OrderId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PaymentProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PaymentProvider = { "PaymentProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPurchaseResult, PaymentProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PaymentProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PaymentProvider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PurchaseDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PurchaseDate = { "PurchaseDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPurchaseResult, PurchaseDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PurchaseDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PurchaseDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPurchaseResult, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientGetPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionStatus = { "TransactionStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPurchaseResult, TransactionStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PaymentProvider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_PurchaseDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::NewProp_TransactionStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetPurchaseResult",
		sizeof(FClientGetPurchaseResult),
		alignof(FClientGetPurchaseResult),
		Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPurchaseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPurchaseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPurchaseResult"), sizeof(FClientGetPurchaseResult), Get_Z_Construct_UScriptStruct_FClientGetPurchaseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPurchaseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPurchaseResult_Hash() { return 2996720399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
