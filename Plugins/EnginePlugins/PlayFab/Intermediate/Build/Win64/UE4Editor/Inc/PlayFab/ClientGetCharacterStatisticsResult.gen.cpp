// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetCharacterStatisticsResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetCharacterStatisticsResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetCharacterStatisticsResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetCharacterStatisticsResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetCharacterStatisticsResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetCharacterStatisticsResult"), sizeof(FClientGetCharacterStatisticsResult), Get_Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetCharacterStatisticsResult>()
{
	return FClientGetCharacterStatisticsResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetCharacterStatisticsResult(FClientGetCharacterStatisticsResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetCharacterStatisticsResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterStatisticsResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterStatisticsResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetCharacterStatisticsResult>(FName(TEXT("ClientGetCharacterStatisticsResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterStatisticsResult;
	struct Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterStatistics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterStatistics;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterStatisticsResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetCharacterStatisticsResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewProp_CharacterStatistics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCharacterStatisticsResult" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterStatisticsResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewProp_CharacterStatistics = { "CharacterStatistics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCharacterStatisticsResult, CharacterStatistics), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewProp_CharacterStatistics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewProp_CharacterStatistics_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::NewProp_CharacterStatistics,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetCharacterStatisticsResult",
		sizeof(FClientGetCharacterStatisticsResult),
		alignof(FClientGetCharacterStatisticsResult),
		Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetCharacterStatisticsResult"), sizeof(FClientGetCharacterStatisticsResult), Get_Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterStatisticsResult_Hash() { return 1265369670U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
