// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetPlayedTitleListResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetPlayedTitleListResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetPlayedTitleListResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetPlayedTitleListResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetPlayedTitleListResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetPlayedTitleListResult"), sizeof(FAdminGetPlayedTitleListResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetPlayedTitleListResult>()
{
	return FAdminGetPlayedTitleListResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetPlayedTitleListResult(FAdminGetPlayedTitleListResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetPlayedTitleListResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayedTitleListResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayedTitleListResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetPlayedTitleListResult>(FName(TEXT("AdminGetPlayedTitleListResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetPlayedTitleListResult;
	struct Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetPlayedTitleListResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetPlayedTitleListResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewProp_TitleIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetPlayedTitleListResult" },
		{ "ModuleRelativePath", "Public/AdminGetPlayedTitleListResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewProp_TitleIds = { "TitleIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetPlayedTitleListResult, TitleIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewProp_TitleIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewProp_TitleIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::NewProp_TitleIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetPlayedTitleListResult",
		sizeof(FAdminGetPlayedTitleListResult),
		alignof(FAdminGetPlayedTitleListResult),
		Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetPlayedTitleListResult"), sizeof(FAdminGetPlayedTitleListResult), Get_Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetPlayedTitleListResult_Hash() { return 1555151934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
