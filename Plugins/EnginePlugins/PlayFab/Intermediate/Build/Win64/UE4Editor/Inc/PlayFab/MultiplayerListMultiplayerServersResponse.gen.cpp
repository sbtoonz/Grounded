// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/MultiplayerListMultiplayerServersResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiplayerListMultiplayerServersResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMultiplayerListMultiplayerServersResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FMultiplayerListMultiplayerServersResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FMultiplayerListMultiplayerServersResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("MultiplayerListMultiplayerServersResponse"), sizeof(FMultiplayerListMultiplayerServersResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FMultiplayerListMultiplayerServersResponse>()
{
	return FMultiplayerListMultiplayerServersResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiplayerListMultiplayerServersResponse(FMultiplayerListMultiplayerServersResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("MultiplayerListMultiplayerServersResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersResponse()
	{
		UScriptStruct::DeferCppStructOps<FMultiplayerListMultiplayerServersResponse>(FName(TEXT("MultiplayerListMultiplayerServersResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFMultiplayerListMultiplayerServersResponse;
	struct Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MultiplayerServerSummaries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiplayerServerSummaries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiplayerServerSummaries;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiplayerListMultiplayerServersResponse>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries_Inner = { "MultiplayerServerSummaries", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries = { "MultiplayerServerSummaries", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersResponse, MultiplayerServerSummaries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_PageSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_PageSize = { "PageSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersResponse, PageSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_PageSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_PageSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_SkipToken_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MultiplayerListMultiplayerServersResponse" },
		{ "ModuleRelativePath", "Public/MultiplayerListMultiplayerServersResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_SkipToken = { "SkipToken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiplayerListMultiplayerServersResponse, SkipToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_SkipToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_SkipToken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_MultiplayerServerSummaries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_PageSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::NewProp_SkipToken,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"MultiplayerListMultiplayerServersResponse",
		sizeof(FMultiplayerListMultiplayerServersResponse),
		alignof(FMultiplayerListMultiplayerServersResponse),
		Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiplayerListMultiplayerServersResponse"), sizeof(FMultiplayerListMultiplayerServersResponse), Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiplayerListMultiplayerServersResponse_Hash() { return 1583658881U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
