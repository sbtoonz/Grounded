// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ServerGetPlayersInSegmentRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerGetPlayersInSegmentRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FServerGetPlayersInSegmentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FServerGetPlayersInSegmentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FServerGetPlayersInSegmentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("ServerGetPlayersInSegmentRequest"), sizeof(FServerGetPlayersInSegmentRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FServerGetPlayersInSegmentRequest>()
{
	return FServerGetPlayersInSegmentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FServerGetPlayersInSegmentRequest(FServerGetPlayersInSegmentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ServerGetPlayersInSegmentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentRequest()
	{
		UScriptStruct::DeferCppStructOps<FServerGetPlayersInSegmentRequest>(FName(TEXT("ServerGetPlayersInSegmentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFServerGetPlayersInSegmentRequest;
	struct Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContinuationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContinuationToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBatchSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBatchSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondsToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SecondsToLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SegmentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SegmentId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerGetPlayersInSegmentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken = { "ContinuationToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentRequest, ContinuationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize = { "MaxBatchSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentRequest, MaxBatchSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive = { "SecondsToLive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentRequest, SecondsToLive), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ServerGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/ServerGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FServerGetPlayersInSegmentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::NewProp_SegmentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"ServerGetPlayersInSegmentRequest",
		sizeof(FServerGetPlayersInSegmentRequest),
		alignof(FServerGetPlayersInSegmentRequest),
		Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ServerGetPlayersInSegmentRequest"), sizeof(FServerGetPlayersInSegmentRequest), Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FServerGetPlayersInSegmentRequest_Hash() { return 4077120143U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
