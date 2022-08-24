// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminListVirtualCurrencyTypesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminListVirtualCurrencyTypesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminListVirtualCurrencyTypesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminListVirtualCurrencyTypesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminListVirtualCurrencyTypesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminListVirtualCurrencyTypesRequest"), sizeof(FAdminListVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminListVirtualCurrencyTypesRequest>()
{
	return FAdminListVirtualCurrencyTypesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest(FAdminListVirtualCurrencyTypesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminListVirtualCurrencyTypesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminListVirtualCurrencyTypesRequest>(FName(TEXT("AdminListVirtualCurrencyTypesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminListVirtualCurrencyTypesRequest;
	struct Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminListVirtualCurrencyTypesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminListVirtualCurrencyTypesRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminListVirtualCurrencyTypesRequest",
		sizeof(FAdminListVirtualCurrencyTypesRequest),
		alignof(FAdminListVirtualCurrencyTypesRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminListVirtualCurrencyTypesRequest"), sizeof(FAdminListVirtualCurrencyTypesRequest), Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminListVirtualCurrencyTypesRequest_Hash() { return 3734012179U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
