// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminIncrementPlayerStatisticVersionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminIncrementPlayerStatisticVersionResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminIncrementPlayerStatisticVersionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminIncrementPlayerStatisticVersionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminIncrementPlayerStatisticVersionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminIncrementPlayerStatisticVersionResult"), sizeof(FAdminIncrementPlayerStatisticVersionResult), Get_Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminIncrementPlayerStatisticVersionResult>()
{
	return FAdminIncrementPlayerStatisticVersionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult(FAdminIncrementPlayerStatisticVersionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminIncrementPlayerStatisticVersionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementPlayerStatisticVersionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementPlayerStatisticVersionResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminIncrementPlayerStatisticVersionResult>(FName(TEXT("AdminIncrementPlayerStatisticVersionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminIncrementPlayerStatisticVersionResult;
	struct Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatisticVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminIncrementPlayerStatisticVersionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminIncrementPlayerStatisticVersionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewProp_StatisticVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminIncrementPlayerStatisticVersionResult" },
		{ "ModuleRelativePath", "Public/AdminIncrementPlayerStatisticVersionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewProp_StatisticVersion = { "StatisticVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminIncrementPlayerStatisticVersionResult, StatisticVersion), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewProp_StatisticVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewProp_StatisticVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::NewProp_StatisticVersion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminIncrementPlayerStatisticVersionResult",
		sizeof(FAdminIncrementPlayerStatisticVersionResult),
		alignof(FAdminIncrementPlayerStatisticVersionResult),
		Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminIncrementPlayerStatisticVersionResult"), sizeof(FAdminIncrementPlayerStatisticVersionResult), Get_Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminIncrementPlayerStatisticVersionResult_Hash() { return 3008159284U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif