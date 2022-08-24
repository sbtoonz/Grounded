// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabError() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
class UScriptStruct* FPlayFabError::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabError, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabError"), sizeof(FPlayFabError), Get_Z_Construct_UScriptStruct_FPlayFabError_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabError>()
{
	return FPlayFabError::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabError(FPlayFabError::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabError"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabError>(FName(TEXT("PlayFabError")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabError;
	struct Z_Construct_UScriptStruct_FPlayFabError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasError_MetaData[];
#endif
		static void NewProp_HasError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorDetails;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabError_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabError>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabError" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError_SetBit(void* Obj)
	{
		((FPlayFabError*)Obj)->HasError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError = { "HasError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayFabError), &Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabError" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode = { "ErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabError" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName = { "ErrorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabError" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabError" },
		{ "ModuleRelativePath", "Public/PlayFabError.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails = { "ErrorDetails", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabError, ErrorDetails), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_HasError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabError_Statics::NewProp_ErrorDetails,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabError",
		sizeof(FPlayFabError),
		alignof(FPlayFabError),
		Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabError_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabError"), sizeof(FPlayFabError), Get_Z_Construct_UScriptStruct_FPlayFabError_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabError_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabError_Hash() { return 3429243612U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
