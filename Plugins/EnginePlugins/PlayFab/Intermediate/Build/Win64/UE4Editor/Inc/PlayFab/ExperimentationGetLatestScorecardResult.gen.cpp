// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ExperimentationGetLatestScorecardResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperimentationGetLatestScorecardResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FExperimentationGetLatestScorecardResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FExperimentationGetLatestScorecardResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FExperimentationGetLatestScorecardResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ExperimentationGetLatestScorecardResult"), sizeof(FExperimentationGetLatestScorecardResult), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FExperimentationGetLatestScorecardResult>()
{
	return FExperimentationGetLatestScorecardResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExperimentationGetLatestScorecardResult(FExperimentationGetLatestScorecardResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ExperimentationGetLatestScorecardResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult()
	{
		UScriptStruct::DeferCppStructOps<FExperimentationGetLatestScorecardResult>(FName(TEXT("ExperimentationGetLatestScorecardResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFExperimentationGetLatestScorecardResult;
	struct Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scorecard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Scorecard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExperimentationGetLatestScorecardResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExperimentationGetLatestScorecardResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ExperimentationGetLatestScorecardResult" },
		{ "ModuleRelativePath", "Public/ExperimentationGetLatestScorecardResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard = { "Scorecard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExperimentationGetLatestScorecardResult, Scorecard), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::NewProp_Scorecard,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ExperimentationGetLatestScorecardResult",
		sizeof(FExperimentationGetLatestScorecardResult),
		alignof(FExperimentationGetLatestScorecardResult),
		Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExperimentationGetLatestScorecardResult"), sizeof(FExperimentationGetLatestScorecardResult), Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExperimentationGetLatestScorecardResult_Hash() { return 2939490690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
