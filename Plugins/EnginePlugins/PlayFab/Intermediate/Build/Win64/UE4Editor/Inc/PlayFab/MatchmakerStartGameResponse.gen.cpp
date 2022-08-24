// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MatchmakerStartGameResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakerStartGameResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMatchmakerStartGameResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMatchmakerStartGameResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMatchmakerStartGameResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MatchmakerStartGameResponse"), sizeof(FMatchmakerStartGameResponse), Get_Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMatchmakerStartGameResponse>()
{
	return FMatchmakerStartGameResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchmakerStartGameResponse(FMatchmakerStartGameResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MatchmakerStartGameResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameResponse()
	{
		UScriptStruct::DeferCppStructOps<FMatchmakerStartGameResponse>(FName(TEXT("MatchmakerStartGameResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMatchmakerStartGameResponse;
	struct Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIPV4Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIPV4Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerIPV6Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerIPV6Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPublicDNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPublicDNSName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchmakerStartGameResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_GameID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameResponse, GameID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_GameID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_GameID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV4Address = { "ServerIPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameResponse, ServerIPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV6Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV6Address = { "ServerIPV6Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameResponse, ServerIPV6Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV6Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV6Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameResponse, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPublicDNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchmakerStartGameResponse" },
		{ "ModuleRelativePath", "Public/MatchmakerStartGameResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPublicDNSName = { "ServerPublicDNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchmakerStartGameResponse, ServerPublicDNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPublicDNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPublicDNSName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_GameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerIPV6Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::NewProp_ServerPublicDNSName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MatchmakerStartGameResponse",
		sizeof(FMatchmakerStartGameResponse),
		alignof(FMatchmakerStartGameResponse),
		Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchmakerStartGameResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchmakerStartGameResponse"), sizeof(FMatchmakerStartGameResponse), Get_Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchmakerStartGameResponse_Hash() { return 2239182975U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
