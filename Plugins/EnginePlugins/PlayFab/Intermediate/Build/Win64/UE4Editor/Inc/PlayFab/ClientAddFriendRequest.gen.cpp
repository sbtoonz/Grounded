// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientAddFriendRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientAddFriendRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientAddFriendRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientAddFriendRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientAddFriendRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientAddFriendRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientAddFriendRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientAddFriendRequest"), sizeof(FClientAddFriendRequest), Get_Z_Construct_UScriptStruct_FClientAddFriendRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientAddFriendRequest>()
{
	return FClientAddFriendRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientAddFriendRequest(FClientAddFriendRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientAddFriendRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientAddFriendRequest>(FName(TEXT("ClientAddFriendRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientAddFriendRequest;
	struct Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientAddFriendRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientAddFriendRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendEmail_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ClientAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendEmail = { "FriendEmail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddFriendRequest, FriendEmail), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendEmail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendEmail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ClientAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendPlayFabId = { "FriendPlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddFriendRequest, FriendPlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendPlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ClientAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendTitleDisplayName = { "FriendTitleDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddFriendRequest, FriendTitleDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendTitleDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendUsername_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientAddFriendRequest" },
		{ "ModuleRelativePath", "Public/ClientAddFriendRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendUsername = { "FriendUsername", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientAddFriendRequest, FriendUsername), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendUsername_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendUsername_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendEmail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendPlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendTitleDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::NewProp_FriendUsername,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientAddFriendRequest",
		sizeof(FClientAddFriendRequest),
		alignof(FClientAddFriendRequest),
		Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientAddFriendRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientAddFriendRequest"), sizeof(FClientAddFriendRequest), Get_Z_Construct_UScriptStruct_FClientAddFriendRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientAddFriendRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientAddFriendRequest_Hash() { return 801127471U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
