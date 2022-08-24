// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminModifyUserVirtualCurrencyResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminModifyUserVirtualCurrencyResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminModifyUserVirtualCurrencyResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminModifyUserVirtualCurrencyResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminModifyUserVirtualCurrencyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminModifyUserVirtualCurrencyResult"), sizeof(FAdminModifyUserVirtualCurrencyResult), Get_Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminModifyUserVirtualCurrencyResult>()
{
	return FAdminModifyUserVirtualCurrencyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult(FAdminModifyUserVirtualCurrencyResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminModifyUserVirtualCurrencyResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyUserVirtualCurrencyResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyUserVirtualCurrencyResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminModifyUserVirtualCurrencyResult>(FName(TEXT("AdminModifyUserVirtualCurrencyResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminModifyUserVirtualCurrencyResult;
	struct Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Balance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Balance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BalanceChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BalanceChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VirtualCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminModifyUserVirtualCurrencyResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminModifyUserVirtualCurrencyResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_Balance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyUserVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/AdminModifyUserVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyUserVirtualCurrencyResult, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_Balance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_BalanceChange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyUserVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/AdminModifyUserVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_BalanceChange = { "BalanceChange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyUserVirtualCurrencyResult, BalanceChange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_BalanceChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_BalanceChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyUserVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/AdminModifyUserVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyUserVirtualCurrencyResult, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminModifyUserVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/AdminModifyUserVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminModifyUserVirtualCurrencyResult, VirtualCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_Balance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_BalanceChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminModifyUserVirtualCurrencyResult",
		sizeof(FAdminModifyUserVirtualCurrencyResult),
		alignof(FAdminModifyUserVirtualCurrencyResult),
		Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminModifyUserVirtualCurrencyResult"), sizeof(FAdminModifyUserVirtualCurrencyResult), Get_Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminModifyUserVirtualCurrencyResult_Hash() { return 4022970497U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
