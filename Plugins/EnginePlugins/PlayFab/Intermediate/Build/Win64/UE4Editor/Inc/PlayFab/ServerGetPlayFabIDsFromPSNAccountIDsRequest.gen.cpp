// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayFabIDsFromPSNAccountIDsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayFabIDsFromPSNAccountIDsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayFabIDsFromPSNAccountIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetPlayFabIDsFromPSNAccountIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetPlayFabIDsFromPSNAccountIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayFabIDsFromPSNAccountIDsRequest"), sizeof(FServerGetPlayFabIDsFromPSNAccountIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayFabIDsFromPSNAccountIDsRequest>()
{
	return FServerGetPlayFabIDsFromPSNAccountIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest(FServerGetPlayFabIDsFromPSNAccountIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayFabIDsFromPSNAccountIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayFabIDsFromPSNAccountIDsRequest>(FName(TEXT("ServerGetPlayFabIDsFromPSNAccountIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayFabIDsFromPSNAccountIDsRequest;
	struct Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IssuerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IssuerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PSNAccountIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PSNAccountIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromPSNAccountIDsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayFabIDsFromPSNAccountIDsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_IssuerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayFabIDsFromPSNAccountIDsRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromPSNAccountIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_IssuerId = { "IssuerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayFabIDsFromPSNAccountIDsRequest, IssuerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_IssuerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_IssuerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_PSNAccountIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayFabIDsFromPSNAccountIDsRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayFabIDsFromPSNAccountIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_PSNAccountIDs = { "PSNAccountIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayFabIDsFromPSNAccountIDsRequest, PSNAccountIDs), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_PSNAccountIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_PSNAccountIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_IssuerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::NewProp_PSNAccountIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetPlayFabIDsFromPSNAccountIDsRequest",
		sizeof(FServerGetPlayFabIDsFromPSNAccountIDsRequest),
		alignof(FServerGetPlayFabIDsFromPSNAccountIDsRequest),
		Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayFabIDsFromPSNAccountIDsRequest"), sizeof(FServerGetPlayFabIDsFromPSNAccountIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayFabIDsFromPSNAccountIDsRequest_Hash() { return 1644523200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
