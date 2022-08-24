// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsGetLimitsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsGetLimitsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsGetLimitsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetLimitsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetLimitsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetLimitsResponse"), sizeof(FInsightsInsightsGetLimitsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetLimitsResponse>()
{
	return FInsightsInsightsGetLimitsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetLimitsResponse(FInsightsInsightsGetLimitsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetLimitsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetLimitsResponse>(FName(TEXT("InsightsInsightsGetLimitsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetLimitsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPerformanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPerformanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStorageRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultStorageRetentionDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageMaxRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageMaxRetentionDays;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageMinRetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StorageMinRetentionDays;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubMeters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubMeters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetLimitsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetLimitsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel = { "DefaultPerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultPerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetLimitsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays = { "DefaultStorageRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, DefaultStorageRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetLimitsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays = { "StorageMaxRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMaxRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetLimitsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays = { "StorageMinRetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, StorageMinRetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner = { "SubMeters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetLimitsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetLimitsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters = { "SubMeters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetLimitsResponse, SubMeters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultPerformanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_DefaultStorageRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMaxRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_StorageMinRetentionDays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::NewProp_SubMeters,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetLimitsResponse",
		sizeof(FInsightsInsightsGetLimitsResponse),
		alignof(FInsightsInsightsGetLimitsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetLimitsResponse"), sizeof(FInsightsInsightsGetLimitsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetLimitsResponse_Hash() { return 3344704293U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
