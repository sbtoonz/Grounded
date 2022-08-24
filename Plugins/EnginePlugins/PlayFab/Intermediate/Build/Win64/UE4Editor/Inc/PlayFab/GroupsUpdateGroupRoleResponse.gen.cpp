// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsUpdateGroupRoleResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsUpdateGroupRoleResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsUpdateGroupRoleResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupRoleResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupRoleResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupRoleResponse"), sizeof(FGroupsUpdateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupRoleResponse>()
{
	return FGroupsUpdateGroupRoleResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupRoleResponse(FGroupsUpdateGroupRoleResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupRoleResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupRoleResponse>(FName(TEXT("GroupsUpdateGroupRoleResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupRoleResponse;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfileVersion;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SetResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SetResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupRoleResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupRoleResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupRoleResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupRoleResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_OperationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::NewProp_SetResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupRoleResponse",
		sizeof(FGroupsUpdateGroupRoleResponse),
		alignof(FGroupsUpdateGroupRoleResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupRoleResponse"), sizeof(FGroupsUpdateGroupRoleResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupRoleResponse_Hash() { return 3690644758U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
