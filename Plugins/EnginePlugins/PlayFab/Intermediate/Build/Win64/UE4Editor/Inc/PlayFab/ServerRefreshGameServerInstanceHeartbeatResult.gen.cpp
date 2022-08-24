// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRefreshGameServerInstanceHeartbeatResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRefreshGameServerInstanceHeartbeatResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRefreshGameServerInstanceHeartbeatResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerRefreshGameServerInstanceHeartbeatResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerRefreshGameServerInstanceHeartbeatResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRefreshGameServerInstanceHeartbeatResult"), sizeof(FServerRefreshGameServerInstanceHeartbeatResult), Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRefreshGameServerInstanceHeartbeatResult>()
{
	return FServerRefreshGameServerInstanceHeartbeatResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult(FServerRefreshGameServerInstanceHeartbeatResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRefreshGameServerInstanceHeartbeatResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatResult()
	{
		UScriptStruct::DeferCppStructOps<FServerRefreshGameServerInstanceHeartbeatResult>(FName(TEXT("ServerRefreshGameServerInstanceHeartbeatResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRefreshGameServerInstanceHeartbeatResult;
	struct Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRefreshGameServerInstanceHeartbeatResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRefreshGameServerInstanceHeartbeatResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerRefreshGameServerInstanceHeartbeatResult",
		sizeof(FServerRefreshGameServerInstanceHeartbeatResult),
		alignof(FServerRefreshGameServerInstanceHeartbeatResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRefreshGameServerInstanceHeartbeatResult"), sizeof(FServerRefreshGameServerInstanceHeartbeatResult), Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRefreshGameServerInstanceHeartbeatResult_Hash() { return 3491605855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
