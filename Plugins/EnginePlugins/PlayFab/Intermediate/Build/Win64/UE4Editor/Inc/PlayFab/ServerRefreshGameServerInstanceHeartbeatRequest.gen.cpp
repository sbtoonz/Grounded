// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRefreshGameServerInstanceHeartbeatRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRefreshGameServerInstanceHeartbeatRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRefreshGameServerInstanceHeartbeatRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerRefreshGameServerInstanceHeartbeatRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerRefreshGameServerInstanceHeartbeatRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRefreshGameServerInstanceHeartbeatRequest"), sizeof(FServerRefreshGameServerInstanceHeartbeatRequest), Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRefreshGameServerInstanceHeartbeatRequest>()
{
	return FServerRefreshGameServerInstanceHeartbeatRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest(FServerRefreshGameServerInstanceHeartbeatRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRefreshGameServerInstanceHeartbeatRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerRefreshGameServerInstanceHeartbeatRequest>(FName(TEXT("ServerRefreshGameServerInstanceHeartbeatRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatRequest;
	struct Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRefreshGameServerInstanceHeartbeatRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRefreshGameServerInstanceHeartbeatRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRefreshGameServerInstanceHeartbeatRequest" },
		{ "ModuleRelativePath", "Public/ServerRefreshGameServerInstanceHeartbeatRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRefreshGameServerInstanceHeartbeatRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::NewProp_LobbyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerRefreshGameServerInstanceHeartbeatRequest",
		sizeof(FServerRefreshGameServerInstanceHeartbeatRequest),
		alignof(FServerRefreshGameServerInstanceHeartbeatRequest),
		Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRefreshGameServerInstanceHeartbeatRequest"), sizeof(FServerRefreshGameServerInstanceHeartbeatRequest), Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatRequest_Hash() { return 2817007200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
