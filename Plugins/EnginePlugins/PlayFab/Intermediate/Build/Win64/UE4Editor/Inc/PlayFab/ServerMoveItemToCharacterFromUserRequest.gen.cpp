// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerMoveItemToCharacterFromUserRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerMoveItemToCharacterFromUserRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerMoveItemToCharacterFromUserRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerMoveItemToCharacterFromUserRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerMoveItemToCharacterFromUserRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerMoveItemToCharacterFromUserRequest"), sizeof(FServerMoveItemToCharacterFromUserRequest), Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerMoveItemToCharacterFromUserRequest>()
{
	return FServerMoveItemToCharacterFromUserRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest(FServerMoveItemToCharacterFromUserRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerMoveItemToCharacterFromUserRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromUserRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromUserRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerMoveItemToCharacterFromUserRequest>(FName(TEXT("ServerMoveItemToCharacterFromUserRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToCharacterFromUserRequest;
	struct Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemInstanceId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromUserRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerMoveItemToCharacterFromUserRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromUserRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_ItemInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_ItemInstanceId = { "ItemInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromUserRequest, ItemInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_ItemInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_ItemInstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerMoveItemToCharacterFromUserRequest" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToCharacterFromUserRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerMoveItemToCharacterFromUserRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_ItemInstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerMoveItemToCharacterFromUserRequest",
		sizeof(FServerMoveItemToCharacterFromUserRequest),
		alignof(FServerMoveItemToCharacterFromUserRequest),
		Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerMoveItemToCharacterFromUserRequest"), sizeof(FServerMoveItemToCharacterFromUserRequest), Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToCharacterFromUserRequest_Hash() { return 2758835571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
