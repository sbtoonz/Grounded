// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/CloudScriptExecuteFunctionResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloudScriptExecuteFunctionResult() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabResultCommon();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FCloudScriptExecuteFunctionResult>() == std::is_polymorphic<FPlayFabResultCommon>(), "USTRUCT FCloudScriptExecuteFunctionResult cannot be polymorphic unless super FPlayFabResultCommon is polymorphic");

class UScriptStruct* FCloudScriptExecuteFunctionResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult, Z_Construct_UPackage__Script_PlayFab(), TEXT("CloudScriptExecuteFunctionResult"), sizeof(FCloudScriptExecuteFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FCloudScriptExecuteFunctionResult>()
{
	return FCloudScriptExecuteFunctionResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCloudScriptExecuteFunctionResult(FCloudScriptExecuteFunctionResult::StaticStruct, TEXT("/Script/PlayFab"), TEXT("CloudScriptExecuteFunctionResult"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult
{
	FScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult()
	{
		UScriptStruct::DeferCppStructOps<FCloudScriptExecuteFunctionResult>(FName(TEXT("CloudScriptExecuteFunctionResult")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFCloudScriptExecuteFunctionResult;
	struct Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionTimeMilliseconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExecutionTimeMilliseconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunctionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionResultTooLarge_MetaData[];
#endif
		static void NewProp_FunctionResultTooLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FunctionResultTooLarge;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudScriptExecuteFunctionResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionResult" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, Error), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionResult" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds = { "ExecutionTimeMilliseconds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, ExecutionTimeMilliseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionResult" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionResult" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult = { "FunctionResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCloudScriptExecuteFunctionResult, FunctionResult), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CloudScriptExecuteFunctionResult" },
		{ "ModuleRelativePath", "Public/CloudScriptExecuteFunctionResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit(void* Obj)
	{
		((FCloudScriptExecuteFunctionResult*)Obj)->FunctionResultTooLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge = { "FunctionResultTooLarge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCloudScriptExecuteFunctionResult), &Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_Error,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_ExecutionTimeMilliseconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::NewProp_FunctionResultTooLarge,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		Z_Construct_UScriptStruct_FPlayFabResultCommon,
		&NewStructOps,
		"CloudScriptExecuteFunctionResult",
		sizeof(FCloudScriptExecuteFunctionResult),
		alignof(FCloudScriptExecuteFunctionResult),
		Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CloudScriptExecuteFunctionResult"), sizeof(FCloudScriptExecuteFunctionResult), Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCloudScriptExecuteFunctionResult_Hash() { return 2644490885U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
