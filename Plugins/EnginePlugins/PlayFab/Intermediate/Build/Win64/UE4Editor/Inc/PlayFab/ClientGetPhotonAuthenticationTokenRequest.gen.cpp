// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPhotonAuthenticationTokenRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPhotonAuthenticationTokenRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPhotonAuthenticationTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPhotonAuthenticationTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPhotonAuthenticationTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPhotonAuthenticationTokenRequest"), sizeof(FClientGetPhotonAuthenticationTokenRequest), Get_Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPhotonAuthenticationTokenRequest>()
{
	return FClientGetPhotonAuthenticationTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest(FClientGetPhotonAuthenticationTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPhotonAuthenticationTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPhotonAuthenticationTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPhotonAuthenticationTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPhotonAuthenticationTokenRequest>(FName(TEXT("ClientGetPhotonAuthenticationTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPhotonAuthenticationTokenRequest;
	struct Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhotonApplicationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PhotonApplicationId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPhotonAuthenticationTokenRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPhotonAuthenticationTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewProp_PhotonApplicationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPhotonAuthenticationTokenRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPhotonAuthenticationTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewProp_PhotonApplicationId = { "PhotonApplicationId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPhotonAuthenticationTokenRequest, PhotonApplicationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewProp_PhotonApplicationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewProp_PhotonApplicationId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::NewProp_PhotonApplicationId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPhotonAuthenticationTokenRequest",
		sizeof(FClientGetPhotonAuthenticationTokenRequest),
		alignof(FClientGetPhotonAuthenticationTokenRequest),
		Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPhotonAuthenticationTokenRequest"), sizeof(FClientGetPhotonAuthenticationTokenRequest), Get_Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPhotonAuthenticationTokenRequest_Hash() { return 2489012505U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
