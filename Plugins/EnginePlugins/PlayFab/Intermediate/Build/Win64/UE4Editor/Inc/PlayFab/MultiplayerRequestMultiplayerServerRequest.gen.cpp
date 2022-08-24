// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerRequestMultiplayerServerRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerRequestMultiplayerServerRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerRequestMultiplayerServerRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerRequestMultiplayerServerRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerRequestMultiplayerServerRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerRequestMultiplayerServerRequest"), sizeof(FMultiplayerRequestMultiplayerServerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerRequestMultiplayerServerRequest>()
{
	return FMultiplayerRequestMultiplayerServerRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest(FMultiplayerRequestMultiplayerServerRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerRequestMultiplayerServerRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRequestMultiplayerServerRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRequestMultiplayerServerRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerRequestMultiplayerServerRequest>(FName(TEXT("MultiplayerRequestMultiplayerServerRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRequestMultiplayerServerRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildAliasParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildAliasParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InitialPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreferredRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionCookie_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionCookie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerRequestMultiplayerServerRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildAliasParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildAliasParams = { "BuildAliasParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, BuildAliasParams), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildAliasParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildAliasParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_InitialPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_InitialPlayers = { "InitialPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, InitialPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_InitialPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_InitialPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_PreferredRegions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_PreferredRegions = { "PreferredRegions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, PreferredRegions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_PreferredRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_PreferredRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionCookie_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionCookie = { "SessionCookie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, SessionCookie), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionCookie_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionCookie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRequestMultiplayerServerRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerRequestMultiplayerServerRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRequestMultiplayerServerRequest, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildAliasParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_InitialPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_PreferredRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionCookie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::NewProp_SessionId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerRequestMultiplayerServerRequest",
		sizeof(FMultiplayerRequestMultiplayerServerRequest),
		alignof(FMultiplayerRequestMultiplayerServerRequest),
		Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerRequestMultiplayerServerRequest"), sizeof(FMultiplayerRequestMultiplayerServerRequest), Get_Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRequestMultiplayerServerRequest_Hash() { return 41441051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
