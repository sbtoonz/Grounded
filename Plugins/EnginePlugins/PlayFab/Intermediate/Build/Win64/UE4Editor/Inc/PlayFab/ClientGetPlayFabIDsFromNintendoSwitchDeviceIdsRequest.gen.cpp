// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), sizeof(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>()
{
	return FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(FName(TEXT("ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;
	struct Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds = { "NintendoSwitchDeviceIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest, NintendoSwitchDeviceIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::NewProp_NintendoSwitchDeviceIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest",
		sizeof(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest),
		alignof(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest),
		Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest"), sizeof(FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_Hash() { return 1469572994U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
