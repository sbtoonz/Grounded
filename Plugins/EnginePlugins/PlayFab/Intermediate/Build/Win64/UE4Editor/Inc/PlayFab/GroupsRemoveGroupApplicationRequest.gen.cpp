// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/GroupsRemoveGroupApplicationRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupsRemoveGroupApplicationRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FGroupsRemoveGroupApplicationRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FGroupsRemoveGroupApplicationRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FGroupsRemoveGroupApplicationRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("GroupsRemoveGroupApplicationRequest"), sizeof(FGroupsRemoveGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FGroupsRemoveGroupApplicationRequest>()
{
	return FGroupsRemoveGroupApplicationRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupsRemoveGroupApplicationRequest(FGroupsRemoveGroupApplicationRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("GroupsRemoveGroupApplicationRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest()
	{
		UScriptStruct::DeferCppStructOps<FGroupsRemoveGroupApplicationRequest>(FName(TEXT("GroupsRemoveGroupApplicationRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFGroupsRemoveGroupApplicationRequest;
	struct Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Entity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroupsRemoveGroupApplicationRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupsRemoveGroupApplicationRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsRemoveGroupApplicationRequest" },
		{ "ModuleRelativePath", "Public/GroupsRemoveGroupApplicationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsRemoveGroupApplicationRequest" },
		{ "ModuleRelativePath", "Public/GroupsRemoveGroupApplicationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GroupsRemoveGroupApplicationRequest" },
		{ "ModuleRelativePath", "Public/GroupsRemoveGroupApplicationRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupsRemoveGroupApplicationRequest, Group), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::NewProp_Group,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"GroupsRemoveGroupApplicationRequest",
		sizeof(FGroupsRemoveGroupApplicationRequest),
		alignof(FGroupsRemoveGroupApplicationRequest),
		Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupsRemoveGroupApplicationRequest"), sizeof(FGroupsRemoveGroupApplicationRequest), Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupsRemoveGroupApplicationRequest_Hash() { return 1753212150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
