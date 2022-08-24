// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeStorageOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeStorageOptions() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeStorageOptions();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
// End Cross Module References
class UScriptStruct* FPhotoModeStorageOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeStorageOptions, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeStorageOptions"), sizeof(FPhotoModeStorageOptions), Get_Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeStorageOptions>()
{
	return FPhotoModeStorageOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeStorageOptions(FPhotoModeStorageOptions::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeStorageOptions"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeStorageOptions
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeStorageOptions()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeStorageOptions>(FName(TEXT("PhotoModeStorageOptions")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeStorageOptions;
	struct Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileNameBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeStorageOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeStorageOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_FileNameBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeStorageOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeStorageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_FileNameBase = { "FileNameBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeStorageOptions, FileNameBase), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_FileNameBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_FileNameBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_Path_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeStorageOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeStorageOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeStorageOptions, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_FileNameBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeStorageOptions",
		sizeof(FPhotoModeStorageOptions),
		alignof(FPhotoModeStorageOptions),
		Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeStorageOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeStorageOptions"), sizeof(FPhotoModeStorageOptions), Get_Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeStorageOptions_Hash() { return 515129430U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
