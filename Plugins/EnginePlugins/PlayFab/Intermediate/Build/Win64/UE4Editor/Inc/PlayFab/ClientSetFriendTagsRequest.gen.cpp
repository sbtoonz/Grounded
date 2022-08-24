// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientSetFriendTagsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSetFriendTagsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientSetFriendTagsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientSetFriendTagsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientSetFriendTagsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientSetFriendTagsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientSetFriendTagsRequest"), sizeof(FClientSetFriendTagsRequest), Get_Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientSetFriendTagsRequest>()
{
	return FClientSetFriendTagsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientSetFriendTagsRequest(FClientSetFriendTagsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientSetFriendTagsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientSetFriendTagsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientSetFriendTagsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientSetFriendTagsRequest>(FName(TEXT("ClientSetFriendTagsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientSetFriendTagsRequest;
	struct Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendPlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendPlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientSetFriendTagsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientSetFriendTagsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_FriendPlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientSetFriendTagsRequest" },
		{ "ModuleRelativePath", "Public/ClientSetFriendTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_FriendPlayFabId = { "FriendPlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientSetFriendTagsRequest, FriendPlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_FriendPlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_FriendPlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientSetFriendTagsRequest" },
		{ "ModuleRelativePath", "Public/ClientSetFriendTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientSetFriendTagsRequest, Tags), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_FriendPlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::NewProp_Tags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientSetFriendTagsRequest",
		sizeof(FClientSetFriendTagsRequest),
		alignof(FClientSetFriendTagsRequest),
		Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientSetFriendTagsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientSetFriendTagsRequest"), sizeof(FClientSetFriendTagsRequest), Get_Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientSetFriendTagsRequest_Hash() { return 1261659469U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
