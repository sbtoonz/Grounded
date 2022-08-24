// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListAssetSummariesRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListAssetSummariesRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListAssetSummariesRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerListAssetSummariesRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerListAssetSummariesRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListAssetSummariesRequest"), sizeof(FMultiplayerListAssetSummariesRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListAssetSummariesRequest>()
{
	return FMultiplayerListAssetSummariesRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListAssetSummariesRequest(FMultiplayerListAssetSummariesRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListAssetSummariesRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListAssetSummariesRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListAssetSummariesRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListAssetSummariesRequest>(FName(TEXT("MultiplayerListAssetSummariesRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListAssetSummariesRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListAssetSummariesRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListAssetSummariesRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListAssetSummariesRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListAssetSummariesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListAssetSummariesRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_PageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListAssetSummariesRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListAssetSummariesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListAssetSummariesRequest, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_SkipToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListAssetSummariesRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListAssetSummariesRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_SkipToken = { "SkipToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListAssetSummariesRequest, SkipToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_SkipToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_SkipToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::NewProp_SkipToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerListAssetSummariesRequest",
		sizeof(FMultiplayerListAssetSummariesRequest),
		alignof(FMultiplayerListAssetSummariesRequest),
		Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListAssetSummariesRequest"), sizeof(FMultiplayerListAssetSummariesRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListAssetSummariesRequest_Hash() { return 1171160835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
