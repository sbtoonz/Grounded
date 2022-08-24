// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientStartGameResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientStartGameResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientStartGameResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientStartGameResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientStartGameResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientStartGameResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientStartGameResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientStartGameResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientStartGameResult"), sizeof(FClientStartGameResult), Get_Z_Construct_UScriptStruct_FClientStartGameResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientStartGameResult>()
{
	return FClientStartGameResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientStartGameResult(FClientStartGameResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientStartGameResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientStartGameResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientStartGameResult()
	{
		UScriptStruct::DeferCppStructOps<FClientStartGameResult>(FName(TEXT("ClientStartGameResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientStartGameResult;
	struct Z_Construct_UScriptStruct_FClientStartGameResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expires_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Expires;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password;
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientStartGameResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Expires_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Password_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, Password), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Password_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Password_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV4Address = { "ServerIPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, ServerIPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV6Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV6Address = { "ServerIPV6Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, ServerIPV6Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV6Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV6Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPublicDNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPublicDNSName = { "ServerPublicDNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, ServerPublicDNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPublicDNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPublicDNSName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Ticket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientStartGameResult" },
		{ "ModuleRelativePath", "Public/ClientStartGameResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientStartGameResult, Ticket), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientStartGameResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Expires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Password,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerIPV6Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_ServerPublicDNSName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientStartGameResult_Statics::NewProp_Ticket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientStartGameResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientStartGameResult",
		sizeof(FClientStartGameResult),
		alignof(FClientStartGameResult),
		Z_Construct_UScriptStruct_FClientStartGameResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientStartGameResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientStartGameResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientStartGameResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientStartGameResult"), sizeof(FClientStartGameResult), Get_Z_Construct_UScriptStruct_FClientStartGameResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientStartGameResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientStartGameResult_Hash() { return 1201364374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
