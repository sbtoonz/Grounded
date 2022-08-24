// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminAddLocalizedNewsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminAddLocalizedNewsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminAddLocalizedNewsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminAddLocalizedNewsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminAddLocalizedNewsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminAddLocalizedNewsResult"), sizeof(FAdminAddLocalizedNewsResult), Get_Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminAddLocalizedNewsResult>()
{
	return FAdminAddLocalizedNewsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminAddLocalizedNewsResult(FAdminAddLocalizedNewsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminAddLocalizedNewsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddLocalizedNewsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminAddLocalizedNewsResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminAddLocalizedNewsResult>(FName(TEXT("AdminAddLocalizedNewsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminAddLocalizedNewsResult;
	struct Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminAddLocalizedNewsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminAddLocalizedNewsResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminAddLocalizedNewsResult",
		sizeof(FAdminAddLocalizedNewsResult),
		alignof(FAdminAddLocalizedNewsResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminAddLocalizedNewsResult"), sizeof(FAdminAddLocalizedNewsResult), Get_Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminAddLocalizedNewsResult_Hash() { return 3415818093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
