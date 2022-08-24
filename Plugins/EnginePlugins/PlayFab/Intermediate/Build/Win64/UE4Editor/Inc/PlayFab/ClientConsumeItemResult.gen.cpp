// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientConsumeItemResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientConsumeItemResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientConsumeItemResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientConsumeItemResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientConsumeItemResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientConsumeItemResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientConsumeItemResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientConsumeItemResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientConsumeItemResult"), sizeof(FClientConsumeItemResult), Get_Z_Construct_UScriptStruct_FClientConsumeItemResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientConsumeItemResult>()
{
	return FClientConsumeItemResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientConsumeItemResult(FClientConsumeItemResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientConsumeItemResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientConsumeItemResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientConsumeItemResult()
	{
		UScriptStruct::DeferCppStructOps<FClientConsumeItemResult>(FName(TEXT("ClientConsumeItemResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientConsumeItemResult;
	struct Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientConsumeItemResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientConsumeItemResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientConsumeItemResult" },
		{ "ModuleRelativePath", "Public/ClientConsumeItemResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_ItemInstanceId = { "ItemInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientConsumeItemResult, ItemInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_ItemInstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_RemainingUses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientConsumeItemResult" },
		{ "ModuleRelativePath", "Public/ClientConsumeItemResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_RemainingUses = { "RemainingUses", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientConsumeItemResult, RemainingUses), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_RemainingUses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_RemainingUses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_ItemInstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::NewProp_RemainingUses,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientConsumeItemResult",
		sizeof(FClientConsumeItemResult),
		alignof(FClientConsumeItemResult),
		Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientConsumeItemResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientConsumeItemResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientConsumeItemResult"), sizeof(FClientConsumeItemResult), Get_Z_Construct_UScriptStruct_FClientConsumeItemResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientConsumeItemResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientConsumeItemResult_Hash() { return 1251229734U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
