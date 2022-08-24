// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientSetPlayerSecretResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientSetPlayerSecretResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientSetPlayerSecretResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientSetPlayerSecretResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientSetPlayerSecretResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientSetPlayerSecretResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientSetPlayerSecretResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientSetPlayerSecretResult"), sizeof(FClientSetPlayerSecretResult), Get_Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientSetPlayerSecretResult>()
{
	return FClientSetPlayerSecretResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientSetPlayerSecretResult(FClientSetPlayerSecretResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientSetPlayerSecretResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientSetPlayerSecretResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientSetPlayerSecretResult()
	{
		UScriptStruct::DeferCppStructOps<FClientSetPlayerSecretResult>(FName(TEXT("ClientSetPlayerSecretResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientSetPlayerSecretResult;
	struct Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientSetPlayerSecretResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientSetPlayerSecretResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientSetPlayerSecretResult",
		sizeof(FClientSetPlayerSecretResult),
		alignof(FClientSetPlayerSecretResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientSetPlayerSecretResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientSetPlayerSecretResult"), sizeof(FClientSetPlayerSecretResult), Get_Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientSetPlayerSecretResult_Hash() { return 131758156U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
