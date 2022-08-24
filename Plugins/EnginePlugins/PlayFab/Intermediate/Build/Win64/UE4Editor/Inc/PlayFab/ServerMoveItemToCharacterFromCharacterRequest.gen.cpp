// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerMoveItemToCharacterFromCharacterRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerMoveItemToCharacterFromCharacterRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerMoveItemToCharacterFromCharacterRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerMoveItemToCharacterFromCharacterRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerMoveItemToCharacterFromCharacterRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerMoveItemToCharacterFromCharacterRequest"), sizeof(FServerMoveItemToCharacterFromCharacterRequest), Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerMoveItemToCharacterFromCharacterRequest>()
{
	return FServerMoveItemToCharacterFromCharacterRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest(FServerMoveItemToCharacterFromCharacterRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerMoveItemToCharacterFromCharacterRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromCharacterRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromCharacterRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerMoveItemToCharacterFromCharacterRequest>(FName(TEXT("ServerMoveItemToCharacterFromCharacterRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromCharacterRequest;
	struct Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GivingCharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GivingCharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemInstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivingCharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceivingCharacterId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromCharacterRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerMoveItemToCharacterFromCharacterRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_GivingCharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_GivingCharacterId = { "GivingCharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromCharacterRequest, GivingCharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_GivingCharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_GivingCharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ItemInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ItemInstanceId = { "ItemInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromCharacterRequest, ItemInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ItemInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ItemInstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromCharacterRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ReceivingCharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromCharacterRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromCharacterRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ReceivingCharacterId = { "ReceivingCharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromCharacterRequest, ReceivingCharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ReceivingCharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ReceivingCharacterId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_GivingCharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ItemInstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::NewProp_ReceivingCharacterId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerMoveItemToCharacterFromCharacterRequest",
		sizeof(FServerMoveItemToCharacterFromCharacterRequest),
		alignof(FServerMoveItemToCharacterFromCharacterRequest),
		Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerMoveItemToCharacterFromCharacterRequest"), sizeof(FServerMoveItemToCharacterFromCharacterRequest), Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromCharacterRequest_Hash() { return 3449796568U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
