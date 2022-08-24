// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerSharedSecretsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerSharedSecretsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerSharedSecretsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetPlayerSharedSecretsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerSharedSecretsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerSharedSecretsRequest"), sizeof(FAdminGetPlayerSharedSecretsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerSharedSecretsRequest>()
{
	return FAdminGetPlayerSharedSecretsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest(FAdminGetPlayerSharedSecretsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerSharedSecretsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerSharedSecretsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerSharedSecretsRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerSharedSecretsRequest>(FName(TEXT("AdminGetPlayerSharedSecretsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerSharedSecretsRequest;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerSharedSecretsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerSharedSecretsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetPlayerSharedSecretsRequest",
		sizeof(FAdminGetPlayerSharedSecretsRequest),
		alignof(FAdminGetPlayerSharedSecretsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerSharedSecretsRequest"), sizeof(FAdminGetPlayerSharedSecretsRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerSharedSecretsRequest_Hash() { return 3751561667U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
