// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerRolloverContainerRegistryCredentialsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerRolloverContainerRegistryCredentialsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerRolloverContainerRegistryCredentialsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerRolloverContainerRegistryCredentialsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerRolloverContainerRegistryCredentialsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerRolloverContainerRegistryCredentialsResponse"), sizeof(FMultiplayerRolloverContainerRegistryCredentialsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerRolloverContainerRegistryCredentialsResponse>()
{
	return FMultiplayerRolloverContainerRegistryCredentialsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse(FMultiplayerRolloverContainerRegistryCredentialsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerRolloverContainerRegistryCredentialsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRolloverContainerRegistryCredentialsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRolloverContainerRegistryCredentialsResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerRolloverContainerRegistryCredentialsResponse>(FName(TEXT("MultiplayerRolloverContainerRegistryCredentialsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerRolloverContainerRegistryCredentialsResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DnsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DnsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Username;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerRolloverContainerRegistryCredentialsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerRolloverContainerRegistryCredentialsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_DnsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRolloverContainerRegistryCredentialsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerRolloverContainerRegistryCredentialsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_DnsName = { "DnsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRolloverContainerRegistryCredentialsResponse, DnsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_DnsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_DnsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRolloverContainerRegistryCredentialsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerRolloverContainerRegistryCredentialsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRolloverContainerRegistryCredentialsResponse, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Username_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerRolloverContainerRegistryCredentialsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerRolloverContainerRegistryCredentialsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Username = { "Username", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerRolloverContainerRegistryCredentialsResponse, Username), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Username_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Username_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_DnsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::NewProp_Username,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerRolloverContainerRegistryCredentialsResponse",
		sizeof(FMultiplayerRolloverContainerRegistryCredentialsResponse),
		alignof(FMultiplayerRolloverContainerRegistryCredentialsResponse),
		Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerRolloverContainerRegistryCredentialsResponse"), sizeof(FMultiplayerRolloverContainerRegistryCredentialsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerRolloverContainerRegistryCredentialsResponse_Hash() { return 2682201325U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
