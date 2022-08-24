// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationCreateExclusionGroupResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationCreateExclusionGroupResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationCreateExclusionGroupResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationCreateExclusionGroupResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationCreateExclusionGroupResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationCreateExclusionGroupResult"), sizeof(FExperimentationCreateExclusionGroupResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationCreateExclusionGroupResult>()
{
	return FExperimentationCreateExclusionGroupResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationCreateExclusionGroupResult(FExperimentationCreateExclusionGroupResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationCreateExclusionGroupResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationCreateExclusionGroupResult>(FName(TEXT("ExperimentationCreateExclusionGroupResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationCreateExclusionGroupResult;
	struct Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExclusionGroupId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExclusionGroupId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationCreateExclusionGroupResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationCreateExclusionGroupResult" },
		{ "ModuleRelativePath", "Public/ExperimentationCreateExclusionGroupResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId = { "ExclusionGroupId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationCreateExclusionGroupResult, ExclusionGroupId), METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::NewProp_ExclusionGroupId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationCreateExclusionGroupResult",
		sizeof(FExperimentationCreateExclusionGroupResult),
		alignof(FExperimentationCreateExclusionGroupResult),
		Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationCreateExclusionGroupResult"), sizeof(FExperimentationCreateExclusionGroupResult), Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationCreateExclusionGroupResult_Hash() { return 1956176642U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
