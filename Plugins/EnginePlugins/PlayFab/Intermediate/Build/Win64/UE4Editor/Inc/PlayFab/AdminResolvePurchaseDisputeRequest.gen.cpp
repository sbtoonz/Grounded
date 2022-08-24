// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminResolvePurchaseDisputeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminResolvePurchaseDisputeRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EResolutionOutcome();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminResolvePurchaseDisputeRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminResolvePurchaseDisputeRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminResolvePurchaseDisputeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminResolvePurchaseDisputeRequest"), sizeof(FAdminResolvePurchaseDisputeRequest), Get_Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminResolvePurchaseDisputeRequest>()
{
	return FAdminResolvePurchaseDisputeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminResolvePurchaseDisputeRequest(FAdminResolvePurchaseDisputeRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminResolvePurchaseDisputeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminResolvePurchaseDisputeRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminResolvePurchaseDisputeRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminResolvePurchaseDisputeRequest>(FName(TEXT("AdminResolvePurchaseDisputeRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminResolvePurchaseDisputeRequest;
	struct Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outcome_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Outcome;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminResolvePurchaseDisputeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminResolvePurchaseDisputeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_OrderId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminResolvePurchaseDisputeRequest" },
		{ "ModuleRelativePath", "Public/AdminResolvePurchaseDisputeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_OrderId = { "OrderId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminResolvePurchaseDisputeRequest, OrderId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_OrderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_OrderId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminResolvePurchaseDisputeRequest" },
		{ "ModuleRelativePath", "Public/AdminResolvePurchaseDisputeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminResolvePurchaseDisputeRequest, Outcome), Z_Construct_UEnum_PlayFab_EResolutionOutcome, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminResolvePurchaseDisputeRequest" },
		{ "ModuleRelativePath", "Public/AdminResolvePurchaseDisputeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminResolvePurchaseDisputeRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Reason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminResolvePurchaseDisputeRequest" },
		{ "ModuleRelativePath", "Public/AdminResolvePurchaseDisputeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminResolvePurchaseDisputeRequest, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_OrderId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Outcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::NewProp_Reason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminResolvePurchaseDisputeRequest",
		sizeof(FAdminResolvePurchaseDisputeRequest),
		alignof(FAdminResolvePurchaseDisputeRequest),
		Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminResolvePurchaseDisputeRequest"), sizeof(FAdminResolvePurchaseDisputeRequest), Get_Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminResolvePurchaseDisputeRequest_Hash() { return 560662136U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
