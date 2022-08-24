// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSetGameServerInstanceStateRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSetGameServerInstanceStateRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EGameInstanceState();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSetGameServerInstanceStateRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSetGameServerInstanceStateRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSetGameServerInstanceStateRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSetGameServerInstanceStateRequest"), sizeof(FServerSetGameServerInstanceStateRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSetGameServerInstanceStateRequest>()
{
	return FServerSetGameServerInstanceStateRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSetGameServerInstanceStateRequest(FServerSetGameServerInstanceStateRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSetGameServerInstanceStateRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceStateRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceStateRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSetGameServerInstanceStateRequest>(FName(TEXT("ServerSetGameServerInstanceStateRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceStateRequest;
	struct Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceStateRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSetGameServerInstanceStateRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceStateRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceStateRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_LobbyId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceStateRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceStateRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceStateRequest, State), Z_Construct_UEnum_PlayFab_EGameInstanceState, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::NewProp_State,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSetGameServerInstanceStateRequest",
		sizeof(FServerSetGameServerInstanceStateRequest),
		alignof(FServerSetGameServerInstanceStateRequest),
		Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSetGameServerInstanceStateRequest"), sizeof(FServerSetGameServerInstanceStateRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceStateRequest_Hash() { return 666780855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
