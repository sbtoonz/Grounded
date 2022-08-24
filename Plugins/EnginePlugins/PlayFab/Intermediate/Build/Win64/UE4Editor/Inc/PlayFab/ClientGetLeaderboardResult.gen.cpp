// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetLeaderboardResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetLeaderboardResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetLeaderboardResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetLeaderboardResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetLeaderboardResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetLeaderboardResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetLeaderboardResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetLeaderboardResult"), sizeof(FClientGetLeaderboardResult), Get_Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetLeaderboardResult>()
{
	return FClientGetLeaderboardResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetLeaderboardResult(FClientGetLeaderboardResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetLeaderboardResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetLeaderboardResult>(FName(TEXT("ClientGetLeaderboardResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardResult;
	struct Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboard_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Leaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetLeaderboardResult>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard_Inner = { "Leaderboard", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetLeaderboardResult" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetLeaderboardResult, Leaderboard), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_NextReset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetLeaderboardResult" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_NextReset = { "NextReset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetLeaderboardResult, NextReset), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_NextReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_NextReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetLeaderboardResult" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetLeaderboardResult, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Version_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Leaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_NextReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::NewProp_Version,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetLeaderboardResult",
		sizeof(FClientGetLeaderboardResult),
		alignof(FClientGetLeaderboardResult),
		Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetLeaderboardResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetLeaderboardResult"), sizeof(FClientGetLeaderboardResult), Get_Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardResult_Hash() { return 1754279545U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
