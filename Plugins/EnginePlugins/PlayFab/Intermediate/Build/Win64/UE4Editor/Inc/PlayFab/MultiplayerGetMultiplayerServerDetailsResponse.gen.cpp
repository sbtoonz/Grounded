// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetMultiplayerServerDetailsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetMultiplayerServerDetailsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetMultiplayerServerDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetMultiplayerServerDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetMultiplayerServerDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetMultiplayerServerDetailsResponse"), sizeof(FMultiplayerGetMultiplayerServerDetailsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetMultiplayerServerDetailsResponse>()
{
	return FMultiplayerGetMultiplayerServerDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse(FMultiplayerGetMultiplayerServerDetailsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetMultiplayerServerDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMultiplayerServerDetailsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMultiplayerServerDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetMultiplayerServerDetailsResponse>(FName(TEXT("MultiplayerGetMultiplayerServerDetailsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetMultiplayerServerDetailsResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectedPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FQDN_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FQDN;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPV4Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IPV4Address;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastStateTransitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastStateTransitionTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ports_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ports_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Ports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VmId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetMultiplayerServerDetailsResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers_Inner = { "ConnectedPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers = { "ConnectedPlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, ConnectedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_FQDN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_FQDN = { "FQDN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, FQDN), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_FQDN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_FQDN_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_IPV4Address_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_IPV4Address = { "IPV4Address", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, IPV4Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_IPV4Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_IPV4Address_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_LastStateTransitionTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_LastStateTransitionTime = { "LastStateTransitionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, LastStateTransitionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_LastStateTransitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_LastStateTransitionTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports_Inner = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, Ports), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ServerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ServerId = { "ServerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, ServerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ServerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ServerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_SessionId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, State), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_VmId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetMultiplayerServerDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetMultiplayerServerDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_VmId = { "VmId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetMultiplayerServerDetailsResponse, VmId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_VmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_VmId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ConnectedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_FQDN,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_IPV4Address,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_LastStateTransitionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Ports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_ServerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_SessionId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::NewProp_VmId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetMultiplayerServerDetailsResponse",
		sizeof(FMultiplayerGetMultiplayerServerDetailsResponse),
		alignof(FMultiplayerGetMultiplayerServerDetailsResponse),
		Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetMultiplayerServerDetailsResponse"), sizeof(FMultiplayerGetMultiplayerServerDetailsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetMultiplayerServerDetailsResponse_Hash() { return 542740857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
