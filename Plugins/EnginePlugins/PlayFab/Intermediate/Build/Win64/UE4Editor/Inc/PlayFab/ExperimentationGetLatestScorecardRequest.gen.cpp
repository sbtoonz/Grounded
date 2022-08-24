// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationGetLatestScorecardRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationGetLatestScorecardRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FExperimentationGetLatestScorecardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FExperimentationGetLatestScorecardRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardRequest"), sizeof(FExperimentationGetLatestScorecardRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardRequest>()
{
	return FExperimentationGetLatestScorecardRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetLatestScorecardRequest(FExperimentationGetLatestScorecardRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetLatestScorecardRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetLatestScorecardRequest>(FName(TEXT("ExperimentationGetLatestScorecardRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardRequest;
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperimentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExperimentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationGetLatestScorecardRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationGetLatestScorecardRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationGetLatestScorecardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationGetLatestScorecardRequest" },
		{ "ModuleRelativePath", "Public/ExperimentationGetLatestScorecardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId = { "ExperimentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardRequest, ExperimentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::NewProp_ExperimentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardRequest",
		sizeof(FExperimentationGetLatestScorecardRequest),
		alignof(FExperimentationGetLatestScorecardRequest),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetLatestScorecardRequest"), sizeof(FExperimentationGetLatestScorecardRequest), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardRequest_Hash() { return 1938351816U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
