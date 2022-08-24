// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerEmptyResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerEmptyResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEmptyResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerEmptyResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerEmptyResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerEmptyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerEmptyResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerEmptyResponse"), sizeof(FMultiplayerEmptyResponse), Get_Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerEmptyResponse>()
{
	return FMultiplayerEmptyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerEmptyResponse(FMultiplayerEmptyResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerEmptyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEmptyResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEmptyResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerEmptyResponse>(FName(TEXT("MultiplayerEmptyResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerEmptyResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerEmptyResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerEmptyResponse>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerEmptyResponse",
		sizeof(FMultiplayerEmptyResponse),
		alignof(FMultiplayerEmptyResponse),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerEmptyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerEmptyResponse"), sizeof(FMultiplayerEmptyResponse), Get_Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerEmptyResponse_Hash() { return 59786782U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
