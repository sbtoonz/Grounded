// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRemoveSharedGroupMembersRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRemoveSharedGroupMembersRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRemoveSharedGroupMembersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRemoveSharedGroupMembersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRemoveSharedGroupMembersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRemoveSharedGroupMembersRequest"), sizeof(FClientRemoveSharedGroupMembersRequest), Get_Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRemoveSharedGroupMembersRequest>()
{
	return FClientRemoveSharedGroupMembersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRemoveSharedGroupMembersRequest(FClientRemoveSharedGroupMembersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRemoveSharedGroupMembersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveSharedGroupMembersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveSharedGroupMembersRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRemoveSharedGroupMembersRequest>(FName(TEXT("ClientRemoveSharedGroupMembersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRemoveSharedGroupMembersRequest;
	struct Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRemoveSharedGroupMembersRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRemoveSharedGroupMembersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_PlayFabIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRemoveSharedGroupMembersRequest" },
		{ "ModuleRelativePath", "Public/ClientRemoveSharedGroupMembersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_PlayFabIds = { "PlayFabIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRemoveSharedGroupMembersRequest, PlayFabIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_PlayFabIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_PlayFabIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_SharedGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRemoveSharedGroupMembersRequest" },
		{ "ModuleRelativePath", "Public/ClientRemoveSharedGroupMembersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_SharedGroupId = { "SharedGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRemoveSharedGroupMembersRequest, SharedGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_SharedGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_SharedGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_PlayFabIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::NewProp_SharedGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRemoveSharedGroupMembersRequest",
		sizeof(FClientRemoveSharedGroupMembersRequest),
		alignof(FClientRemoveSharedGroupMembersRequest),
		Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRemoveSharedGroupMembersRequest"), sizeof(FClientRemoveSharedGroupMembersRequest), Get_Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRemoveSharedGroupMembersRequest_Hash() { return 1034957657U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
