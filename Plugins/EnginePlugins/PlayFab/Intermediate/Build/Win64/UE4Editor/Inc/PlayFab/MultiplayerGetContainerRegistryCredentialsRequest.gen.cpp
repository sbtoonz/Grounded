// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetContainerRegistryCredentialsRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetContainerRegistryCredentialsRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetContainerRegistryCredentialsRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerGetContainerRegistryCredentialsRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerGetContainerRegistryCredentialsRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetContainerRegistryCredentialsRequest"), sizeof(FMultiplayerGetContainerRegistryCredentialsRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetContainerRegistryCredentialsRequest>()
{
	return FMultiplayerGetContainerRegistryCredentialsRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest(FMultiplayerGetContainerRegistryCredentialsRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetContainerRegistryCredentialsRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetContainerRegistryCredentialsRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetContainerRegistryCredentialsRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetContainerRegistryCredentialsRequest>(FName(TEXT("MultiplayerGetContainerRegistryCredentialsRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetContainerRegistryCredentialsRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetContainerRegistryCredentialsRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetContainerRegistryCredentialsRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetContainerRegistryCredentialsRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetContainerRegistryCredentialsRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetContainerRegistryCredentialsRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewProp_CustomTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::NewProp_CustomTags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerGetContainerRegistryCredentialsRequest",
		sizeof(FMultiplayerGetContainerRegistryCredentialsRequest),
		alignof(FMultiplayerGetContainerRegistryCredentialsRequest),
		Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetContainerRegistryCredentialsRequest"), sizeof(FMultiplayerGetContainerRegistryCredentialsRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetContainerRegistryCredentialsRequest_Hash() { return 3700778998U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
