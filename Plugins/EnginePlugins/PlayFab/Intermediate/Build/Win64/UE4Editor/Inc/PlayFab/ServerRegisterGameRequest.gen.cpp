// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRegisterGameRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRegisterGameRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRegisterGameRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ERegion();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRegisterGameRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerRegisterGameRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerRegisterGameRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRegisterGameRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRegisterGameRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRegisterGameRequest"), sizeof(FServerRegisterGameRequest), Get_Z_Construct_UScriptStruct_FServerRegisterGameRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRegisterGameRequest>()
{
	return FServerRegisterGameRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRegisterGameRequest(FServerRegisterGameRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRegisterGameRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRegisterGameRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRegisterGameRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerRegisterGameRequest>(FName(TEXT("ServerRegisterGameRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRegisterGameRequest;
	struct Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Build_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Build;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Region;
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerPublicDNSName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerPublicDNSName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRegisterGameRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Build_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Build = { "Build", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, Build), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Build_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Build_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_GameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, Region), Z_Construct_UEnum_PlayFab_ERegion, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV4Address = { "ServerIPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, ServerIPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV6Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV6Address = { "ServerIPV6Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, ServerIPV6Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV6Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV6Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPublicDNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPublicDNSName = { "ServerPublicDNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, ServerPublicDNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPublicDNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPublicDNSName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRegisterGameRequest" },
		{ "ModuleRelativePath", "Public/ServerRegisterGameRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRegisterGameRequest, Tags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Build,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerIPV6Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_ServerPublicDNSName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::NewProp_Tags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerRegisterGameRequest",
		sizeof(FServerRegisterGameRequest),
		alignof(FServerRegisterGameRequest),
		Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRegisterGameRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRegisterGameRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRegisterGameRequest"), sizeof(FServerRegisterGameRequest), Get_Z_Construct_UScriptStruct_FServerRegisterGameRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRegisterGameRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRegisterGameRequest_Hash() { return 1737292175U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
