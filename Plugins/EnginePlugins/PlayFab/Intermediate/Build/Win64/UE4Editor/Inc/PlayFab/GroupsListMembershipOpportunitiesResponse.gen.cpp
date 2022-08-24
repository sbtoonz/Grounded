// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsListMembershipOpportunitiesResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsListMembershipOpportunitiesResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsListMembershipOpportunitiesResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsListMembershipOpportunitiesResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsListMembershipOpportunitiesResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsListMembershipOpportunitiesResponse"), sizeof(FGroupsListMembershipOpportunitiesResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsListMembershipOpportunitiesResponse>()
{
	return FGroupsListMembershipOpportunitiesResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse(FGroupsListMembershipOpportunitiesResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsListMembershipOpportunitiesResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsListMembershipOpportunitiesResponse>(FName(TEXT("GroupsListMembershipOpportunitiesResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsListMembershipOpportunitiesResponse;
	struct Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Applications_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Applications_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Applications;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Invitations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invitations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Invitations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsListMembershipOpportunitiesResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsListMembershipOpportunitiesResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner = { "Applications", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsListMembershipOpportunitiesResponse" },
		{ "ModuleRelativePath", "Public/GroupsListMembershipOpportunitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications = { "Applications", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Applications), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner = { "Invitations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsListMembershipOpportunitiesResponse" },
		{ "ModuleRelativePath", "Public/GroupsListMembershipOpportunitiesResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations = { "Invitations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsListMembershipOpportunitiesResponse, Invitations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Applications,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::NewProp_Invitations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsListMembershipOpportunitiesResponse",
		sizeof(FGroupsListMembershipOpportunitiesResponse),
		alignof(FGroupsListMembershipOpportunitiesResponse),
		Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsListMembershipOpportunitiesResponse"), sizeof(FGroupsListMembershipOpportunitiesResponse), Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsListMembershipOpportunitiesResponse_Hash() { return 3747337295U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
