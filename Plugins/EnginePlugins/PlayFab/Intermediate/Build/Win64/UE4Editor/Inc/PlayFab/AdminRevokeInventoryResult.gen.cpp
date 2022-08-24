// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRevokeInventoryResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRevokeInventoryResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeInventoryResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRevokeInventoryResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminRevokeInventoryResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminRevokeInventoryResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRevokeInventoryResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRevokeInventoryResult"), sizeof(FAdminRevokeInventoryResult), Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRevokeInventoryResult>()
{
	return FAdminRevokeInventoryResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRevokeInventoryResult(FAdminRevokeInventoryResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRevokeInventoryResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminRevokeInventoryResult>(FName(TEXT("AdminRevokeInventoryResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRevokeInventoryResult;
	struct Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRevokeInventoryResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRevokeInventoryResult>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminRevokeInventoryResult",
		sizeof(FAdminRevokeInventoryResult),
		alignof(FAdminRevokeInventoryResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRevokeInventoryResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRevokeInventoryResult"), sizeof(FAdminRevokeInventoryResult), Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRevokeInventoryResult_Hash() { return 921796858U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
