// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/InsightsInsightsGetPendingOperationsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInsightsInsightsGetPendingOperationsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FInsightsInsightsGetPendingOperationsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FInsightsInsightsGetPendingOperationsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FInsightsInsightsGetPendingOperationsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("InsightsInsightsGetPendingOperationsResponse"), sizeof(FInsightsInsightsGetPendingOperationsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FInsightsInsightsGetPendingOperationsResponse>()
{
	return FInsightsInsightsGetPendingOperationsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse(FInsightsInsightsGetPendingOperationsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("InsightsInsightsGetPendingOperationsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse()
	{
		UScriptStruct::DeferCppStructOps<FInsightsInsightsGetPendingOperationsResponse>(FName(TEXT("InsightsInsightsGetPendingOperationsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFInsightsInsightsGetPendingOperationsResponse;
	struct Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingOperations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingOperations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingOperations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetPendingOperationsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInsightsInsightsGetPendingOperationsResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner = { "PendingOperations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "InsightsInsightsGetPendingOperationsResponse" },
		{ "ModuleRelativePath", "Public/InsightsInsightsGetPendingOperationsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations = { "PendingOperations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInsightsInsightsGetPendingOperationsResponse, PendingOperations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::NewProp_PendingOperations,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"InsightsInsightsGetPendingOperationsResponse",
		sizeof(FInsightsInsightsGetPendingOperationsResponse),
		alignof(FInsightsInsightsGetPendingOperationsResponse),
		Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InsightsInsightsGetPendingOperationsResponse"), sizeof(FInsightsInsightsGetPendingOperationsResponse), Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInsightsInsightsGetPendingOperationsResponse_Hash() { return 3347197143U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
