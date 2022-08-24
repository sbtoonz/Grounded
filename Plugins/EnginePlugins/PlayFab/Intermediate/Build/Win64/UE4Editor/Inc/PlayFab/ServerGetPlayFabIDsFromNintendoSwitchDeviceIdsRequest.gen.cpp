// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), sizeof(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>()
{
	return FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(FName(TEXT("ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;
	struct Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NintendoSwitchDeviceIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NintendoSwitchDeviceIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds = { "NintendoSwitchDeviceIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, NintendoSwitchDeviceIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest",
		sizeof(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest),
		alignof(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest),
		Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), sizeof(FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash() { return 3621935150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
