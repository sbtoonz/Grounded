// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientRefreshPSNAuthTokenRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientRefreshPSNAuthTokenRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientRefreshPSNAuthTokenRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientRefreshPSNAuthTokenRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientRefreshPSNAuthTokenRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientRefreshPSNAuthTokenRequest"), sizeof(FClientRefreshPSNAuthTokenRequest), Get_Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientRefreshPSNAuthTokenRequest>()
{
	return FClientRefreshPSNAuthTokenRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientRefreshPSNAuthTokenRequest(FClientRefreshPSNAuthTokenRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientRefreshPSNAuthTokenRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientRefreshPSNAuthTokenRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientRefreshPSNAuthTokenRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientRefreshPSNAuthTokenRequest>(FName(TEXT("ClientRefreshPSNAuthTokenRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientRefreshPSNAuthTokenRequest;
	struct Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssuerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IssuerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedirectUri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RedirectUri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientRefreshPSNAuthTokenRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientRefreshPSNAuthTokenRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_AuthCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRefreshPSNAuthTokenRequest" },
		{ "ModuleRelativePath", "Public/ClientRefreshPSNAuthTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_AuthCode = { "AuthCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRefreshPSNAuthTokenRequest, AuthCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_AuthCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_AuthCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_IssuerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRefreshPSNAuthTokenRequest" },
		{ "ModuleRelativePath", "Public/ClientRefreshPSNAuthTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_IssuerId = { "IssuerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRefreshPSNAuthTokenRequest, IssuerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_IssuerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_IssuerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_RedirectUri_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientRefreshPSNAuthTokenRequest" },
		{ "ModuleRelativePath", "Public/ClientRefreshPSNAuthTokenRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_RedirectUri = { "RedirectUri", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientRefreshPSNAuthTokenRequest, RedirectUri), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_RedirectUri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_RedirectUri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_AuthCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_IssuerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::NewProp_RedirectUri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientRefreshPSNAuthTokenRequest",
		sizeof(FClientRefreshPSNAuthTokenRequest),
		alignof(FClientRefreshPSNAuthTokenRequest),
		Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientRefreshPSNAuthTokenRequest"), sizeof(FClientRefreshPSNAuthTokenRequest), Get_Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientRefreshPSNAuthTokenRequest_Hash() { return 2950565439U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
