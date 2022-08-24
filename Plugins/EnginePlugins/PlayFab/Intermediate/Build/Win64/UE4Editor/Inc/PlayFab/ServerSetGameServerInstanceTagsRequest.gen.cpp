// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerSetGameServerInstanceTagsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerSetGameServerInstanceTagsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerSetGameServerInstanceTagsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerSetGameServerInstanceTagsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerSetGameServerInstanceTagsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerSetGameServerInstanceTagsRequest"), sizeof(FServerSetGameServerInstanceTagsRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerSetGameServerInstanceTagsRequest>()
{
	return FServerSetGameServerInstanceTagsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerSetGameServerInstanceTagsRequest(FServerSetGameServerInstanceTagsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerSetGameServerInstanceTagsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceTagsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceTagsRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerSetGameServerInstanceTagsRequest>(FName(TEXT("ServerSetGameServerInstanceTagsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerSetGameServerInstanceTagsRequest;
	struct Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LobbyId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceTagsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerSetGameServerInstanceTagsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_LobbyId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceTagsRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceTagsRequest, LobbyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_LobbyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_LobbyId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_Tags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerSetGameServerInstanceTagsRequest" },
		{ "ModuleRelativePath", "Public/ServerSetGameServerInstanceTagsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerSetGameServerInstanceTagsRequest, Tags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_LobbyId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::NewProp_Tags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerSetGameServerInstanceTagsRequest",
		sizeof(FServerSetGameServerInstanceTagsRequest),
		alignof(FServerSetGameServerInstanceTagsRequest),
		Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerSetGameServerInstanceTagsRequest"), sizeof(FServerSetGameServerInstanceTagsRequest), Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerSetGameServerInstanceTagsRequest_Hash() { return 1530216779U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
