// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayerStatisticDefinitionsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayerStatisticDefinitionsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayerStatisticDefinitionsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetPlayerStatisticDefinitionsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetPlayerStatisticDefinitionsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayerStatisticDefinitionsResult"), sizeof(FAdminGetPlayerStatisticDefinitionsResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayerStatisticDefinitionsResult>()
{
	return FAdminGetPlayerStatisticDefinitionsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult(FAdminGetPlayerStatisticDefinitionsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayerStatisticDefinitionsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayerStatisticDefinitionsResult>(FName(TEXT("AdminGetPlayerStatisticDefinitionsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayerStatisticDefinitionsResult;
	struct Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Statistics_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Statistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Statistics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerStatisticDefinitionsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayerStatisticDefinitionsResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics_Inner = { "Statistics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayerStatisticDefinitionsResult" },
		{ "ModuleRelativePath", "Public/AdminGetPlayerStatisticDefinitionsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics = { "Statistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayerStatisticDefinitionsResult, Statistics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::NewProp_Statistics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetPlayerStatisticDefinitionsResult",
		sizeof(FAdminGetPlayerStatisticDefinitionsResult),
		alignof(FAdminGetPlayerStatisticDefinitionsResult),
		Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayerStatisticDefinitionsResult"), sizeof(FAdminGetPlayerStatisticDefinitionsResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayerStatisticDefinitionsResult_Hash() { return 3823380987U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
