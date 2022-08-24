// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetLeaderboardForUsersCharactersRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetLeaderboardForUsersCharactersRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetLeaderboardForUsersCharactersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetLeaderboardForUsersCharactersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetLeaderboardForUsersCharactersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetLeaderboardForUsersCharactersRequest"), sizeof(FServerGetLeaderboardForUsersCharactersRequest), Get_Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetLeaderboardForUsersCharactersRequest>()
{
	return FServerGetLeaderboardForUsersCharactersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest(FServerGetLeaderboardForUsersCharactersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetLeaderboardForUsersCharactersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardForUsersCharactersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardForUsersCharactersRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetLeaderboardForUsersCharactersRequest>(FName(TEXT("ServerGetLeaderboardForUsersCharactersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetLeaderboardForUsersCharactersRequest;
	struct Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetLeaderboardForUsersCharactersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardForUsersCharactersRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount = { "MaxResultsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardForUsersCharactersRequest, MaxResultsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardForUsersCharactersRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardForUsersCharactersRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetLeaderboardForUsersCharactersRequest" },
		{ "ModuleRelativePath", "Public/ServerGetLeaderboardForUsersCharactersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetLeaderboardForUsersCharactersRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_MaxResultsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::NewProp_StatisticName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetLeaderboardForUsersCharactersRequest",
		sizeof(FServerGetLeaderboardForUsersCharactersRequest),
		alignof(FServerGetLeaderboardForUsersCharactersRequest),
		Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetLeaderboardForUsersCharactersRequest"), sizeof(FServerGetLeaderboardForUsersCharactersRequest), Get_Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetLeaderboardForUsersCharactersRequest_Hash() { return 2983225157U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
