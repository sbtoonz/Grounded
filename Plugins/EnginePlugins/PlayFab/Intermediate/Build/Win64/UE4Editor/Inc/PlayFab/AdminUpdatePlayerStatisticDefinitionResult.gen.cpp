// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminUpdatePlayerStatisticDefinitionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminUpdatePlayerStatisticDefinitionResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminUpdatePlayerStatisticDefinitionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminUpdatePlayerStatisticDefinitionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminUpdatePlayerStatisticDefinitionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminUpdatePlayerStatisticDefinitionResult"), sizeof(FAdminUpdatePlayerStatisticDefinitionResult), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminUpdatePlayerStatisticDefinitionResult>()
{
	return FAdminUpdatePlayerStatisticDefinitionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult(FAdminUpdatePlayerStatisticDefinitionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminUpdatePlayerStatisticDefinitionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminUpdatePlayerStatisticDefinitionResult>(FName(TEXT("AdminUpdatePlayerStatisticDefinitionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminUpdatePlayerStatisticDefinitionResult;
	struct Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statistic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statistic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminUpdatePlayerStatisticDefinitionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminUpdatePlayerStatisticDefinitionResult" },
		{ "ModuleRelativePath", "Public/AdminUpdatePlayerStatisticDefinitionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic = { "Statistic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminUpdatePlayerStatisticDefinitionResult, Statistic), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminUpdatePlayerStatisticDefinitionResult",
		sizeof(FAdminUpdatePlayerStatisticDefinitionResult),
		alignof(FAdminUpdatePlayerStatisticDefinitionResult),
		Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminUpdatePlayerStatisticDefinitionResult"), sizeof(FAdminUpdatePlayerStatisticDefinitionResult), Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminUpdatePlayerStatisticDefinitionResult_Hash() { return 4151579431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
