// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePlayerSharedSecretResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePlayerSharedSecretResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePlayerSharedSecretResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminUpdatePlayerSharedSecretResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminUpdatePlayerSharedSecretResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePlayerSharedSecretResult"), sizeof(FAdminUpdatePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePlayerSharedSecretResult>()
{
	return FAdminUpdatePlayerSharedSecretResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult(FAdminUpdatePlayerSharedSecretResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePlayerSharedSecretResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePlayerSharedSecretResult>(FName(TEXT("AdminUpdatePlayerSharedSecretResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerSharedSecretResult;
	struct Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerSharedSecretResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePlayerSharedSecretResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminUpdatePlayerSharedSecretResult",
		sizeof(FAdminUpdatePlayerSharedSecretResult),
		alignof(FAdminUpdatePlayerSharedSecretResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePlayerSharedSecretResult"), sizeof(FAdminUpdatePlayerSharedSecretResult), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerSharedSecretResult_Hash() { return 2396708566U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
