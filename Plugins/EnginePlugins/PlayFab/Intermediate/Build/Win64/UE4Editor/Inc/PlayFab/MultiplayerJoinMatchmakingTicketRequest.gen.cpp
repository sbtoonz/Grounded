// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerJoinMatchmakingTicketRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerJoinMatchmakingTicketRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerJoinMatchmakingTicketRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerJoinMatchmakingTicketRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerJoinMatchmakingTicketRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerJoinMatchmakingTicketRequest"), sizeof(FMultiplayerJoinMatchmakingTicketRequest), Get_Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerJoinMatchmakingTicketRequest>()
{
	return FMultiplayerJoinMatchmakingTicketRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest(FMultiplayerJoinMatchmakingTicketRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerJoinMatchmakingTicketRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerJoinMatchmakingTicketRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerJoinMatchmakingTicketRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerJoinMatchmakingTicketRequest>(FName(TEXT("MultiplayerJoinMatchmakingTicketRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerJoinMatchmakingTicketRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Member_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Member;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QueueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerJoinMatchmakingTicketRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerJoinMatchmakingTicketRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerJoinMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerJoinMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerJoinMatchmakingTicketRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_Member_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerJoinMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerJoinMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_Member = { "Member", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerJoinMatchmakingTicketRequest, Member), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_Member_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_Member_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerJoinMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerJoinMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_QueueName = { "QueueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerJoinMatchmakingTicketRequest, QueueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_QueueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerJoinMatchmakingTicketRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerJoinMatchmakingTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerJoinMatchmakingTicketRequest, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_Member,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_QueueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerJoinMatchmakingTicketRequest",
		sizeof(FMultiplayerJoinMatchmakingTicketRequest),
		alignof(FMultiplayerJoinMatchmakingTicketRequest),
		Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerJoinMatchmakingTicketRequest"), sizeof(FMultiplayerJoinMatchmakingTicketRequest), Get_Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerJoinMatchmakingTicketRequest_Hash() { return 2717446760U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
