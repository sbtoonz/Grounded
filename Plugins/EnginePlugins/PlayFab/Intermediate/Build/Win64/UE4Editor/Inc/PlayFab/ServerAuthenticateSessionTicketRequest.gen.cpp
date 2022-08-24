// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerAuthenticateSessionTicketRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerAuthenticateSessionTicketRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerAuthenticateSessionTicketRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerAuthenticateSessionTicketRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerAuthenticateSessionTicketRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerAuthenticateSessionTicketRequest"), sizeof(FServerAuthenticateSessionTicketRequest), Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerAuthenticateSessionTicketRequest>()
{
	return FServerAuthenticateSessionTicketRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAuthenticateSessionTicketRequest(FServerAuthenticateSessionTicketRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerAuthenticateSessionTicketRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerAuthenticateSessionTicketRequest>(FName(TEXT("ServerAuthenticateSessionTicketRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerAuthenticateSessionTicketRequest;
	struct Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerAuthenticateSessionTicketRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAuthenticateSessionTicketRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewProp_SessionTicket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAuthenticateSessionTicketRequest" },
		{ "ModuleRelativePath", "Public/ServerAuthenticateSessionTicketRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewProp_SessionTicket = { "SessionTicket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAuthenticateSessionTicketRequest, SessionTicket), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewProp_SessionTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewProp_SessionTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::NewProp_SessionTicket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerAuthenticateSessionTicketRequest",
		sizeof(FServerAuthenticateSessionTicketRequest),
		alignof(FServerAuthenticateSessionTicketRequest),
		Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAuthenticateSessionTicketRequest"), sizeof(FServerAuthenticateSessionTicketRequest), Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAuthenticateSessionTicketRequest_Hash() { return 1743825655U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
