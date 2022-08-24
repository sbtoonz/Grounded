// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientUnlinkFacebookInstantGamesIdRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientUnlinkFacebookInstantGamesIdRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientUnlinkFacebookInstantGamesIdRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientUnlinkFacebookInstantGamesIdRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientUnlinkFacebookInstantGamesIdRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientUnlinkFacebookInstantGamesIdRequest"), sizeof(FClientUnlinkFacebookInstantGamesIdRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientUnlinkFacebookInstantGamesIdRequest>()
{
	return FClientUnlinkFacebookInstantGamesIdRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest(FClientUnlinkFacebookInstantGamesIdRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientUnlinkFacebookInstantGamesIdRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookInstantGamesIdRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookInstantGamesIdRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientUnlinkFacebookInstantGamesIdRequest>(FName(TEXT("ClientUnlinkFacebookInstantGamesIdRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientUnlinkFacebookInstantGamesIdRequest;
	struct Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookInstantGamesId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookInstantGamesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientUnlinkFacebookInstantGamesIdRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientUnlinkFacebookInstantGamesIdRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkFacebookInstantGamesIdRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientUnlinkFacebookInstantGamesIdRequest" },
		{ "ModuleRelativePath", "Public/ClientUnlinkFacebookInstantGamesIdRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesId = { "FacebookInstantGamesId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientUnlinkFacebookInstantGamesIdRequest, FacebookInstantGamesId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::NewProp_FacebookInstantGamesId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientUnlinkFacebookInstantGamesIdRequest",
		sizeof(FClientUnlinkFacebookInstantGamesIdRequest),
		alignof(FClientUnlinkFacebookInstantGamesIdRequest),
		Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientUnlinkFacebookInstantGamesIdRequest"), sizeof(FClientUnlinkFacebookInstantGamesIdRequest), Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientUnlinkFacebookInstantGamesIdRequest_Hash() { return 2451478252U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
