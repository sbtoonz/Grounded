// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsGetOperationStatusResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsGetOperationStatusResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsGetOperationStatusResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetOperationStatusResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetOperationStatusResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetOperationStatusResponse"), sizeof(FInsightsInsightsGetOperationStatusResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetOperationStatusResponse>()
{
	return FInsightsInsightsGetOperationStatusResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse(FInsightsInsightsGetOperationStatusResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetOperationStatusResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetOperationStatusResponse>(FName(TEXT("InsightsInsightsGetOperationStatusResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetOperationStatusResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationCompletedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationCompletedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationLastUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationLastUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStartedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationStartedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OperationValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetOperationStatusResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime = { "OperationCompletedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationCompletedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated = { "OperationLastUpdated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationLastUpdated), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime = { "OperationStartedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationStartedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue = { "OperationValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, OperationValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetOperationStatusResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetOperationStatusResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetOperationStatusResponse, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationCompletedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationLastUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationStartedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_OperationValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetOperationStatusResponse",
		sizeof(FInsightsInsightsGetOperationStatusResponse),
		alignof(FInsightsInsightsGetOperationStatusResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetOperationStatusResponse"), sizeof(FInsightsInsightsGetOperationStatusResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetOperationStatusResponse_Hash() { return 3375161695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
