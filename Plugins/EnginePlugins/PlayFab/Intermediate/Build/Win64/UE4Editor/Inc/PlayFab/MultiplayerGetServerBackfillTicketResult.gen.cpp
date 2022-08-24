// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetServerBackfillTicketResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetServerBackfillTicketResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetServerBackfillTicketResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetServerBackfillTicketResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetServerBackfillTicketResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetServerBackfillTicketResult"), sizeof(FMultiplayerGetServerBackfillTicketResult), Get_Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetServerBackfillTicketResult>()
{
	return FMultiplayerGetServerBackfillTicketResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult(FMultiplayerGetServerBackfillTicketResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetServerBackfillTicketResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetServerBackfillTicketResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetServerBackfillTicketResult()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetServerBackfillTicketResult>(FName(TEXT("MultiplayerGetServerBackfillTicketResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetServerBackfillTicketResult;
	struct Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancellationReasonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CancellationReasonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiveUpAfterSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GiveUpAfterSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Members;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerDetails;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetServerBackfillTicketResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_CancellationReasonString_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_CancellationReasonString = { "CancellationReasonString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, CancellationReasonString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_CancellationReasonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_CancellationReasonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Created_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_GiveUpAfterSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_GiveUpAfterSeconds = { "GiveUpAfterSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, GiveUpAfterSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_GiveUpAfterSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_GiveUpAfterSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_MatchID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, MatchID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_MatchID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_MatchID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, Members), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_QueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_QueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_ServerDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_ServerDetails = { "ServerDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, ServerDetails), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_ServerDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_ServerDetails_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetServerBackfillTicketResult" },
		{ "ModuleRelativePath", "Public/MultiplayerGetServerBackfillTicketResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetServerBackfillTicketResult, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_CancellationReasonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_GiveUpAfterSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Members,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_QueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_ServerDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetServerBackfillTicketResult",
		sizeof(FMultiplayerGetServerBackfillTicketResult),
		alignof(FMultiplayerGetServerBackfillTicketResult),
		Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetServerBackfillTicketResult"), sizeof(FMultiplayerGetServerBackfillTicketResult), Get_Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetServerBackfillTicketResult_Hash() { return 3539927569U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
