// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/AdminCreateTaskResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdminCreateTaskResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateTaskResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
// End Cross Module References

static_assert(std::is_polymorphic<FAdminCreateTaskResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FAdminCreateTaskResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FAdminCreateTaskResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FAdminCreateTaskResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAdminCreateTaskResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("AdminCreateTaskResult"), sizeof(FAdminCreateTaskResult), Get_Z_Construct_UScriptStruct_FAdminCreateTaskResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FAdminCreateTaskResult>()
{
	return FAdminCreateTaskResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAdminCreateTaskResult(FAdminCreateTaskResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("AdminCreateTaskResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateTaskResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateTaskResult()
	{
		UScriptStruct::DeferCppStructOps<FAdminCreateTaskResult>(FName(TEXT("AdminCreateTaskResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFAdminCreateTaskResult;
	struct Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TaskId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AdminCreateTaskResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAdminCreateTaskResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewProp_TaskId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AdminCreateTaskResult" },
		{ "ModuleRelativePath", "Public/AdminCreateTaskResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAdminCreateTaskResult, TaskId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewProp_TaskId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewProp_TaskId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::NewProp_TaskId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"AdminCreateTaskResult",
		sizeof(FAdminCreateTaskResult),
		alignof(FAdminCreateTaskResult),
		Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAdminCreateTaskResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAdminCreateTaskResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AdminCreateTaskResult"), sizeof(FAdminCreateTaskResult), Get_Z_Construct_UScriptStruct_FAdminCreateTaskResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAdminCreateTaskResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAdminCreateTaskResult_Hash() { return 1107877583U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
