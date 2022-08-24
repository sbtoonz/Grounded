// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>(FName(TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterPlayerAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MasterPlayerAccountIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds = { "MasterPlayerAccountIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, MasterPlayerAccountIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::NewProp_MasterPlayerAccountIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest_Hash() { return 18950188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
