// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListMatchmakingTicketsForPlayerResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListMatchmakingTicketsForPlayerResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListMatchmakingTicketsForPlayerResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerListMatchmakingTicketsForPlayerResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerListMatchmakingTicketsForPlayerResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListMatchmakingTicketsForPlayerResult"), sizeof(FMultiplayerListMatchmakingTicketsForPlayerResult), Get_Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListMatchmakingTicketsForPlayerResult>()
{
	return FMultiplayerListMatchmakingTicketsForPlayerResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult(FMultiplayerListMatchmakingTicketsForPlayerResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListMatchmakingTicketsForPlayerResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMatchmakingTicketsForPlayerResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMatchmakingTicketsForPlayerResult()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListMatchmakingTicketsForPlayerResult>(FName(TEXT("MultiplayerListMatchmakingTicketsForPlayerResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMatchmakingTicketsForPlayerResult;
	struct Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListMatchmakingTicketsForPlayerResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListMatchmakingTicketsForPlayerResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMatchmakingTicketsForPlayerResult" },
		{ "ModuleRelativePath", "Public/MultiplayerListMatchmakingTicketsForPlayerResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewProp_TicketIds = { "TicketIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMatchmakingTicketsForPlayerResult, TicketIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::NewProp_TicketIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerListMatchmakingTicketsForPlayerResult",
		sizeof(FMultiplayerListMatchmakingTicketsForPlayerResult),
		alignof(FMultiplayerListMatchmakingTicketsForPlayerResult),
		Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListMatchmakingTicketsForPlayerResult"), sizeof(FMultiplayerListMatchmakingTicketsForPlayerResult), Get_Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMatchmakingTicketsForPlayerResult_Hash() { return 2012747703U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
