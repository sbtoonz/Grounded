// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesSetEntityProfilePolicyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesSetEntityProfilePolicyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesSetEntityProfilePolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyRequest"), sizeof(FProfilesSetEntityProfilePolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyRequest>()
{
	return FProfilesSetEntityProfilePolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest(FProfilesSetEntityProfilePolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetEntityProfilePolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetEntityProfilePolicyRequest>(FName(TEXT("ProfilesSetEntityProfilePolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyRequest;
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Statements;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetEntityProfilePolicyRequest" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetEntityProfilePolicyRequest" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Entity), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner = { "Statements", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetEntityProfilePolicyRequest" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements = { "Statements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyRequest, Statements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Entity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::NewProp_Statements,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyRequest",
		sizeof(FProfilesSetEntityProfilePolicyRequest),
		alignof(FProfilesSetEntityProfilePolicyRequest),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetEntityProfilePolicyRequest"), sizeof(FProfilesSetEntityProfilePolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyRequest_Hash() { return 684573081U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
