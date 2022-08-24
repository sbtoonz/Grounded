// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientSendAccountRecoveryEmailResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSendAccountRecoveryEmailResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientSendAccountRecoveryEmailResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientSendAccountRecoveryEmailResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientSendAccountRecoveryEmailResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientSendAccountRecoveryEmailResult"), sizeof(FClientSendAccountRecoveryEmailResult), Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientSendAccountRecoveryEmailResult>()
{
	return FClientSendAccountRecoveryEmailResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientSendAccountRecoveryEmailResult(FClientSendAccountRecoveryEmailResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientSendAccountRecoveryEmailResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailResult()
	{
		UScriptStruct::DeferCppStructOps<FClientSendAccountRecoveryEmailResult>(FName(TEXT("ClientSendAccountRecoveryEmailResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientSendAccountRecoveryEmailResult;
	struct Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientSendAccountRecoveryEmailResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientSendAccountRecoveryEmailResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientSendAccountRecoveryEmailResult",
		sizeof(FClientSendAccountRecoveryEmailResult),
		alignof(FClientSendAccountRecoveryEmailResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientSendAccountRecoveryEmailResult"), sizeof(FClientSendAccountRecoveryEmailResult), Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientSendAccountRecoveryEmailResult_Hash() { return 1888312150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
