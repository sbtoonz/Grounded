// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRevokeInventoryItemRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRevokeInventoryItemRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRevokeInventoryItemRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminRevokeInventoryItemRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminRevokeInventoryItemRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRevokeInventoryItemRequest"), sizeof(FAdminRevokeInventoryItemRequest), Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRevokeInventoryItemRequest>()
{
	return FAdminRevokeInventoryItemRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRevokeInventoryItemRequest(FAdminRevokeInventoryItemRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRevokeInventoryItemRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryItemRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryItemRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminRevokeInventoryItemRequest>(FName(TEXT("AdminRevokeInventoryItemRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryItemRequest;
	struct Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRevokeInventoryItemRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRevokeInventoryItemRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRevokeInventoryItemRequest" },
		{ "ModuleRelativePath", "Public/AdminRevokeInventoryItemRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRevokeInventoryItemRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_ItemInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRevokeInventoryItemRequest" },
		{ "ModuleRelativePath", "Public/AdminRevokeInventoryItemRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_ItemInstanceId = { "ItemInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRevokeInventoryItemRequest, ItemInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_ItemInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_ItemInstanceId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRevokeInventoryItemRequest" },
		{ "ModuleRelativePath", "Public/AdminRevokeInventoryItemRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRevokeInventoryItemRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_ItemInstanceId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminRevokeInventoryItemRequest",
		sizeof(FAdminRevokeInventoryItemRequest),
		alignof(FAdminRevokeInventoryItemRequest),
		Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRevokeInventoryItemRequest"), sizeof(FAdminRevokeInventoryItemRequest), Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryItemRequest_Hash() { return 3835800070U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
