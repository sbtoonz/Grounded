// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/BlueprintUserOnlineAccountResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintUserOnlineAccountResult() {}
// Cross Module References
	ONLINEMANAGER_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
// End Cross Module References
class UScriptStruct* FBlueprintUserOnlineAccountResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINEMANAGER_API uint32 Get_Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult, Z_Construct_UPackage__Script_OnlineManager(), TEXT("BlueprintUserOnlineAccountResult"), sizeof(FBlueprintUserOnlineAccountResult), Get_Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Hash());
	}
	return Singleton;
}
template<> ONLINEMANAGER_API UScriptStruct* StaticStruct<FBlueprintUserOnlineAccountResult>()
{
	return FBlueprintUserOnlineAccountResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlueprintUserOnlineAccountResult(FBlueprintUserOnlineAccountResult::StaticStruct, TEXT("/Script/OnlineManager"), TEXT("BlueprintUserOnlineAccountResult"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineManager_StaticRegisterNativesFBlueprintUserOnlineAccountResult
{
	FScriptStruct_OnlineManager_StaticRegisterNativesFBlueprintUserOnlineAccountResult()
	{
		UScriptStruct::DeferCppStructOps<FBlueprintUserOnlineAccountResult>(FName(TEXT("BlueprintUserOnlineAccountResult")));
	}
} ScriptStruct_OnlineManager_StaticRegisterNativesFBlueprintUserOnlineAccountResult;
	struct Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlueprintUserOnlineAccountResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintUserOnlineAccountResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
		nullptr,
		&NewStructOps,
		"BlueprintUserOnlineAccountResult",
		sizeof(FBlueprintUserOnlineAccountResult),
		alignof(FBlueprintUserOnlineAccountResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineManager();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlueprintUserOnlineAccountResult"), sizeof(FBlueprintUserOnlineAccountResult), Get_Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlueprintUserOnlineAccountResult_Hash() { return 2840441880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
