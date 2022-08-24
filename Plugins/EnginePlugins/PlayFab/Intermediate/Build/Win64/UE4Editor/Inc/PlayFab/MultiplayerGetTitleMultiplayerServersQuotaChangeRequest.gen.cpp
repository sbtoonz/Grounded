// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerGetTitleMultiplayerServersQuotaChangeRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerGetTitleMultiplayerServersQuotaChangeRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeRequest"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>()
{
	return FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>(FName(TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerGetTitleMultiplayerServersQuotaChangeRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequestId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_RequestId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerGetTitleMultiplayerServersQuotaChangeRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerGetTitleMultiplayerServersQuotaChangeRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_RequestId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::NewProp_RequestId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerGetTitleMultiplayerServersQuotaChangeRequest",
		sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest),
		alignof(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest),
		Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerGetTitleMultiplayerServersQuotaChangeRequest"), sizeof(FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest), Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest_Hash() { return 876471720U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
