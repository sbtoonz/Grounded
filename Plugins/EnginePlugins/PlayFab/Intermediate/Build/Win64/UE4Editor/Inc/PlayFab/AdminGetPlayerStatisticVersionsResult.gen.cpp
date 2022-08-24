// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerStatisticVersionsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerStatisticVersionsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerStatisticVersionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetPlayerStatisticVersionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerStatisticVersionsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerStatisticVersionsResult"), sizeof(FAdminGetPlayerStatisticVersionsResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerStatisticVersionsResult>()
{
	return FAdminGetPlayerStatisticVersionsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult(FAdminGetPlayerStatisticVersionsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerStatisticVersionsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticVersionsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticVersionsResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerStatisticVersionsResult>(FName(TEXT("AdminGetPlayerStatisticVersionsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticVersionsResult;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatisticVersions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticVersions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatisticVersions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerStatisticVersionsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerStatisticVersionsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions_Inner = { "StatisticVersions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerStatisticVersionsResult" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerStatisticVersionsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions = { "StatisticVersions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerStatisticVersionsResult, StatisticVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::NewProp_StatisticVersions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetPlayerStatisticVersionsResult",
		sizeof(FAdminGetPlayerStatisticVersionsResult),
		alignof(FAdminGetPlayerStatisticVersionsResult),
		Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerStatisticVersionsResult"), sizeof(FAdminGetPlayerStatisticVersionsResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticVersionsResult_Hash() { return 1509672974U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
