// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPlayFabIDsFromXboxLiveIDsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPlayFabIDsFromXboxLiveIDsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPlayFabIDsFromXboxLiveIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPlayFabIDsFromXboxLiveIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPlayFabIDsFromXboxLiveIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPlayFabIDsFromXboxLiveIDsRequest"), sizeof(FClientGetPlayFabIDsFromXboxLiveIDsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPlayFabIDsFromXboxLiveIDsRequest>()
{
	return FClientGetPlayFabIDsFromXboxLiveIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest(FClientGetPlayFabIDsFromXboxLiveIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPlayFabIDsFromXboxLiveIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromXboxLiveIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromXboxLiveIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPlayFabIDsFromXboxLiveIDsRequest>(FName(TEXT("ClientGetPlayFabIDsFromXboxLiveIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromXboxLiveIDsRequest;
	struct Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sandbox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Sandbox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XboxLiveAccountIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_XboxLiveAccountIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromXboxLiveIDsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPlayFabIDsFromXboxLiveIDsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayFabIDsFromXboxLiveIDsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromXboxLiveIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_Sandbox = { "Sandbox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayFabIDsFromXboxLiveIDsRequest, Sandbox), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_Sandbox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveAccountIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayFabIDsFromXboxLiveIDsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromXboxLiveIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveAccountIDs = { "XboxLiveAccountIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayFabIDsFromXboxLiveIDsRequest, XboxLiveAccountIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveAccountIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveAccountIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_Sandbox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::NewProp_XboxLiveAccountIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPlayFabIDsFromXboxLiveIDsRequest",
		sizeof(FClientGetPlayFabIDsFromXboxLiveIDsRequest),
		alignof(FClientGetPlayFabIDsFromXboxLiveIDsRequest),
		Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPlayFabIDsFromXboxLiveIDsRequest"), sizeof(FClientGetPlayFabIDsFromXboxLiveIDsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromXboxLiveIDsRequest_Hash() { return 1148039250U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
