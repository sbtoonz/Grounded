// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetCharacterLeaderboardRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetCharacterLeaderboardRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetCharacterLeaderboardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetCharacterLeaderboardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetCharacterLeaderboardRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetCharacterLeaderboardRequest"), sizeof(FClientGetCharacterLeaderboardRequest), Get_Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetCharacterLeaderboardRequest>()
{
	return FClientGetCharacterLeaderboardRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetCharacterLeaderboardRequest(FClientGetCharacterLeaderboardRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetCharacterLeaderboardRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterLeaderboardRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterLeaderboardRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetCharacterLeaderboardRequest>(FName(TEXT("ClientGetCharacterLeaderboardRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetCharacterLeaderboardRequest;
	struct Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResultsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResultsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterLeaderboardRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetCharacterLeaderboardRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_CharacterType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCharacterLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCharacterLeaderboardRequest, CharacterType), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_CharacterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_CharacterType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCharacterLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_MaxResultsCount = { "MaxResultsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCharacterLeaderboardRequest, MaxResultsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCharacterLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCharacterLeaderboardRequest, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetCharacterLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ClientGetCharacterLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetCharacterLeaderboardRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StatisticName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_CharacterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_MaxResultsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::NewProp_StatisticName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetCharacterLeaderboardRequest",
		sizeof(FClientGetCharacterLeaderboardRequest),
		alignof(FClientGetCharacterLeaderboardRequest),
		Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetCharacterLeaderboardRequest"), sizeof(FClientGetCharacterLeaderboardRequest), Get_Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetCharacterLeaderboardRequest_Hash() { return 2143106821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
