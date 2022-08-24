// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientCreateSharedGroupResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientCreateSharedGroupResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientCreateSharedGroupResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientCreateSharedGroupResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientCreateSharedGroupResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientCreateSharedGroupResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientCreateSharedGroupResult"), sizeof(FClientCreateSharedGroupResult), Get_Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientCreateSharedGroupResult>()
{
	return FClientCreateSharedGroupResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientCreateSharedGroupResult(FClientCreateSharedGroupResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientCreateSharedGroupResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientCreateSharedGroupResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientCreateSharedGroupResult()
	{
		UScriptStruct::DeferCppStructOps<FClientCreateSharedGroupResult>(FName(TEXT("ClientCreateSharedGroupResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientCreateSharedGroupResult;
	struct Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SharedGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientCreateSharedGroupResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientCreateSharedGroupResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewProp_SharedGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientCreateSharedGroupResult" },
		{ "ModuleRelativePath", "Public/ClientCreateSharedGroupResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewProp_SharedGroupId = { "SharedGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientCreateSharedGroupResult, SharedGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewProp_SharedGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewProp_SharedGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::NewProp_SharedGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientCreateSharedGroupResult",
		sizeof(FClientCreateSharedGroupResult),
		alignof(FClientCreateSharedGroupResult),
		Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientCreateSharedGroupResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientCreateSharedGroupResult"), sizeof(FClientCreateSharedGroupResult), Get_Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientCreateSharedGroupResult_Hash() { return 2513514444U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif