// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerBuildAliasDetailsResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerBuildAliasDetailsResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerBuildAliasDetailsResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerBuildAliasDetailsResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerBuildAliasDetailsResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerBuildAliasDetailsResponse"), sizeof(FMultiplayerBuildAliasDetailsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerBuildAliasDetailsResponse>()
{
	return FMultiplayerBuildAliasDetailsResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse(FMultiplayerBuildAliasDetailsResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerBuildAliasDetailsResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerBuildAliasDetailsResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerBuildAliasDetailsResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerBuildAliasDetailsResponse>(FName(TEXT("MultiplayerBuildAliasDetailsResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerBuildAliasDetailsResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliasId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AliasId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AliasName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AliasName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuildSelectionCriteria_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSelectionCriteria_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BuildSelectionCriteria;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerBuildAliasDetailsResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerBuildAliasDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasId = { "AliasId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerBuildAliasDetailsResponse, AliasId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerBuildAliasDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasName = { "AliasName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerBuildAliasDetailsResponse, AliasName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria_Inner = { "BuildSelectionCriteria", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerBuildAliasDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria = { "BuildSelectionCriteria", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerBuildAliasDetailsResponse, BuildSelectionCriteria), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_PageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerBuildAliasDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerBuildAliasDetailsResponse, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_SkipToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerBuildAliasDetailsResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerBuildAliasDetailsResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_SkipToken = { "SkipToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerBuildAliasDetailsResponse, SkipToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_SkipToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_SkipToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_AliasName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_BuildSelectionCriteria,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::NewProp_SkipToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerBuildAliasDetailsResponse",
		sizeof(FMultiplayerBuildAliasDetailsResponse),
		alignof(FMultiplayerBuildAliasDetailsResponse),
		Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerBuildAliasDetailsResponse"), sizeof(FMultiplayerBuildAliasDetailsResponse), Get_Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerBuildAliasDetailsResponse_Hash() { return 1948493954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
