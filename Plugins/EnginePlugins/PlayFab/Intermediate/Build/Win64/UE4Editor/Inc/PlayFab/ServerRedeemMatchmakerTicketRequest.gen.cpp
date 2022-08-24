// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRedeemMatchmakerTicketRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRedeemMatchmakerTicketRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRedeemMatchmakerTicketRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerRedeemMatchmakerTicketRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerRedeemMatchmakerTicketRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRedeemMatchmakerTicketRequest"), sizeof(FServerRedeemMatchmakerTicketRequest), Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRedeemMatchmakerTicketRequest>()
{
	return FServerRedeemMatchmakerTicketRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRedeemMatchmakerTicketRequest(FServerRedeemMatchmakerTicketRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRedeemMatchmakerTicketRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerRedeemMatchmakerTicketRequest>(FName(TEXT("ServerRedeemMatchmakerTicketRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRedeemMatchmakerTicketRequest;
	struct Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRedeemMatchmakerTicketRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketRequest" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemMatchmakerTicketRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketRequest" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemMatchmakerTicketRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_Ticket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRedeemMatchmakerTicketRequest" },
		{ "ModuleRelativePath", "Public/ServerRedeemMatchmakerTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRedeemMatchmakerTicketRequest, Ticket), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::NewProp_Ticket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerRedeemMatchmakerTicketRequest",
		sizeof(FServerRedeemMatchmakerTicketRequest),
		alignof(FServerRedeemMatchmakerTicketRequest),
		Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRedeemMatchmakerTicketRequest"), sizeof(FServerRedeemMatchmakerTicketRequest), Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRedeemMatchmakerTicketRequest_Hash() { return 542753114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
