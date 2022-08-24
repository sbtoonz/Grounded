// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListServerBackfillTicketsForPlayerResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListServerBackfillTicketsForPlayerResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListServerBackfillTicketsForPlayerResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerListServerBackfillTicketsForPlayerResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerListServerBackfillTicketsForPlayerResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListServerBackfillTicketsForPlayerResult"), sizeof(FMultiplayerListServerBackfillTicketsForPlayerResult), Get_Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListServerBackfillTicketsForPlayerResult>()
{
	return FMultiplayerListServerBackfillTicketsForPlayerResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult(FMultiplayerListServerBackfillTicketsForPlayerResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListServerBackfillTicketsForPlayerResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListServerBackfillTicketsForPlayerResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListServerBackfillTicketsForPlayerResult()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListServerBackfillTicketsForPlayerResult>(FName(TEXT("MultiplayerListServerBackfillTicketsForPlayerResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListServerBackfillTicketsForPlayerResult;
	struct Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListServerBackfillTicketsForPlayerResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListServerBackfillTicketsForPlayerResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListServerBackfillTicketsForPlayerResult" },
		{ "ModuleRelativePath", "Public/MultiplayerListServerBackfillTicketsForPlayerResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewProp_TicketIds = { "TicketIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListServerBackfillTicketsForPlayerResult, TicketIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewProp_TicketIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::NewProp_TicketIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerListServerBackfillTicketsForPlayerResult",
		sizeof(FMultiplayerListServerBackfillTicketsForPlayerResult),
		alignof(FMultiplayerListServerBackfillTicketsForPlayerResult),
		Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListServerBackfillTicketsForPlayerResult"), sizeof(FMultiplayerListServerBackfillTicketsForPlayerResult), Get_Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListServerBackfillTicketsForPlayerResult_Hash() { return 632840333U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
