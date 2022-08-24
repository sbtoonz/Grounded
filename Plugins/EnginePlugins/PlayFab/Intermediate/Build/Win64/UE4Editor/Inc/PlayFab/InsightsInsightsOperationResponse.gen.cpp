// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsOperationResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsOperationResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsOperationResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsOperationResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsOperationResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsOperationResponse"), sizeof(FInsightsInsightsOperationResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsOperationResponse>()
{
	return FInsightsInsightsOperationResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsOperationResponse(FInsightsInsightsOperationResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsOperationResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsOperationResponse>(FName(TEXT("InsightsInsightsOperationResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsOperationResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsOperationResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsOperationResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsOperationResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsOperationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsOperationResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsOperationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId = { "OperationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsOperationResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsOperationResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsOperationResponse, OperationType), METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::NewProp_OperationType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsOperationResponse",
		sizeof(FInsightsInsightsOperationResponse),
		alignof(FInsightsInsightsOperationResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsOperationResponse"), sizeof(FInsightsInsightsOperationResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsOperationResponse_Hash() { return 3711955536U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
