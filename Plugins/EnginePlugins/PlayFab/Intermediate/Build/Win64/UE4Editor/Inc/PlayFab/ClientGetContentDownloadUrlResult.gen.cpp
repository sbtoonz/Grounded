// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ClientGetContentDownloadUrlResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClientGetContentDownloadUrlResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FClientGetContentDownloadUrlResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FClientGetContentDownloadUrlResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FClientGetContentDownloadUrlResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("ClientGetContentDownloadUrlResult"), sizeof(FClientGetContentDownloadUrlResult), Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FClientGetContentDownloadUrlResult>()
{
	return FClientGetContentDownloadUrlResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGetContentDownloadUrlResult(FClientGetContentDownloadUrlResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("ClientGetContentDownloadUrlResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlResult()
	{
		UScriptStruct::DeferCppStructOps<FClientGetContentDownloadUrlResult>(FName(TEXT("ClientGetContentDownloadUrlResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFClientGetContentDownloadUrlResult;
	struct Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGetContentDownloadUrlResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ClientGetContentDownloadUrlResult" },
		{ "ModuleRelativePath", "Public/ClientGetContentDownloadUrlResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGetContentDownloadUrlResult, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"ClientGetContentDownloadUrlResult",
		sizeof(FClientGetContentDownloadUrlResult),
		alignof(FClientGetContentDownloadUrlResult),
		Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGetContentDownloadUrlResult"), sizeof(FClientGetContentDownloadUrlResult), Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGetContentDownloadUrlResult_Hash() { return 1108619908U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
