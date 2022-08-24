// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCheckLimitedEditionItemAvailabilityResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCheckLimitedEditionItemAvailabilityResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCheckLimitedEditionItemAvailabilityResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminCheckLimitedEditionItemAvailabilityResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminCheckLimitedEditionItemAvailabilityResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCheckLimitedEditionItemAvailabilityResult"), sizeof(FAdminCheckLimitedEditionItemAvailabilityResult), Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCheckLimitedEditionItemAvailabilityResult>()
{
	return FAdminCheckLimitedEditionItemAvailabilityResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult(FAdminCheckLimitedEditionItemAvailabilityResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCheckLimitedEditionItemAvailabilityResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminCheckLimitedEditionItemAvailabilityResult>(FName(TEXT("AdminCheckLimitedEditionItemAvailabilityResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCheckLimitedEditionItemAvailabilityResult;
	struct Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCheckLimitedEditionItemAvailabilityResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCheckLimitedEditionItemAvailabilityResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewProp_Amount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCheckLimitedEditionItemAvailabilityResult" },
		{ "ModuleRelativePath", "Public/AdminCheckLimitedEditionItemAvailabilityResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCheckLimitedEditionItemAvailabilityResult, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::NewProp_Amount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminCheckLimitedEditionItemAvailabilityResult",
		sizeof(FAdminCheckLimitedEditionItemAvailabilityResult),
		alignof(FAdminCheckLimitedEditionItemAvailabilityResult),
		Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCheckLimitedEditionItemAvailabilityResult"), sizeof(FAdminCheckLimitedEditionItemAvailabilityResult), Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCheckLimitedEditionItemAvailabilityResult_Hash() { return 1571996753U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
