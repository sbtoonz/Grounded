// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsUpdateGroupRoleRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsUpdateGroupRoleRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsUpdateGroupRoleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupRoleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleRequest"), sizeof(FGroupsUpdateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleRequest>()
{
	return FGroupsUpdateGroupRoleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupRoleRequest(FGroupsUpdateGroupRoleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupRoleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupRoleRequest>(FName(TEXT("GroupsUpdateGroupRoleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleRequest;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExpectedProfileVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RoleName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleRequest" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleRequest" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion = { "ExpectedProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, ExpectedProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleRequest" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleRequest" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleRequest" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleRequest, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_ExpectedProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::NewProp_RoleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleRequest",
		sizeof(FGroupsUpdateGroupRoleRequest),
		alignof(FGroupsUpdateGroupRoleRequest),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupRoleRequest"), sizeof(FGroupsUpdateGroupRoleRequest), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleRequest_Hash() { return 4151317004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
