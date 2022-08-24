// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetServerCustomIDsFromPlayFabIDsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetServerCustomIDsFromPlayFabIDsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetServerCustomIDsFromPlayFabIDsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetServerCustomIDsFromPlayFabIDsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetServerCustomIDsFromPlayFabIDsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetServerCustomIDsFromPlayFabIDsRequest"), sizeof(FServerGetServerCustomIDsFromPlayFabIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetServerCustomIDsFromPlayFabIDsRequest>()
{
	return FServerGetServerCustomIDsFromPlayFabIDsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest(FServerGetServerCustomIDsFromPlayFabIDsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetServerCustomIDsFromPlayFabIDsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetServerCustomIDsFromPlayFabIDsRequest>(FName(TEXT("ServerGetServerCustomIDsFromPlayFabIDsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetServerCustomIDsFromPlayFabIDsRequest;
	struct Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayFabIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayFabIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetServerCustomIDsFromPlayFabIDsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetServerCustomIDsFromPlayFabIDsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewProp_PlayFabIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetServerCustomIDsFromPlayFabIDsRequest" },
		{ "ModuleRelativePath", "Public/ServerGetServerCustomIDsFromPlayFabIDsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewProp_PlayFabIds = { "PlayFabIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetServerCustomIDsFromPlayFabIDsRequest, PlayFabIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewProp_PlayFabIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewProp_PlayFabIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::NewProp_PlayFabIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetServerCustomIDsFromPlayFabIDsRequest",
		sizeof(FServerGetServerCustomIDsFromPlayFabIDsRequest),
		alignof(FServerGetServerCustomIDsFromPlayFabIDsRequest),
		Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetServerCustomIDsFromPlayFabIDsRequest"), sizeof(FServerGetServerCustomIDsFromPlayFabIDsRequest), Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetServerCustomIDsFromPlayFabIDsRequest_Hash() { return 3447933466U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
