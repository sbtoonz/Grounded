// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminListOpenIdConnectionRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminListOpenIdConnectionRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminListOpenIdConnectionRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminListOpenIdConnectionRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminListOpenIdConnectionRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminListOpenIdConnectionRequest"), sizeof(FAdminListOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminListOpenIdConnectionRequest>()
{
	return FAdminListOpenIdConnectionRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminListOpenIdConnectionRequest(FAdminListOpenIdConnectionRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminListOpenIdConnectionRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminListOpenIdConnectionRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminListOpenIdConnectionRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminListOpenIdConnectionRequest>(FName(TEXT("AdminListOpenIdConnectionRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminListOpenIdConnectionRequest;
	struct Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminListOpenIdConnectionRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminListOpenIdConnectionRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminListOpenIdConnectionRequest",
		sizeof(FAdminListOpenIdConnectionRequest),
		alignof(FAdminListOpenIdConnectionRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminListOpenIdConnectionRequest"), sizeof(FAdminListOpenIdConnectionRequest), Get_Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminListOpenIdConnectionRequest_Hash() { return 4146611890U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
