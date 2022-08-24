// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayersInSegmentResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayersInSegmentResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayersInSegmentResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FServerGetPlayersInSegmentResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FServerGetPlayersInSegmentResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayersInSegmentResult"), sizeof(FServerGetPlayersInSegmentResult), Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayersInSegmentResult>()
{
	return FServerGetPlayersInSegmentResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayersInSegmentResult(FServerGetPlayersInSegmentResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayersInSegmentResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentResult()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayersInSegmentResult>(FName(TEXT("ServerGetPlayersInSegmentResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentResult;
	struct Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContinuationToken;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerProfiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfilesInSegment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProfilesInSegment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayersInSegmentResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ContinuationToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentResult" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ContinuationToken = { "ContinuationToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentResult, ContinuationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ContinuationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ContinuationToken_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles_Inner = { "PlayerProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentResult" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentResult.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles = { "PlayerProfiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentResult, PlayerProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ProfilesInSegment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentResult" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ProfilesInSegment = { "ProfilesInSegment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentResult, ProfilesInSegment), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ProfilesInSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ProfilesInSegment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ContinuationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_PlayerProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::NewProp_ProfilesInSegment,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ServerGetPlayersInSegmentResult",
		sizeof(FServerGetPlayersInSegmentResult),
		alignof(FServerGetPlayersInSegmentResult),
		Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayersInSegmentResult"), sizeof(FServerGetPlayersInSegmentResult), Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentResult_Hash() { return 2230033187U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
