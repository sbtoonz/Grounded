// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRewardAdActivityRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRewardAdActivityRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRewardAdActivityRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRewardAdActivityRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRewardAdActivityRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRewardAdActivityRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRewardAdActivityRequest"), sizeof(FClientRewardAdActivityRequest), Get_Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRewardAdActivityRequest>()
{
	return FClientRewardAdActivityRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRewardAdActivityRequest(FClientRewardAdActivityRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRewardAdActivityRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRewardAdActivityRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRewardAdActivityRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRewardAdActivityRequest>(FName(TEXT("ClientRewardAdActivityRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRewardAdActivityRequest;
	struct Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlacementId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRewardAdActivityRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRewardAdActivityRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRewardAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientRewardAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRewardAdActivityRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_PlacementId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRewardAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientRewardAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_PlacementId = { "PlacementId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRewardAdActivityRequest, PlacementId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_PlacementId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_PlacementId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_RewardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRewardAdActivityRequest" },
		{ "ModuleRelativePath", "Public/ClientRewardAdActivityRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRewardAdActivityRequest, RewardId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_RewardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_RewardId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_PlacementId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::NewProp_RewardId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRewardAdActivityRequest",
		sizeof(FClientRewardAdActivityRequest),
		alignof(FClientRewardAdActivityRequest),
		Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRewardAdActivityRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRewardAdActivityRequest"), sizeof(FClientRewardAdActivityRequest), Get_Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRewardAdActivityRequest_Hash() { return 2048110119U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
