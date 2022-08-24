// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerMoveItemToUserFromCharacterResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerMoveItemToUserFromCharacterResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerMoveItemToUserFromCharacterResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerMoveItemToUserFromCharacterResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerMoveItemToUserFromCharacterResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerMoveItemToUserFromCharacterResult"), sizeof(FServerMoveItemToUserFromCharacterResult), Get_Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerMoveItemToUserFromCharacterResult>()
{
	return FServerMoveItemToUserFromCharacterResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerMoveItemToUserFromCharacterResult(FServerMoveItemToUserFromCharacterResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerMoveItemToUserFromCharacterResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToUserFromCharacterResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToUserFromCharacterResult()
	{
		UScriptStruct::DeferCppStructOps<FServerMoveItemToUserFromCharacterResult>(FName(TEXT("ServerMoveItemToUserFromCharacterResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerMoveItemToUserFromCharacterResult;
	struct Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerMoveItemToUserFromCharacterResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerMoveItemToUserFromCharacterResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerMoveItemToUserFromCharacterResult",
		sizeof(FServerMoveItemToUserFromCharacterResult),
		alignof(FServerMoveItemToUserFromCharacterResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerMoveItemToUserFromCharacterResult"), sizeof(FServerMoveItemToUserFromCharacterResult), Get_Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerMoveItemToUserFromCharacterResult_Hash() { return 3746077572U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
