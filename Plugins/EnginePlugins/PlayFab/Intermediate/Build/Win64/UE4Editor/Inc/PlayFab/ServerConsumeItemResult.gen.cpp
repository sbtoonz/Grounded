// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerConsumeItemResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerConsumeItemResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerConsumeItemResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerConsumeItemResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerConsumeItemResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerConsumeItemResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerConsumeItemResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerConsumeItemResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerConsumeItemResult"), sizeof(FServerConsumeItemResult), Get_Z_Construct_UScriptStruct_FServerConsumeItemResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerConsumeItemResult>()
{
	return FServerConsumeItemResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerConsumeItemResult(FServerConsumeItemResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerConsumeItemResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerConsumeItemResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerConsumeItemResult()
	{
		UScriptStruct::DeferCppStructOps<FServerConsumeItemResult>(FName(TEXT("ServerConsumeItemResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerConsumeItemResult;
	struct Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemInstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingUses_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingUses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerConsumeItemResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerConsumeItemResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerConsumeItemResult" },
		{ "ModuleRelativePath", "Public/ServerConsumeItemResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_ItemInstanceId = { "ItemInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerConsumeItemResult, ItemInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_RemainingUses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerConsumeItemResult" },
		{ "ModuleRelativePath", "Public/ServerConsumeItemResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_RemainingUses = { "RemainingUses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerConsumeItemResult, RemainingUses), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_RemainingUses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_RemainingUses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_ItemInstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::NewProp_RemainingUses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerConsumeItemResult",
		sizeof(FServerConsumeItemResult),
		alignof(FServerConsumeItemResult),
		Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerConsumeItemResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerConsumeItemResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerConsumeItemResult"), sizeof(FServerConsumeItemResult), Get_Z_Construct_UScriptStruct_FServerConsumeItemResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerConsumeItemResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerConsumeItemResult_Hash() { return 202883317U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
