// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminRunTaskResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminRunTaskResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminRunTaskResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminRunTaskResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminRunTaskResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminRunTaskResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminRunTaskResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminRunTaskResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminRunTaskResult"), sizeof(FAdminRunTaskResult), Get_Z_Construct_UScriptStruct_FAdminRunTaskResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminRunTaskResult>()
{
	return FAdminRunTaskResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminRunTaskResult(FAdminRunTaskResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminRunTaskResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminRunTaskResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminRunTaskResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminRunTaskResult>(FName(TEXT("AdminRunTaskResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminRunTaskResult;
	struct Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskInstanceId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskInstanceId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminRunTaskResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminRunTaskResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewProp_TaskInstanceId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminRunTaskResult" },
		{ "ModuleRelativePath", "Public/AdminRunTaskResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewProp_TaskInstanceId = { "TaskInstanceId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminRunTaskResult, TaskInstanceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewProp_TaskInstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewProp_TaskInstanceId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::NewProp_TaskInstanceId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminRunTaskResult",
		sizeof(FAdminRunTaskResult),
		alignof(FAdminRunTaskResult),
		Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminRunTaskResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminRunTaskResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminRunTaskResult"), sizeof(FAdminRunTaskResult), Get_Z_Construct_UScriptStruct_FAdminRunTaskResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminRunTaskResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminRunTaskResult_Hash() { return 1277790107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
