// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsSetStorageRetentionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsSetStorageRetentionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsSetStorageRetentionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FInsightsInsightsSetStorageRetentionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FInsightsInsightsSetStorageRetentionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsSetStorageRetentionRequest"), sizeof(FInsightsInsightsSetStorageRetentionRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsSetStorageRetentionRequest>()
{
	return FInsightsInsightsSetStorageRetentionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest(FInsightsInsightsSetStorageRetentionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsSetStorageRetentionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsSetStorageRetentionRequest>(FName(TEXT("InsightsInsightsSetStorageRetentionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsSetStorageRetentionRequest;
	struct Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsSetStorageRetentionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsSetStorageRetentionRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsSetStorageRetentionRequest" },
		{ "ModuleRelativePath", "Public/InsightsInsightsSetStorageRetentionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsSetStorageRetentionRequest" },
		{ "ModuleRelativePath", "Public/InsightsInsightsSetStorageRetentionRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsSetStorageRetentionRequest, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::NewProp_RetentionDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"InsightsInsightsSetStorageRetentionRequest",
		sizeof(FInsightsInsightsSetStorageRetentionRequest),
		alignof(FInsightsInsightsSetStorageRetentionRequest),
		Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsSetStorageRetentionRequest"), sizeof(FInsightsInsightsSetStorageRetentionRequest), Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsSetStorageRetentionRequest_Hash() { return 2188437540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
