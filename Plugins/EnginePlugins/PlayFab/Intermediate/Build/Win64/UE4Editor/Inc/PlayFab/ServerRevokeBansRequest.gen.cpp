// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerRevokeBansRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRevokeBansRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerRevokeBansRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FServerRevokeBansRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerRevokeBansRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerRevokeBansRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerRevokeBansRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerRevokeBansRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerRevokeBansRequest"), sizeof(FServerRevokeBansRequest), Get_Z_Construct_UScriptStruct_FServerRevokeBansRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerRevokeBansRequest>()
{
	return FServerRevokeBansRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerRevokeBansRequest(FServerRevokeBansRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerRevokeBansRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerRevokeBansRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerRevokeBansRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerRevokeBansRequest>(FName(TEXT("ServerRevokeBansRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerRevokeBansRequest;
	struct Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BanIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BanIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerRevokeBansRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerRevokeBansRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewProp_BanIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerRevokeBansRequest" },
		{ "ModuleRelativePath", "Public/ServerRevokeBansRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewProp_BanIds = { "BanIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerRevokeBansRequest, BanIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewProp_BanIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewProp_BanIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::NewProp_BanIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerRevokeBansRequest",
		sizeof(FServerRevokeBansRequest),
		alignof(FServerRevokeBansRequest),
		Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerRevokeBansRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerRevokeBansRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerRevokeBansRequest"), sizeof(FServerRevokeBansRequest), Get_Z_Construct_UScriptStruct_FServerRevokeBansRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerRevokeBansRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerRevokeBansRequest_Hash() { return 1957195227U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
