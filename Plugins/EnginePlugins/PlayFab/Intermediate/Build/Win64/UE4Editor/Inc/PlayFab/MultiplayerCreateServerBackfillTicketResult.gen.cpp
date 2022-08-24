// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerCreateServerBackfillTicketResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerCreateServerBackfillTicketResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerCreateServerBackfillTicketResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerCreateServerBackfillTicketResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerCreateServerBackfillTicketResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerCreateServerBackfillTicketResult"), sizeof(FMultiplayerCreateServerBackfillTicketResult), Get_Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerCreateServerBackfillTicketResult>()
{
	return FMultiplayerCreateServerBackfillTicketResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult(FMultiplayerCreateServerBackfillTicketResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerCreateServerBackfillTicketResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateServerBackfillTicketResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateServerBackfillTicketResult()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerCreateServerBackfillTicketResult>(FName(TEXT("MultiplayerCreateServerBackfillTicketResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerCreateServerBackfillTicketResult;
	struct Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateServerBackfillTicketResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerCreateServerBackfillTicketResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerCreateServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerCreateServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerCreateServerBackfillTicketResult, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerCreateServerBackfillTicketResult",
		sizeof(FMultiplayerCreateServerBackfillTicketResult),
		alignof(FMultiplayerCreateServerBackfillTicketResult),
		Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerCreateServerBackfillTicketResult"), sizeof(FMultiplayerCreateServerBackfillTicketResult), Get_Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerCreateServerBackfillTicketResult_Hash() { return 2685579361U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
