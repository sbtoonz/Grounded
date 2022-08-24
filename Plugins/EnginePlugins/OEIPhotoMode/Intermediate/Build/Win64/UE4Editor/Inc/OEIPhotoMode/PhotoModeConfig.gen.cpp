// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeConfig() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeConfig();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeGeneralOptions();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModePawnOptions();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeStorageOptions();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeUIOptions();
// End Cross Module References
class UScriptStruct* FPhotoModeConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeConfig, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeConfig"), sizeof(FPhotoModeConfig), Get_Z_Construct_UScriptStruct_FPhotoModeConfig_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeConfig>()
{
	return FPhotoModeConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeConfig(FPhotoModeConfig::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeConfig"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeConfig
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeConfig()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeConfig>(FName(TEXT("PhotoModeConfig")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeConfig;
	struct Z_Construct_UScriptStruct_FPhotoModeConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneralOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneralOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorageOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StorageOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIOptions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_GeneralOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeConfig" },
		{ "ModuleRelativePath", "Public/PhotoModeConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_GeneralOptions = { "GeneralOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeConfig, GeneralOptions), Z_Construct_UScriptStruct_FPhotoModeGeneralOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_GeneralOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_GeneralOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_PawnOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeConfig" },
		{ "ModuleRelativePath", "Public/PhotoModeConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_PawnOptions = { "PawnOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeConfig, PawnOptions), Z_Construct_UScriptStruct_FPhotoModePawnOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_PawnOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_PawnOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_StorageOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeConfig" },
		{ "ModuleRelativePath", "Public/PhotoModeConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_StorageOptions = { "StorageOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeConfig, StorageOptions), Z_Construct_UScriptStruct_FPhotoModeStorageOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_StorageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_StorageOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_UIOptions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeConfig" },
		{ "ModuleRelativePath", "Public/PhotoModeConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_UIOptions = { "UIOptions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeConfig, UIOptions), Z_Construct_UScriptStruct_FPhotoModeUIOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_UIOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_UIOptions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_GeneralOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_PawnOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_StorageOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::NewProp_UIOptions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeConfig",
		sizeof(FPhotoModeConfig),
		alignof(FPhotoModeConfig),
		Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeConfig"), sizeof(FPhotoModeConfig), Get_Z_Construct_UScriptStruct_FPhotoModeConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeConfig_Hash() { return 2180573954U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
