// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeleteTitleRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeleteTitleRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteTitleRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeleteTitleRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminDeleteTitleRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminDeleteTitleRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeleteTitleRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeleteTitleRequest"), sizeof(FAdminDeleteTitleRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeleteTitleRequest>()
{
	return FAdminDeleteTitleRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeleteTitleRequest(FAdminDeleteTitleRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeleteTitleRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTitleRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTitleRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeleteTitleRequest>(FName(TEXT("AdminDeleteTitleRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteTitleRequest;
	struct Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeleteTitleRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeleteTitleRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminDeleteTitleRequest",
		sizeof(FAdminDeleteTitleRequest),
		alignof(FAdminDeleteTitleRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteTitleRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeleteTitleRequest"), sizeof(FAdminDeleteTitleRequest), Get_Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteTitleRequest_Hash() { return 607492020U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
