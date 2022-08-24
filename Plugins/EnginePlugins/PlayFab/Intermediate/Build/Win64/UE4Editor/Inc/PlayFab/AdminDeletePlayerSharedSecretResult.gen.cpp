// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeletePlayerSharedSecretResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeletePlayerSharedSecretResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeletePlayerSharedSecretResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminDeletePlayerSharedSecretResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminDeletePlayerSharedSecretResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeletePlayerSharedSecretResult"), sizeof(FAdminDeletePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeletePlayerSharedSecretResult>()
{
	return FAdminDeletePlayerSharedSecretResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeletePlayerSharedSecretResult(FAdminDeletePlayerSharedSecretResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeletePlayerSharedSecretResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeletePlayerSharedSecretResult>(FName(TEXT("AdminDeletePlayerSharedSecretResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeletePlayerSharedSecretResult;
	struct Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeletePlayerSharedSecretResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeletePlayerSharedSecretResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminDeletePlayerSharedSecretResult",
		sizeof(FAdminDeletePlayerSharedSecretResult),
		alignof(FAdminDeletePlayerSharedSecretResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeletePlayerSharedSecretResult"), sizeof(FAdminDeletePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeletePlayerSharedSecretResult_Hash() { return 1355918730U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
