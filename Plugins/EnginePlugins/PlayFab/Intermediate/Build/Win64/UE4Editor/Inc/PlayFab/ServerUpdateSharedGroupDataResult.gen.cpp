// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerUpdateSharedGroupDataResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerUpdateSharedGroupDataResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerUpdateSharedGroupDataResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerUpdateSharedGroupDataResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerUpdateSharedGroupDataResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerUpdateSharedGroupDataResult"), sizeof(FServerUpdateSharedGroupDataResult), Get_Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerUpdateSharedGroupDataResult>()
{
	return FServerUpdateSharedGroupDataResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerUpdateSharedGroupDataResult(FServerUpdateSharedGroupDataResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerUpdateSharedGroupDataResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateSharedGroupDataResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateSharedGroupDataResult()
	{
		UScriptStruct::DeferCppStructOps<FServerUpdateSharedGroupDataResult>(FName(TEXT("ServerUpdateSharedGroupDataResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerUpdateSharedGroupDataResult;
	struct Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerUpdateSharedGroupDataResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerUpdateSharedGroupDataResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerUpdateSharedGroupDataResult",
		sizeof(FServerUpdateSharedGroupDataResult),
		alignof(FServerUpdateSharedGroupDataResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerUpdateSharedGroupDataResult"), sizeof(FServerUpdateSharedGroupDataResult), Get_Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerUpdateSharedGroupDataResult_Hash() { return 1034953003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
