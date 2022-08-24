// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminDeleteMasterPlayerAccountResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminDeleteMasterPlayerAccountResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminDeleteMasterPlayerAccountResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminDeleteMasterPlayerAccountResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminDeleteMasterPlayerAccountResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminDeleteMasterPlayerAccountResult"), sizeof(FAdminDeleteMasterPlayerAccountResult), Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminDeleteMasterPlayerAccountResult>()
{
	return FAdminDeleteMasterPlayerAccountResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult(FAdminDeleteMasterPlayerAccountResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminDeleteMasterPlayerAccountResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminDeleteMasterPlayerAccountResult>(FName(TEXT("AdminDeleteMasterPlayerAccountResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminDeleteMasterPlayerAccountResult;
	struct Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobReceiptId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JobReceiptId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminDeleteMasterPlayerAccountResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_JobReceiptId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeleteMasterPlayerAccountResult" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_JobReceiptId = { "JobReceiptId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeleteMasterPlayerAccountResult, JobReceiptId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_JobReceiptId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_JobReceiptId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_TitleIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminDeleteMasterPlayerAccountResult" },
		{ "ModuleRelativePath", "Public/AdminDeleteMasterPlayerAccountResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_TitleIds = { "TitleIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminDeleteMasterPlayerAccountResult, TitleIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_TitleIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_TitleIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_JobReceiptId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::NewProp_TitleIds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminDeleteMasterPlayerAccountResult",
		sizeof(FAdminDeleteMasterPlayerAccountResult),
		alignof(FAdminDeleteMasterPlayerAccountResult),
		Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminDeleteMasterPlayerAccountResult"), sizeof(FAdminDeleteMasterPlayerAccountResult), Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminDeleteMasterPlayerAccountResult_Hash() { return 1934375337U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
