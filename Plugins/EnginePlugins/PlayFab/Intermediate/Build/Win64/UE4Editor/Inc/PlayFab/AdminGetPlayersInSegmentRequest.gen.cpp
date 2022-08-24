// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayersInSegmentRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayersInSegmentRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayersInSegmentRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FAdminGetPlayersInSegmentRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FAdminGetPlayersInSegmentRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayersInSegmentRequest"), sizeof(FAdminGetPlayersInSegmentRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayersInSegmentRequest>()
{
	return FAdminGetPlayersInSegmentRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayersInSegmentRequest(FAdminGetPlayersInSegmentRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayersInSegmentRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayersInSegmentRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayersInSegmentRequest()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayersInSegmentRequest>(FName(TEXT("AdminGetPlayersInSegmentRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayersInSegmentRequest;
	struct Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayersInSegmentRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken = { "ContinuationToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayersInSegmentRequest, ContinuationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayersInSegmentRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize = { "MaxBatchSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayersInSegmentRequest, MaxBatchSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive = { "SecondsToLive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayersInSegmentRequest, SecondsToLive), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayersInSegmentRequest" },
		{ "ModuleRelativePath", "Public/AdminGetPlayersInSegmentRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SegmentId = { "SegmentId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayersInSegmentRequest, SegmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SegmentId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_ContinuationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_MaxBatchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SecondsToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::NewProp_SegmentId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"AdminGetPlayersInSegmentRequest",
		sizeof(FAdminGetPlayersInSegmentRequest),
		alignof(FAdminGetPlayersInSegmentRequest),
		Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayersInSegmentRequest"), sizeof(FAdminGetPlayersInSegmentRequest), Get_Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayersInSegmentRequest_Hash() { return 3005792815U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
