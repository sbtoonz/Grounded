// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsInviteToGroupResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsInviteToGroupResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsInviteToGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsInviteToGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsInviteToGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsInviteToGroupResponse"), sizeof(FGroupsInviteToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsInviteToGroupResponse>()
{
	return FGroupsInviteToGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsInviteToGroupResponse(FGroupsInviteToGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsInviteToGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsInviteToGroupResponse>(FName(TEXT("GroupsInviteToGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsInviteToGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitedByEntity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitedByEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvitedEntity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvitedEntity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsInviteToGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsInviteToGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsInviteToGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsInviteToGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity = { "InvitedByEntity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedByEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsInviteToGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity = { "InvitedEntity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, InvitedEntity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsInviteToGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsInviteToGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsInviteToGroupResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Expires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedByEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_InvitedEntity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::NewProp_RoleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsInviteToGroupResponse",
		sizeof(FGroupsInviteToGroupResponse),
		alignof(FGroupsInviteToGroupResponse),
		Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsInviteToGroupResponse"), sizeof(FGroupsInviteToGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsInviteToGroupResponse_Hash() { return 793329231U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
