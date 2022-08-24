// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetFriendLeaderboardRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetFriendLeaderboardRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetFriendLeaderboardRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetFriendLeaderboardRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetFriendLeaderboardRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetFriendLeaderboardRequest"), sizeof(FServerGetFriendLeaderboardRequest), Get_Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetFriendLeaderboardRequest>()
{
	return FServerGetFriendLeaderboardRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetFriendLeaderboardRequest(FServerGetFriendLeaderboardRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetFriendLeaderboardRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetFriendLeaderboardRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetFriendLeaderboardRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetFriendLeaderboardRequest>(FName(TEXT("ServerGetFriendLeaderboardRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetFriendLeaderboardRequest;
	struct Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeFacebookFriends_MetaData[];
#endif
		static void NewProp_IncludeFacebookFriends_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeFacebookFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncludeSteamFriends_MetaData[];
#endif
		static void NewProp_IncludeSteamFriends_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeSteamFriends;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxResultsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxResultsCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileConstraints_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProfileConstraints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatisticName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatisticName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSpecificVersion_MetaData[];
#endif
		static void NewProp_UseSpecificVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSpecificVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetFriendLeaderboardRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends_SetBit(void* Obj)
	{
		((FServerGetFriendLeaderboardRequest*)Obj)->IncludeFacebookFriends = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends = { "IncludeFacebookFriends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerGetFriendLeaderboardRequest), &Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends_SetBit(void* Obj)
	{
		((FServerGetFriendLeaderboardRequest*)Obj)->IncludeSteamFriends = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends = { "IncludeSteamFriends", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerGetFriendLeaderboardRequest), &Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_MaxResultsCount = { "MaxResultsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, MaxResultsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_MaxResultsCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_PlayFabId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_PlayFabId = { "PlayFabId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, PlayFabId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_PlayFabId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_PlayFabId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_ProfileConstraints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_ProfileConstraints = { "ProfileConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, ProfileConstraints), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_ProfileConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_ProfileConstraints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StartPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StatisticName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StatisticName = { "StatisticName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, StatisticName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StatisticName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StatisticName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion_SetBit(void* Obj)
	{
		((FServerGetFriendLeaderboardRequest*)Obj)->UseSpecificVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion = { "UseSpecificVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FServerGetFriendLeaderboardRequest), &Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_Version_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_XboxToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetFriendLeaderboardRequest" },
		{ "ModuleRelativePath", "Public/ServerGetFriendLeaderboardRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_XboxToken = { "XboxToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetFriendLeaderboardRequest, XboxToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_XboxToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_XboxToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeFacebookFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_IncludeSteamFriends,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_MaxResultsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_PlayFabId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_ProfileConstraints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_StatisticName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_UseSpecificVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::NewProp_XboxToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetFriendLeaderboardRequest",
		sizeof(FServerGetFriendLeaderboardRequest),
		alignof(FServerGetFriendLeaderboardRequest),
		Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetFriendLeaderboardRequest"), sizeof(FServerGetFriendLeaderboardRequest), Get_Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetFriendLeaderboardRequest_Hash() { return 2945357386U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
