// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListMultiplayerServersRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListMultiplayerServersRequest() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabRequestCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListMultiplayerServersRequest>() == std::is_polymorphic<FPlayFabRequestCommon>(), "USTRUCT FMultiplayerListMultiplayerServersRequest cannot be polymorphic unless super FPlayFabRequestCommon is polymorphic");

class UScriptStruct* FMultiplayerListMultiplayerServersRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListMultiplayerServersRequest"), sizeof(FMultiplayerListMultiplayerServersRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListMultiplayerServersRequest>()
{
	return FMultiplayerListMultiplayerServersRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListMultiplayerServersRequest(FMultiplayerListMultiplayerServersRequest::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListMultiplayerServersRequest"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersRequest
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersRequest()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListMultiplayerServersRequest>(FName(TEXT("MultiplayerListMultiplayerServersRequest")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersRequest;
	struct Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SkipToken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListMultiplayerServersRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_BuildId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_BuildId = { "BuildId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersRequest, BuildId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_BuildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_BuildId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_CustomTags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_CustomTags = { "CustomTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersRequest, CustomTags), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_CustomTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_CustomTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_PageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersRequest, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_Region_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersRequest, Region), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_Region_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_SkipToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersRequest" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_SkipToken = { "SkipToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersRequest, SkipToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_SkipToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_SkipToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_BuildId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_CustomTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_Region,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::NewProp_SkipToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabRequestCommon,
		&NewStructOps,
		"MultiplayerListMultiplayerServersRequest",
		sizeof(FMultiplayerListMultiplayerServersRequest),
		alignof(FMultiplayerListMultiplayerServersRequest),
		Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListMultiplayerServersRequest"), sizeof(FMultiplayerListMultiplayerServersRequest), Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersRequest_Hash() { return 1050912494U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
