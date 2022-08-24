// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/LocalizationGetLanguageListResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationGetLanguageListResponse() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FLocalizationGetLanguageListResponse>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FLocalizationGetLanguageListResponse cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FLocalizationGetLanguageListResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse, Z_Construct_UPackage__Script_PlayFab(), TEXT("LocalizationGetLanguageListResponse"), sizeof(FLocalizationGetLanguageListResponse), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FLocalizationGetLanguageListResponse>()
{
	return FLocalizationGetLanguageListResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocalizationGetLanguageListResponse(FLocalizationGetLanguageListResponse::StaticStruct, TEXT("/Script/PlayFab"), TEXT("LocalizationGetLanguageListResponse"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse
{
	FScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse()
	{
		UScriptStruct::DeferCppStructOps<FLocalizationGetLanguageListResponse>(FName(TEXT("LocalizationGetLanguageListResponse")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFLocalizationGetLanguageListResponse;
	struct Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LanguageList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LocalizationGetLanguageListResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalizationGetLanguageListResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LocalizationGetLanguageListResponse" },
		{ "ModuleRelativePath", "Public/LocalizationGetLanguageListResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList = { "LanguageList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLocalizationGetLanguageListResponse, LanguageList), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::NewProp_LanguageList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"LocalizationGetLanguageListResponse",
		sizeof(FLocalizationGetLanguageListResponse),
		alignof(FLocalizationGetLanguageListResponse),
		Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocalizationGetLanguageListResponse"), sizeof(FLocalizationGetLanguageListResponse), Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocalizationGetLanguageListResponse_Hash() { return 599619482U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
