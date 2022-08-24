// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetAllSegmentsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetAllSegmentsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetAllSegmentsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetAllSegmentsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetAllSegmentsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetAllSegmentsRequest"), sizeof(FServerGetAllSegmentsRequest), Get_Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetAllSegmentsRequest>()
{
	return FServerGetAllSegmentsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetAllSegmentsRequest(FServerGetAllSegmentsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetAllSegmentsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetAllSegmentsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetAllSegmentsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetAllSegmentsRequest>(FName(TEXT("ServerGetAllSegmentsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetAllSegmentsRequest;
	struct Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetAllSegmentsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetAllSegmentsRequest>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetAllSegmentsRequest",
		sizeof(FServerGetAllSegmentsRequest),
		alignof(FServerGetAllSegmentsRequest),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetAllSegmentsRequest"), sizeof(FServerGetAllSegmentsRequest), Get_Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetAllSegmentsRequest_Hash() { return 3227693965U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
