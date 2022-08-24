// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/PlayFabBaseModel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabBaseModel() {}
// Cross Module References
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
	PLAYFAB_API UScriptStruct* Z_Construct_UScriptStruct_FPlayFabError();
	PLAYFAB_API UClass* Z_Construct_UClass_UPlayFabJsonObject_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayFabBaseModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PLAYFAB_API uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayFabBaseModel, Z_Construct_UPackage__Script_PlayFab(), TEXT("PlayFabBaseModel"), sizeof(FPlayFabBaseModel), Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash());
	}
	return Singleton;
}
template<> PLAYFAB_API UScriptStruct* StaticStruct<FPlayFabBaseModel>()
{
	return FPlayFabBaseModel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayFabBaseModel(FPlayFabBaseModel::StaticStruct, TEXT("/Script/PlayFab"), TEXT("PlayFabBaseModel"), false, nullptr, nullptr);
static struct FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel
{
	FScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel()
	{
		UScriptStruct::DeferCppStructOps<FPlayFabBaseModel>(FName(TEXT("PlayFabBaseModel")));
	}
} ScriptStruct_PlayFab_StaticRegisterNativesFPlayFabBaseModel;
	struct Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseError_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_responseError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_responseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayFabBaseModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayFabBaseModel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabBaseModel" },
		{ "ModuleRelativePath", "Public/PlayFabBaseModel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError = { "responseError", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseError), Z_Construct_UScriptStruct_FPlayFabError, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabBaseModel" },
		{ "ModuleRelativePath", "Public/PlayFabBaseModel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayFabBaseModel, responseData), Z_Construct_UClass_UPlayFabJsonObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::NewProp_responseData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFab,
		nullptr,
		&NewStructOps,
		"PlayFabBaseModel",
		sizeof(FPlayFabBaseModel),
		alignof(FPlayFabBaseModel),
		Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayFabBaseModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayFabBaseModel"), sizeof(FPlayFabBaseModel), Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayFabBaseModel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayFabBaseModel_Hash() { return 2169488675U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif