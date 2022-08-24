// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsCreateGroupResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsCreateGroupResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsCreateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupResponse"), sizeof(FGroupsCreateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupResponse>()
{
	return FGroupsCreateGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupResponse(FGroupsCreateGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupResponse>(FName(TEXT("GroupsCreateGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdminRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AdminRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Created_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Created;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberRoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MemberRoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Roles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId = { "AdminRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, AdminRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Created), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId = { "MemberRoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, MemberRoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupResponse, Roles), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_AdminRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Created,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_MemberRoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::NewProp_Roles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupResponse",
		sizeof(FGroupsCreateGroupResponse),
		alignof(FGroupsCreateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupResponse"), sizeof(FGroupsCreateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupResponse_Hash() { return 1480922190U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
