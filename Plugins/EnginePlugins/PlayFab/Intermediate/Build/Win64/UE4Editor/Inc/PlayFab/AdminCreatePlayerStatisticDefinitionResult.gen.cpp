// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreatePlayerStatisticDefinitionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreatePlayerStatisticDefinitionResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreatePlayerStatisticDefinitionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminCreatePlayerStatisticDefinitionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminCreatePlayerStatisticDefinitionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreatePlayerStatisticDefinitionResult"), sizeof(FAdminCreatePlayerStatisticDefinitionResult), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreatePlayerStatisticDefinitionResult>()
{
	return FAdminCreatePlayerStatisticDefinitionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult(FAdminCreatePlayerStatisticDefinitionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreatePlayerStatisticDefinitionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerStatisticDefinitionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerStatisticDefinitionResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreatePlayerStatisticDefinitionResult>(FName(TEXT("AdminCreatePlayerStatisticDefinitionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreatePlayerStatisticDefinitionResult;
	struct Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerStatisticDefinitionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreatePlayerStatisticDefinitionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreatePlayerStatisticDefinitionResult" },
		{ "ModuleRelativePath", "Public/AdminCreatePlayerStatisticDefinitionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic = { "Statistic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreatePlayerStatisticDefinitionResult, Statistic), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::NewProp_Statistic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminCreatePlayerStatisticDefinitionResult",
		sizeof(FAdminCreatePlayerStatisticDefinitionResult),
		alignof(FAdminCreatePlayerStatisticDefinitionResult),
		Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreatePlayerStatisticDefinitionResult"), sizeof(FAdminCreatePlayerStatisticDefinitionResult), Get_Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreatePlayerStatisticDefinitionResult_Hash() { return 2596792835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
