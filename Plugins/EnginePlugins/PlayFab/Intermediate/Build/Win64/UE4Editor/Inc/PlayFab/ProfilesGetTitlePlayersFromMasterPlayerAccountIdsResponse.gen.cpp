// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>()
{
	return FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>(FName(TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitlePlayerAccounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitlePlayerAccounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse" },
		{ "ModuleRelativePath", "Public/ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts = { "TitlePlayerAccounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, TitlePlayerAccounts), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::NewProp_TitlePlayerAccounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse",
		sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		alignof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse),
		Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse"), sizeof(FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse), Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse_Hash() { return 3699456013U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
