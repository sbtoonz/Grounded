// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSetGameServerInstanceDataRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSetGameServerInstanceDataRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSetGameServerInstanceDataRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSetGameServerInstanceDataRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSetGameServerInstanceDataRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSetGameServerInstanceDataRequest"), sizeof(FServerSetGameServerInstanceDataRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSetGameServerInstanceDataRequest>()
{
	return FServerSetGameServerInstanceDataRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSetGameServerInstanceDataRequest(FServerSetGameServerInstanceDataRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSetGameServerInstanceDataRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceDataRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceDataRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSetGameServerInstanceDataRequest>(FName(TEXT("ServerSetGameServerInstanceDataRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceDataRequest;
	struct Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceDataRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSetGameServerInstanceDataRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_GameServerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceDataRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_GameServerData = { "GameServerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceDataRequest, GameServerData), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_GameServerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_GameServerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceDataRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceDataRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceDataRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_GameServerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::NewProp_LobbyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSetGameServerInstanceDataRequest",
		sizeof(FServerSetGameServerInstanceDataRequest),
		alignof(FServerSetGameServerInstanceDataRequest),
		Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSetGameServerInstanceDataRequest"), sizeof(FServerSetGameServerInstanceDataRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceDataRequest_Hash() { return 3836252399U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
