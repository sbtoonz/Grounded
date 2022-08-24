// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerAddFriendRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerAddFriendRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerAddFriendRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerAddFriendRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerAddFriendRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerAddFriendRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerAddFriendRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAddFriendRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerAddFriendRequest"), sizeof(FServerAddFriendRequest), Get_Z_Construct_UScriptStruct_FServerAddFriendRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerAddFriendRequest>()
{
	return FServerAddFriendRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAddFriendRequest(FServerAddFriendRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerAddFriendRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerAddFriendRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerAddFriendRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerAddFriendRequest>(FName(TEXT("ServerAddFriendRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerAddFriendRequest;
	struct Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendEmail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendEmail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendPlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendPlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendTitleDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendTitleDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendUsername_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendUsername;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAddFriendRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendEmail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendEmail = { "FriendEmail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddFriendRequest, FriendEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendPlayFabId = { "FriendPlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddFriendRequest, FriendPlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendTitleDisplayName = { "FriendTitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddFriendRequest, FriendTitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendUsername_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendUsername = { "FriendUsername", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddFriendRequest, FriendUsername), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendUsername_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ServerAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddFriendRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_PlayFabId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendPlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendTitleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_FriendUsername,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::NewProp_PlayFabId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerAddFriendRequest",
		sizeof(FServerAddFriendRequest),
		alignof(FServerAddFriendRequest),
		Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAddFriendRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAddFriendRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAddFriendRequest"), sizeof(FServerAddFriendRequest), Get_Z_Construct_UScriptStruct_FServerAddFriendRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAddFriendRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAddFriendRequest_Hash() { return 581546647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
