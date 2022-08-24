// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSubtractCharacterVirtualCurrencyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSubtractCharacterVirtualCurrencyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSubtractCharacterVirtualCurrencyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSubtractCharacterVirtualCurrencyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSubtractCharacterVirtualCurrencyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSubtractCharacterVirtualCurrencyRequest"), sizeof(FServerSubtractCharacterVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSubtractCharacterVirtualCurrencyRequest>()
{
	return FServerSubtractCharacterVirtualCurrencyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest(FServerSubtractCharacterVirtualCurrencyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSubtractCharacterVirtualCurrencyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSubtractCharacterVirtualCurrencyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSubtractCharacterVirtualCurrencyRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSubtractCharacterVirtualCurrencyRequest>(FName(TEXT("ServerSubtractCharacterVirtualCurrencyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSubtractCharacterVirtualCurrencyRequest;
	struct Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterId;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSubtractCharacterVirtualCurrencyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSubtractCharacterVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSubtractCharacterVirtualCurrencyRequest, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CharacterId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSubtractCharacterVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CharacterId = { "CharacterId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSubtractCharacterVirtualCurrencyRequest, CharacterId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CharacterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CharacterId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSubtractCharacterVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSubtractCharacterVirtualCurrencyRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSubtractCharacterVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSubtractCharacterVirtualCurrencyRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSubtractCharacterVirtualCurrencyRequest" },
		{ "ModuleRelativePath", "Public/ServerSubtractCharacterVirtualCurrencyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency = { "VirtualCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSubtractCharacterVirtualCurrencyRequest, VirtualCurrency), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CharacterId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::NewProp_VirtualCurrency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSubtractCharacterVirtualCurrencyRequest",
		sizeof(FServerSubtractCharacterVirtualCurrencyRequest),
		alignof(FServerSubtractCharacterVirtualCurrencyRequest),
		Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSubtractCharacterVirtualCurrencyRequest"), sizeof(FServerSubtractCharacterVirtualCurrencyRequest), Get_Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSubtractCharacterVirtualCurrencyRequest_Hash() { return 768894215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
