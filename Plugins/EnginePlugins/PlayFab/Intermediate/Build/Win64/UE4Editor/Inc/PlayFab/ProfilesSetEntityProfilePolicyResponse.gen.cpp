// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesSetEntityProfilePolicyResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesSetEntityProfilePolicyResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesSetEntityProfilePolicyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesSetEntityProfilePolicyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesSetEntityProfilePolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesSetEntityProfilePolicyResponse"), sizeof(FProfilesSetEntityProfilePolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesSetEntityProfilePolicyResponse>()
{
	return FProfilesSetEntityProfilePolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse(FProfilesSetEntityProfilePolicyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesSetEntityProfilePolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesSetEntityProfilePolicyResponse>(FName(TEXT("ProfilesSetEntityProfilePolicyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesSetEntityProfilePolicyResponse;
	struct Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesSetEntityProfilePolicyResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesSetEntityProfilePolicyResponse" },
		{ "ModuleRelativePath", "Public/ProfilesSetEntityProfilePolicyResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesSetEntityProfilePolicyResponse, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::NewProp_Permissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesSetEntityProfilePolicyResponse",
		sizeof(FProfilesSetEntityProfilePolicyResponse),
		alignof(FProfilesSetEntityProfilePolicyResponse),
		Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesSetEntityProfilePolicyResponse"), sizeof(FProfilesSetEntityProfilePolicyResponse), Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesSetEntityProfilePolicyResponse_Hash() { return 1108478733U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
