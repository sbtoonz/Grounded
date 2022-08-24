// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeUIOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeUIOptions() {}
// Cross Module References
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeUIOptions();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsData_NoRegister();
// End Cross Module References
class UScriptStruct* FPhotoModeUIOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OEIPHOTOMODE_API uint32 Get_Z_Construct_UScriptStruct_FPhotoModeUIOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhotoModeUIOptions, Z_Construct_UPackage__Script_OEIPhotoMode(), TEXT("PhotoModeUIOptions"), sizeof(FPhotoModeUIOptions), Get_Z_Construct_UScriptStruct_FPhotoModeUIOptions_Hash());
	}
	return Singleton;
}
template<> OEIPHOTOMODE_API UScriptStruct* StaticStruct<FPhotoModeUIOptions>()
{
	return FPhotoModeUIOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhotoModeUIOptions(FPhotoModeUIOptions::StaticStruct, TEXT("/Script/OEIPhotoMode"), TEXT("PhotoModeUIOptions"), false, nullptr, nullptr);
static struct FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeUIOptions
{
	FScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeUIOptions()
	{
		UScriptStruct::DeferCppStructOps<FPhotoModeUIOptions>(FName(TEXT("PhotoModeUIOptions")));
	}
} ScriptStruct_OEIPhotoMode_StaticRegisterNativesFPhotoModeUIOptions;
	struct Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeUIOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhotoModeUIOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewProp_SettingData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeUIOptions" },
		{ "ModuleRelativePath", "Public/PhotoModeUIOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhotoModeUIOptions, SettingData), Z_Construct_UClass_UPhotoModeSettingsData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewProp_SettingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewProp_SettingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::NewProp_SettingData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
		nullptr,
		&NewStructOps,
		"PhotoModeUIOptions",
		sizeof(FPhotoModeUIOptions),
		alignof(FPhotoModeUIOptions),
		Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeUIOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhotoModeUIOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OEIPhotoMode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhotoModeUIOptions"), sizeof(FPhotoModeUIOptions), Get_Z_Construct_UScriptStruct_FPhotoModeUIOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhotoModeUIOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhotoModeUIOptions_Hash() { return 4088508292U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
