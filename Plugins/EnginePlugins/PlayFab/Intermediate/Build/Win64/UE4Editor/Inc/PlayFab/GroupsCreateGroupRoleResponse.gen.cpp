// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsCreateGroupRoleResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsCreateGroupRoleResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsCreateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsCreateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsCreateGroupRoleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsCreateGroupRoleResponse"), sizeof(FGroupsCreateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsCreateGroupRoleResponse>()
{
	return FGroupsCreateGroupRoleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsCreateGroupRoleResponse(FGroupsCreateGroupRoleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsCreateGroupRoleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsCreateGroupRoleResponse>(FName(TEXT("GroupsCreateGroupRoleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsCreateGroupRoleResponse;
	struct Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupRoleResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsCreateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId = { "RoleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsCreateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsCreateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName = { "RoleName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsCreateGroupRoleResponse, RoleName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::NewProp_RoleName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsCreateGroupRoleResponse",
		sizeof(FGroupsCreateGroupRoleResponse),
		alignof(FGroupsCreateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsCreateGroupRoleResponse"), sizeof(FGroupsCreateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsCreateGroupRoleResponse_Hash() { return 4271745507U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
