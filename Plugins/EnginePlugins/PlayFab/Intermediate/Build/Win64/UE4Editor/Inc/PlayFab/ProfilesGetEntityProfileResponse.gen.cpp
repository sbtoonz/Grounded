// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ProfilesGetEntityProfileResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfilesGetEntityProfileResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FProfilesGetEntityProfileResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FProfilesGetEntityProfileResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FProfilesGetEntityProfileResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("ProfilesGetEntityProfileResponse"), sizeof(FProfilesGetEntityProfileResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FProfilesGetEntityProfileResponse>()
{
	return FProfilesGetEntityProfileResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfilesGetEntityProfileResponse(FProfilesGetEntityProfileResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ProfilesGetEntityProfileResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse()
	{
		UScriptStruct::DeferCppStructOps<FProfilesGetEntityProfileResponse>(FName(TEXT("ProfilesGetEntityProfileResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFProfilesGetEntityProfileResponse;
	struct Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfileResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfilesGetEntityProfileResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ProfilesGetEntityProfileResponse" },
		{ "ModuleRelativePath", "Public/ProfilesGetEntityProfileResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfilesGetEntityProfileResponse, Profile), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::NewProp_Profile,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ProfilesGetEntityProfileResponse",
		sizeof(FProfilesGetEntityProfileResponse),
		alignof(FProfilesGetEntityProfileResponse),
		Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfilesGetEntityProfileResponse"), sizeof(FProfilesGetEntityProfileResponse), Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfilesGetEntityProfileResponse_Hash() { return 3516076417U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
