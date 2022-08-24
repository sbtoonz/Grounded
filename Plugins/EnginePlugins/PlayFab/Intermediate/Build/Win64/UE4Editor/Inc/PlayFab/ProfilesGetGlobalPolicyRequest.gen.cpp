// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesGetGlobalPolicyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesGetGlobalPolicyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetGlobalPolicyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FProfilesGetGlobalPolicyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FProfilesGetGlobalPolicyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetGlobalPolicyRequest"), sizeof(FProfilesGetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetGlobalPolicyRequest>()
{
	return FProfilesGetGlobalPolicyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetGlobalPolicyRequest(FProfilesGetGlobalPolicyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetGlobalPolicyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetGlobalPolicyRequest>(FName(TEXT("ProfilesGetGlobalPolicyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetGlobalPolicyRequest;
	struct Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesGetGlobalPolicyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetGlobalPolicyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetGlobalPolicyRequest" },
		{ "ModuleRelativePath", "Public/ProfilesGetGlobalPolicyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetGlobalPolicyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ProfilesGetGlobalPolicyRequest",
		sizeof(FProfilesGetGlobalPolicyRequest),
		alignof(FProfilesGetGlobalPolicyRequest),
		Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetGlobalPolicyRequest"), sizeof(FProfilesGetGlobalPolicyRequest), Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetGlobalPolicyRequest_Hash() { return 2741524830U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
