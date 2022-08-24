// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientCurrentGamesResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientCurrentGamesResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientCurrentGamesResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientCurrentGamesResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientCurrentGamesResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientCurrentGamesResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientCurrentGamesResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientCurrentGamesResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientCurrentGamesResult"), sizeof(FClientCurrentGamesResult), Get_Z_Construct_UScriptStruct_FClientCurrentGamesResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientCurrentGamesResult>()
{
	return FClientCurrentGamesResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientCurrentGamesResult(FClientCurrentGamesResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientCurrentGamesResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientCurrentGamesResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientCurrentGamesResult()
	{
		UScriptStruct::DeferCppStructOps<FClientCurrentGamesResult>(FName(TEXT("ClientCurrentGamesResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientCurrentGamesResult;
	struct Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameCount;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Games_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Games_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Games;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientCurrentGamesResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientCurrentGamesResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_GameCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientCurrentGamesResult" },
		{ "ModuleRelativePath", "Public/ClientCurrentGamesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_GameCount = { "GameCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientCurrentGamesResult, GameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_GameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_GameCount_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games_Inner = { "Games", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientCurrentGamesResult" },
		{ "ModuleRelativePath", "Public/ClientCurrentGamesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games = { "Games", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientCurrentGamesResult, Games), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_PlayerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientCurrentGamesResult" },
		{ "ModuleRelativePath", "Public/ClientCurrentGamesResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientCurrentGamesResult, PlayerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_PlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_PlayerCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_GameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_Games,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::NewProp_PlayerCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientCurrentGamesResult",
		sizeof(FClientCurrentGamesResult),
		alignof(FClientCurrentGamesResult),
		Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientCurrentGamesResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientCurrentGamesResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientCurrentGamesResult"), sizeof(FClientCurrentGamesResult), Get_Z_Construct_UScriptStruct_FClientCurrentGamesResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientCurrentGamesResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientCurrentGamesResult_Hash() { return 4139407822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
