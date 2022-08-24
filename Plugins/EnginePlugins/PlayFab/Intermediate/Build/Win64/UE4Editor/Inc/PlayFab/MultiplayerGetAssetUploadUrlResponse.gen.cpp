// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetAssetUploadUrlResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetAssetUploadUrlResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetAssetUploadUrlResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerGetAssetUploadUrlResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerGetAssetUploadUrlResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetAssetUploadUrlResponse"), sizeof(FMultiplayerGetAssetUploadUrlResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetAssetUploadUrlResponse>()
{
	return FMultiplayerGetAssetUploadUrlResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse(FMultiplayerGetAssetUploadUrlResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetAssetUploadUrlResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetAssetUploadUrlResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetAssetUploadUrlResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetAssetUploadUrlResponse>(FName(TEXT("MultiplayerGetAssetUploadUrlResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetAssetUploadUrlResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUploadUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetUploadUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetAssetUploadUrlResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetAssetUploadUrlResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_AssetUploadUrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetAssetUploadUrlResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetAssetUploadUrlResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_AssetUploadUrl = { "AssetUploadUrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetAssetUploadUrlResponse, AssetUploadUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_AssetUploadUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_AssetUploadUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_Filename_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetAssetUploadUrlResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerGetAssetUploadUrlResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetAssetUploadUrlResponse, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_AssetUploadUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::NewProp_Filename,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerGetAssetUploadUrlResponse",
		sizeof(FMultiplayerGetAssetUploadUrlResponse),
		alignof(FMultiplayerGetAssetUploadUrlResponse),
		Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetAssetUploadUrlResponse"), sizeof(FMultiplayerGetAssetUploadUrlResponse), Get_Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetAssetUploadUrlResponse_Hash() { return 2875155017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
