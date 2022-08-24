// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetTitlePublicKeyRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetTitlePublicKeyRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetTitlePublicKeyRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetTitlePublicKeyRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetTitlePublicKeyRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetTitlePublicKeyRequest"), sizeof(FClientGetTitlePublicKeyRequest), Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetTitlePublicKeyRequest>()
{
	return FClientGetTitlePublicKeyRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetTitlePublicKeyRequest(FClientGetTitlePublicKeyRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetTitlePublicKeyRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetTitlePublicKeyRequest>(FName(TEXT("ClientGetTitlePublicKeyRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetTitlePublicKeyRequest;
	struct Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleSharedSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleSharedSecret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetTitlePublicKeyRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetTitlePublicKeyRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewProp_TitleSharedSecret_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetTitlePublicKeyRequest" },
		{ "ModuleRelativePath", "Public/ClientGetTitlePublicKeyRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewProp_TitleSharedSecret = { "TitleSharedSecret", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetTitlePublicKeyRequest, TitleSharedSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewProp_TitleSharedSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewProp_TitleSharedSecret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::NewProp_TitleSharedSecret,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetTitlePublicKeyRequest",
		sizeof(FClientGetTitlePublicKeyRequest),
		alignof(FClientGetTitlePublicKeyRequest),
		Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetTitlePublicKeyRequest"), sizeof(FClientGetTitlePublicKeyRequest), Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetTitlePublicKeyRequest_Hash() { return 916809219U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
