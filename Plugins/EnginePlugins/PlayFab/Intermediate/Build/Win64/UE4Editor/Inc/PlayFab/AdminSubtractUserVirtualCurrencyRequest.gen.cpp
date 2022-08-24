// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminSubtractUserVirtualCurrencyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminSubtractUserVirtualCurrencyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminSubtractUserVirtualCurrencyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminSubtractUserVirtualCurrencyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminSubtractUserVirtualCurrencyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminSubtractUserVirtualCurrencyRequest"), sizeof(FAdminSubtractUserVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminSubtractUserVirtualCurrencyRequest>()
{
	return FAdminSubtractUserVirtualCurrencyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest(FAdminSubtractUserVirtualCurrencyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminSubtractUserVirtualCurrencyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminSubtractUserVirtualCurrencyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminSubtractUserVirtualCurrencyRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminSubtractUserVirtualCurrencyRequest>(FName(TEXT("AdminSubtractUserVirtualCurrencyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminSubtractUserVirtualCurrencyRequest;
	struct Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VirtualCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VirtualCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminSubtractUserVirtualCurrencyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminSubtractUserVirtualCurrencyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSubtractUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/AdminSubtractUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSubtractUserVirtualCurrencyRequest, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSubtractUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/AdminSubtractUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSubtractUserVirtualCurrencyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSubtractUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/AdminSubtractUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSubtractUserVirtualCurrencyRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminSubtractUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/AdminSubtractUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminSubtractUserVirtualCurrencyRequest, VirtualCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminSubtractUserVirtualCurrencyRequest",
		sizeof(FAdminSubtractUserVirtualCurrencyRequest),
		alignof(FAdminSubtractUserVirtualCurrencyRequest),
		Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminSubtractUserVirtualCurrencyRequest"), sizeof(FAdminSubtractUserVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminSubtractUserVirtualCurrencyRequest_Hash() { return 4249604571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
