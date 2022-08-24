// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetQueueStatisticsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetQueueStatisticsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetQueueStatisticsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetQueueStatisticsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetQueueStatisticsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetQueueStatisticsResult"), sizeof(FMultiplayerGetQueueStatisticsResult), Get_Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetQueueStatisticsResult>()
{
	return FMultiplayerGetQueueStatisticsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetQueueStatisticsResult(FMultiplayerGetQueueStatisticsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetQueueStatisticsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetQueueStatisticsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetQueueStatisticsResult()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetQueueStatisticsResult>(FName(TEXT("MultiplayerGetQueueStatisticsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetQueueStatisticsResult;
	struct Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlayersMatching_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPlayersMatching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToMatchStatisticsInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeToMatchStatisticsInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetQueueStatisticsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetQueueStatisticsResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_NumberOfPlayersMatching_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetQueueStatisticsResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetQueueStatisticsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_NumberOfPlayersMatching = { "NumberOfPlayersMatching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetQueueStatisticsResult, NumberOfPlayersMatching), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_NumberOfPlayersMatching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_NumberOfPlayersMatching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_TimeToMatchStatisticsInSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetQueueStatisticsResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetQueueStatisticsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_TimeToMatchStatisticsInSeconds = { "TimeToMatchStatisticsInSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetQueueStatisticsResult, TimeToMatchStatisticsInSeconds), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_TimeToMatchStatisticsInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_TimeToMatchStatisticsInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_NumberOfPlayersMatching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::NewProp_TimeToMatchStatisticsInSeconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetQueueStatisticsResult",
		sizeof(FMultiplayerGetQueueStatisticsResult),
		alignof(FMultiplayerGetQueueStatisticsResult),
		Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetQueueStatisticsResult"), sizeof(FMultiplayerGetQueueStatisticsResult), Get_Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetQueueStatisticsResult_Hash() { return 2681828225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
