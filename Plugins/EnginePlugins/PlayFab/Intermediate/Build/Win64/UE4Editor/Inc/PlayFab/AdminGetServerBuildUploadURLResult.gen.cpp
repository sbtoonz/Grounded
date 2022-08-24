// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetServerBuildUploadURLResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetServerBuildUploadURLResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetServerBuildUploadURLResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetServerBuildUploadURLResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetServerBuildUploadURLResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetServerBuildUploadURLResult"), sizeof(FAdminGetServerBuildUploadURLResult), Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetServerBuildUploadURLResult>()
{
	return FAdminGetServerBuildUploadURLResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetServerBuildUploadURLResult(FAdminGetServerBuildUploadURLResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetServerBuildUploadURLResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetServerBuildUploadURLResult>(FName(TEXT("AdminGetServerBuildUploadURLResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetServerBuildUploadURLResult;
	struct Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetServerBuildUploadURLResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetServerBuildUploadURLResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewProp_URL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetServerBuildUploadURLResult" },
		{ "ModuleRelativePath", "Public/AdminGetServerBuildUploadURLResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetServerBuildUploadURLResult, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetServerBuildUploadURLResult",
		sizeof(FAdminGetServerBuildUploadURLResult),
		alignof(FAdminGetServerBuildUploadURLResult),
		Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetServerBuildUploadURLResult"), sizeof(FAdminGetServerBuildUploadURLResult), Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetServerBuildUploadURLResult_Hash() { return 715417945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
