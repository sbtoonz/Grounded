// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPaymentTokenRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPaymentTokenRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPaymentTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPaymentTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPaymentTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPaymentTokenRequest"), sizeof(FClientGetPaymentTokenRequest), Get_Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPaymentTokenRequest>()
{
	return FClientGetPaymentTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPaymentTokenRequest(FClientGetPaymentTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPaymentTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPaymentTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPaymentTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPaymentTokenRequest>(FName(TEXT("ClientGetPaymentTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPaymentTokenRequest;
	struct Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPaymentTokenRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPaymentTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewProp_TokenProvider_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPaymentTokenRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPaymentTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewProp_TokenProvider = { "TokenProvider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPaymentTokenRequest, TokenProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewProp_TokenProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewProp_TokenProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::NewProp_TokenProvider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPaymentTokenRequest",
		sizeof(FClientGetPaymentTokenRequest),
		alignof(FClientGetPaymentTokenRequest),
		Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPaymentTokenRequest"), sizeof(FClientGetPaymentTokenRequest), Get_Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPaymentTokenRequest_Hash() { return 1672354180U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
