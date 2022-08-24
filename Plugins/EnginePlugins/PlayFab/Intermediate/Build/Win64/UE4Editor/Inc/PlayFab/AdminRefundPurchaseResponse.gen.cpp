// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRefundPurchaseResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRefundPurchaseResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRefundPurchaseResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminRefundPurchaseResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminRefundPurchaseResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRefundPurchaseResponse"), sizeof(FAdminRefundPurchaseResponse), Get_Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRefundPurchaseResponse>()
{
	return FAdminRefundPurchaseResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRefundPurchaseResponse(FAdminRefundPurchaseResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRefundPurchaseResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRefundPurchaseResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRefundPurchaseResponse()
	{
		UScriptStruct::DeferCppStructOps<FAdminRefundPurchaseResponse>(FName(TEXT("AdminRefundPurchaseResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRefundPurchaseResponse;
	struct Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PurchaseStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRefundPurchaseResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRefundPurchaseResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewProp_PurchaseStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRefundPurchaseResponse" },
		{ "ModuleRelativePath", "Public/AdminRefundPurchaseResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRefundPurchaseResponse, PurchaseStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewProp_PurchaseStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewProp_PurchaseStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::NewProp_PurchaseStatus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminRefundPurchaseResponse",
		sizeof(FAdminRefundPurchaseResponse),
		alignof(FAdminRefundPurchaseResponse),
		Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRefundPurchaseResponse"), sizeof(FAdminRefundPurchaseResponse), Get_Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRefundPurchaseResponse_Hash() { return 3216205205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
