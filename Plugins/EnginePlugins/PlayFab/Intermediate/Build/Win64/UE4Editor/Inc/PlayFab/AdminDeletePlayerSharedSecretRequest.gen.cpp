// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeletePlayerSharedSecretRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeletePlayerSharedSecretRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeletePlayerSharedSecretRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminDeletePlayerSharedSecretRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminDeletePlayerSharedSecretRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeletePlayerSharedSecretRequest"), sizeof(FAdminDeletePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeletePlayerSharedSecretRequest>()
{
	return FAdminDeletePlayerSharedSecretRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest(FAdminDeletePlayerSharedSecretRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeletePlayerSharedSecretRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeletePlayerSharedSecretRequest>(FName(TEXT("AdminDeletePlayerSharedSecretRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretRequest;
	struct Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecretKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeletePlayerSharedSecretRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeletePlayerSharedSecretRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeletePlayerSharedSecretRequest" },
		{ "ModuleRelativePath", "Public/AdminDeletePlayerSharedSecretRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewProp_SecretKey = { "SecretKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeletePlayerSharedSecretRequest, SecretKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewProp_SecretKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::NewProp_SecretKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminDeletePlayerSharedSecretRequest",
		sizeof(FAdminDeletePlayerSharedSecretRequest),
		alignof(FAdminDeletePlayerSharedSecretRequest),
		Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeletePlayerSharedSecretRequest"), sizeof(FAdminDeletePlayerSharedSecretRequest), Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretRequest_Hash() { return 3429677389U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif