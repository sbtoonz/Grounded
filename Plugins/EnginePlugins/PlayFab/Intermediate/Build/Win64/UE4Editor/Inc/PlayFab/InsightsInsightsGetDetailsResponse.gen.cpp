// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsGetDetailsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsGetDetailsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsGetDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetDetailsResponse"), sizeof(FInsightsInsightsGetDetailsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetDetailsResponse>()
{
	return FInsightsInsightsGetDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetDetailsResponse(FInsightsInsightsGetDetailsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetDetailsResponse>(FName(TEXT("InsightsInsightsGetDetailsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetDetailsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataUsageMb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DataUsageMb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Limits_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Limits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerformanceLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerformanceLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetentionDays_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RetentionDays;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetDetailsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb = { "DataUsageMb", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, DataUsageMb), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits = { "Limits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, Limits), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel = { "PerformanceLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, PerformanceLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetDetailsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays = { "RetentionDays", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetDetailsResponse, RetentionDays), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_DataUsageMb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_Limits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PendingOperations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_PerformanceLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::NewProp_RetentionDays,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetDetailsResponse",
		sizeof(FInsightsInsightsGetDetailsResponse),
		alignof(FInsightsInsightsGetDetailsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetDetailsResponse"), sizeof(FInsightsInsightsGetDetailsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetDetailsResponse_Hash() { return 217270093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
