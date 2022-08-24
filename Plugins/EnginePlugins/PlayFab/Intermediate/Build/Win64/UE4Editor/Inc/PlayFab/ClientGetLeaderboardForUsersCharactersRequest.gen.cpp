// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetLeaderboardForUsersCharactersRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetLeaderboardForUsersCharactersRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetLeaderboardForUsersCharactersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetLeaderboardForUsersCharactersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetLeaderboardForUsersCharactersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetLeaderboardForUsersCharactersRequest"), sizeof(FClientGetLeaderboardForUsersCharactersRequest), Get_Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetLeaderboardForUsersCharactersRequest>()
{
	return FClientGetLeaderboardForUsersCharactersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest(FClientGetLeaderboardForUsersCharactersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetLeaderboardForUsersCharactersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardForUsersCharactersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardForUsersCharactersRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetLeaderboardForUsersCharactersRequest>(FName(TEXT("ClientGetLeaderboardForUsersCharactersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetLeaderboardForUsersCharactersRequest;
	struct Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResultsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResultsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetLeaderboardForUsersCharactersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetLeaderboardForUsersCharactersRequest" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount = { "MaxResultsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetLeaderboardForUsersCharactersRequest, MaxResultsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetLeaderboardForUsersCharactersRequest" },
		{ "ModuleRelativePath", "Public/ClientGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetLeaderboardForUsersCharactersRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetLeaderboardForUsersCharactersRequest",
		sizeof(FClientGetLeaderboardForUsersCharactersRequest),
		alignof(FClientGetLeaderboardForUsersCharactersRequest),
		Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetLeaderboardForUsersCharactersRequest"), sizeof(FClientGetLeaderboardForUsersCharactersRequest), Get_Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetLeaderboardForUsersCharactersRequest_Hash() { return 2167205275U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
