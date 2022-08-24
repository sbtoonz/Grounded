// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerAddUserVirtualCurrencyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerAddUserVirtualCurrencyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerAddUserVirtualCurrencyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerAddUserVirtualCurrencyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerAddUserVirtualCurrencyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerAddUserVirtualCurrencyRequest"), sizeof(FServerAddUserVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerAddUserVirtualCurrencyRequest>()
{
	return FServerAddUserVirtualCurrencyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerAddUserVirtualCurrencyRequest(FServerAddUserVirtualCurrencyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerAddUserVirtualCurrencyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerAddUserVirtualCurrencyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerAddUserVirtualCurrencyRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerAddUserVirtualCurrencyRequest>(FName(TEXT("ServerAddUserVirtualCurrencyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerAddUserVirtualCurrencyRequest;
	struct Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerAddUserVirtualCurrencyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerAddUserVirtualCurrencyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerAddUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddUserVirtualCurrencyRequest, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerAddUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddUserVirtualCurrencyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerAddUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddUserVirtualCurrencyRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerAddUserVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerAddUserVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerAddUserVirtualCurrencyRequest, VirtualCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerAddUserVirtualCurrencyRequest",
		sizeof(FServerAddUserVirtualCurrencyRequest),
		alignof(FServerAddUserVirtualCurrencyRequest),
		Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerAddUserVirtualCurrencyRequest"), sizeof(FServerAddUserVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerAddUserVirtualCurrencyRequest_Hash() { return 93225128U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
