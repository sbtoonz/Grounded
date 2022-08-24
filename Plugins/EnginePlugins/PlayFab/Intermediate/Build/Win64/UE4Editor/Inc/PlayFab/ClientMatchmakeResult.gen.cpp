// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientMatchmakeResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientMatchmakeResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientMatchmakeResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EMatchmakeStatus();
// End Cross Module References

static_assert(std::is_polymorphic<FClientMatchmakeResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientMatchmakeResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientMatchmakeResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientMatchmakeResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientMatchmakeResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientMatchmakeResult"), sizeof(FClientMatchmakeResult), Get_Z_Construct_UScriptStruct_FClientMatchmakeResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientMatchmakeResult>()
{
	return FClientMatchmakeResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientMatchmakeResult(FClientMatchmakeResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientMatchmakeResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientMatchmakeResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientMatchmakeResult()
	{
		UScriptStruct::DeferCppStructOps<FClientMatchmakeResult>(FName(TEXT("ClientMatchmakeResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientMatchmakeResult;
	struct Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PollWaitTimeMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PollWaitTimeMS;
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
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ticket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ticket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientMatchmakeResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Expires_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Expires = { "Expires", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, Expires), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Expires_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Expires_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_PollWaitTimeMS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_PollWaitTimeMS = { "PollWaitTimeMS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, PollWaitTimeMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_PollWaitTimeMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_PollWaitTimeMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV4Address = { "ServerIPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, ServerIPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV6Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV6Address = { "ServerIPV6Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, ServerIPV6Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV6Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV6Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPort_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPublicDNSName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPublicDNSName = { "ServerPublicDNSName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, ServerPublicDNSName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPublicDNSName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPublicDNSName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, Status), Z_Construct_UEnum_PlayFab_EMatchmakeStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Ticket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientMatchmakeResult" },
		{ "ModuleRelativePath", "Public/ClientMatchmakeResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientMatchmakeResult, Ticket), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Ticket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Ticket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Expires,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_PollWaitTimeMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerIPV6Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_ServerPublicDNSName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::NewProp_Ticket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientMatchmakeResult",
		sizeof(FClientMatchmakeResult),
		alignof(FClientMatchmakeResult),
		Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientMatchmakeResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientMatchmakeResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientMatchmakeResult"), sizeof(FClientMatchmakeResult), Get_Z_Construct_UScriptStruct_FClientMatchmakeResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientMatchmakeResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientMatchmakeResult_Hash() { return 405898020U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
