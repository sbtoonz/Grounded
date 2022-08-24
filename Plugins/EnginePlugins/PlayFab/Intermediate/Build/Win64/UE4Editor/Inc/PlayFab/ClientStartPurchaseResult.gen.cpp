// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientStartPurchaseResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientStartPurchaseResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientStartPurchaseResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientStartPurchaseResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientStartPurchaseResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientStartPurchaseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientStartPurchaseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientStartPurchaseResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientStartPurchaseResult"), sizeof(FClientStartPurchaseResult), Get_Z_Construct_UScriptStruct_FClientStartPurchaseResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientStartPurchaseResult>()
{
	return FClientStartPurchaseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientStartPurchaseResult(FClientStartPurchaseResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientStartPurchaseResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientStartPurchaseResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientStartPurchaseResult()
	{
		UScriptStruct::DeferCppStructOps<FClientStartPurchaseResult>(FName(TEXT("ClientStartPurchaseResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientStartPurchaseResult;
	struct Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PaymentOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaymentOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PaymentOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrencyBalances_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VirtualCurrencyBalances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientStartPurchaseResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientStartPurchaseResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents_Inner = { "Contents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartPurchaseResult, Contents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartPurchaseResult, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_OrderId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions_Inner = { "PaymentOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions = { "PaymentOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartPurchaseResult, PaymentOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_VirtualCurrencyBalances_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartPurchaseResult" },
		{ "ModuleRelativePath", "Public/ClientStartPurchaseResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_VirtualCurrencyBalances = { "VirtualCurrencyBalances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartPurchaseResult, VirtualCurrencyBalances), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_VirtualCurrencyBalances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_VirtualCurrencyBalances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_Contents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_PaymentOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::NewProp_VirtualCurrencyBalances,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientStartPurchaseResult",
		sizeof(FClientStartPurchaseResult),
		alignof(FClientStartPurchaseResult),
		Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientStartPurchaseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientStartPurchaseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientStartPurchaseResult"), sizeof(FClientStartPurchaseResult), Get_Z_Construct_UScriptStruct_FClientStartPurchaseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientStartPurchaseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientStartPurchaseResult_Hash() { return 2974391202U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
