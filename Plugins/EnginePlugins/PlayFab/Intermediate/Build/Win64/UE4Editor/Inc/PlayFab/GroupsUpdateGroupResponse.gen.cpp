// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsUpdateGroupResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsUpdateGroupResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EOperationTypes();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsUpdateGroupResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FGroupsUpdateGroupResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FGroupsUpdateGroupResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsUpdateGroupResponse"), sizeof(FGroupsUpdateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsUpdateGroupResponse>()
{
	return FGroupsUpdateGroupResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsUpdateGroupResponse(FGroupsUpdateGroupResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsUpdateGroupResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse()
	{
		UScriptStruct::DeferCppStructOps<FGroupsUpdateGroupResponse>(FName(TEXT("GroupsUpdateGroupResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsUpdateGroupResponse;
	struct Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsUpdateGroupResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason = { "OperationReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, OperationReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion = { "ProfileVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, ProfileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsUpdateGroupResponse" },
		{ "ModuleRelativePath", "Public/GroupsUpdateGroupResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult = { "SetResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsUpdateGroupResponse, SetResult), Z_Construct_UEnum_PlayFab_EOperationTypes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_OperationReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_ProfileVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::NewProp_SetResult,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"GroupsUpdateGroupResponse",
		sizeof(FGroupsUpdateGroupResponse),
		alignof(FGroupsUpdateGroupResponse),
		Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsUpdateGroupResponse"), sizeof(FGroupsUpdateGroupResponse), Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsUpdateGroupResponse_Hash() { return 3452852993U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
