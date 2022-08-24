// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerModifyCharacterVirtualCurrencyResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerModifyCharacterVirtualCurrencyResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerModifyCharacterVirtualCurrencyResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerModifyCharacterVirtualCurrencyResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerModifyCharacterVirtualCurrencyResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerModifyCharacterVirtualCurrencyResult"), sizeof(FServerModifyCharacterVirtualCurrencyResult), Get_Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerModifyCharacterVirtualCurrencyResult>()
{
	return FServerModifyCharacterVirtualCurrencyResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult(FServerModifyCharacterVirtualCurrencyResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerModifyCharacterVirtualCurrencyResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerModifyCharacterVirtualCurrencyResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerModifyCharacterVirtualCurrencyResult()
	{
		UScriptStruct::DeferCppStructOps<FServerModifyCharacterVirtualCurrencyResult>(FName(TEXT("ServerModifyCharacterVirtualCurrencyResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerModifyCharacterVirtualCurrencyResult;
	struct Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VirtualCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerModifyCharacterVirtualCurrencyResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerModifyCharacterVirtualCurrencyResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_Balance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerModifyCharacterVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/ServerModifyCharacterVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_Balance = { "Balance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerModifyCharacterVirtualCurrencyResult, Balance), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_Balance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_Balance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerModifyCharacterVirtualCurrencyResult" },
		{ "ModuleRelativePath", "Public/ServerModifyCharacterVirtualCurrencyResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerModifyCharacterVirtualCurrencyResult, VirtualCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_Balance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerModifyCharacterVirtualCurrencyResult",
		sizeof(FServerModifyCharacterVirtualCurrencyResult),
		alignof(FServerModifyCharacterVirtualCurrencyResult),
		Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerModifyCharacterVirtualCurrencyResult"), sizeof(FServerModifyCharacterVirtualCurrencyResult), Get_Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerModifyCharacterVirtualCurrencyResult_Hash() { return 1675123087U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
