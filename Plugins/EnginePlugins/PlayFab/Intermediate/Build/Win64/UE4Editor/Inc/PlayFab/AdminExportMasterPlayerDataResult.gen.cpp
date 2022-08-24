// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminExportMasterPlayerDataResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminExportMasterPlayerDataResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminExportMasterPlayerDataResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminExportMasterPlayerDataResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminExportMasterPlayerDataResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminExportMasterPlayerDataResult"), sizeof(FAdminExportMasterPlayerDataResult), Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminExportMasterPlayerDataResult>()
{
	return FAdminExportMasterPlayerDataResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminExportMasterPlayerDataResult(FAdminExportMasterPlayerDataResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminExportMasterPlayerDataResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminExportMasterPlayerDataResult>(FName(TEXT("AdminExportMasterPlayerDataResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminExportMasterPlayerDataResult;
	struct Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobReceiptId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JobReceiptId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminExportMasterPlayerDataResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminExportMasterPlayerDataResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewProp_JobReceiptId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminExportMasterPlayerDataResult" },
		{ "ModuleRelativePath", "Public/AdminExportMasterPlayerDataResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewProp_JobReceiptId = { "JobReceiptId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminExportMasterPlayerDataResult, JobReceiptId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewProp_JobReceiptId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewProp_JobReceiptId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::NewProp_JobReceiptId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminExportMasterPlayerDataResult",
		sizeof(FAdminExportMasterPlayerDataResult),
		alignof(FAdminExportMasterPlayerDataResult),
		Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminExportMasterPlayerDataResult"), sizeof(FAdminExportMasterPlayerDataResult), Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminExportMasterPlayerDataResult_Hash() { return 2123853292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
