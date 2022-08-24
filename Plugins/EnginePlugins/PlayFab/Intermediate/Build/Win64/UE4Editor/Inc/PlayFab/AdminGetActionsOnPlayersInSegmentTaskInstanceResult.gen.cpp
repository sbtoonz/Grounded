// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminGetActionsOnPlayersInSegmentTaskInstanceResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminGetActionsOnPlayersInSegmentTaskInstanceResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminGetActionsOnPlayersInSegmentTaskInstanceResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminGetActionsOnPlayersInSegmentTaskInstanceResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminGetActionsOnPlayersInSegmentTaskInstanceResult"), sizeof(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult), Get_Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminGetActionsOnPlayersInSegmentTaskInstanceResult>()
{
	return FAdminGetActionsOnPlayersInSegmentTaskInstanceResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminGetActionsOnPlayersInSegmentTaskInstanceResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetActionsOnPlayersInSegmentTaskInstanceResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminGetActionsOnPlayersInSegmentTaskInstanceResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminGetActionsOnPlayersInSegmentTaskInstanceResult>(FName(TEXT("AdminGetActionsOnPlayersInSegmentTaskInstanceResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminGetActionsOnPlayersInSegmentTaskInstanceResult;
	struct Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Summary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminGetActionsOnPlayersInSegmentTaskInstanceResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetActionsOnPlayersInSegmentTaskInstanceResult" },
		{ "ModuleRelativePath", "Public/AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult, Parameter), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Parameter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Summary_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminGetActionsOnPlayersInSegmentTaskInstanceResult" },
		{ "ModuleRelativePath", "Public/AdminGetActionsOnPlayersInSegmentTaskInstanceResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult, Summary), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Summary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Summary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::NewProp_Summary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminGetActionsOnPlayersInSegmentTaskInstanceResult",
		sizeof(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult),
		alignof(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult),
		Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminGetActionsOnPlayersInSegmentTaskInstanceResult"), sizeof(FAdminGetActionsOnPlayersInSegmentTaskInstanceResult), Get_Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminGetActionsOnPlayersInSegmentTaskInstanceResult_Hash() { return 3530918648U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
