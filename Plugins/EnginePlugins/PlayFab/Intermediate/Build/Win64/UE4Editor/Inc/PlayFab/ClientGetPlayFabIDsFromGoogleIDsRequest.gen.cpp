// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetPlayFabIDsFromGoogleIDsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetPlayFabIDsFromGoogleIDsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetPlayFabIDsFromGoogleIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FClientGetPlayFabIDsFromGoogleIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FClientGetPlayFabIDsFromGoogleIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetPlayFabIDsFromGoogleIDsRequest"), sizeof(FClientGetPlayFabIDsFromGoogleIDsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetPlayFabIDsFromGoogleIDsRequest>()
{
	return FClientGetPlayFabIDsFromGoogleIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest(FClientGetPlayFabIDsFromGoogleIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetPlayFabIDsFromGoogleIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromGoogleIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromGoogleIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FClientGetPlayFabIDsFromGoogleIDsRequest>(FName(TEXT("ClientGetPlayFabIDsFromGoogleIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetPlayFabIDsFromGoogleIDsRequest;
	struct Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GoogleIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GoogleIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromGoogleIDsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetPlayFabIDsFromGoogleIDsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewProp_GoogleIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetPlayFabIDsFromGoogleIDsRequest" },
		{ "ModuleRelativePath", "Public/ClientGetPlayFabIDsFromGoogleIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewProp_GoogleIDs = { "GoogleIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetPlayFabIDsFromGoogleIDsRequest, GoogleIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewProp_GoogleIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewProp_GoogleIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::NewProp_GoogleIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ClientGetPlayFabIDsFromGoogleIDsRequest",
		sizeof(FClientGetPlayFabIDsFromGoogleIDsRequest),
		alignof(FClientGetPlayFabIDsFromGoogleIDsRequest),
		Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetPlayFabIDsFromGoogleIDsRequest"), sizeof(FClientGetPlayFabIDsFromGoogleIDsRequest), Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetPlayFabIDsFromGoogleIDsRequest_Hash() { return 3220095133U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
