// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientReportPlayerClientResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientReportPlayerClientResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientReportPlayerClientResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientReportPlayerClientResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientReportPlayerClientResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientReportPlayerClientResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReportPlayerClientResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientReportPlayerClientResult"), sizeof(FClientReportPlayerClientResult), Get_Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientReportPlayerClientResult>()
{
	return FClientReportPlayerClientResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientReportPlayerClientResult(FClientReportPlayerClientResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientReportPlayerClientResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientResult()
	{
		UScriptStruct::DeferCppStructOps<FClientReportPlayerClientResult>(FName(TEXT("ClientReportPlayerClientResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientReportPlayerClientResult;
	struct Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmissionsRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubmissionsRemaining;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReportPlayerClientResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewProp_SubmissionsRemaining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientReportPlayerClientResult" },
		{ "ModuleRelativePath", "Public/ClientReportPlayerClientResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewProp_SubmissionsRemaining = { "SubmissionsRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientReportPlayerClientResult, SubmissionsRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewProp_SubmissionsRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewProp_SubmissionsRemaining_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::NewProp_SubmissionsRemaining,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientReportPlayerClientResult",
		sizeof(FClientReportPlayerClientResult),
		alignof(FClientReportPlayerClientResult),
		Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientReportPlayerClientResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientReportPlayerClientResult"), sizeof(FClientReportPlayerClientResult), Get_Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientReportPlayerClientResult_Hash() { return 2961598981U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
