// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/OEIScriptingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIScriptingSettings() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UOEIScriptingSettings_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UOEIScriptingSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UGlobalScriptsBundle_NoRegister();
// End Cross Module References
	void UOEIScriptingSettings::StaticRegisterNativesUOEIScriptingSettings()
	{
	}
	UClass* Z_Construct_UClass_UOEIScriptingSettings_NoRegister()
	{
		return UOEIScriptingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOEIScriptingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GlobalScriptsBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalScriptsBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalScriptsBundles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExportDataAssetEnums_MetaData[];
#endif
		static void NewProp_bExportDataAssetEnums_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExportDataAssetEnums;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIScriptingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIScriptingSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIScriptingSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIScriptingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles_Inner = { "GlobalScriptsBundles", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGlobalScriptsBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIScriptingSettings" },
		{ "ModuleRelativePath", "Public/OEIScriptingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles = { "GlobalScriptsBundles", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIScriptingSettings, GlobalScriptsBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIScriptingSettings" },
		{ "ModuleRelativePath", "Public/OEIScriptingSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums_SetBit(void* Obj)
	{
		((UOEIScriptingSettings*)Obj)->bExportDataAssetEnums = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums = { "bExportDataAssetEnums", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOEIScriptingSettings), &Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIScriptingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_GlobalScriptsBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIScriptingSettings_Statics::NewProp_bExportDataAssetEnums,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIScriptingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIScriptingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIScriptingSettings_Statics::ClassParams = {
		&UOEIScriptingSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIScriptingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIScriptingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIScriptingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIScriptingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIScriptingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIScriptingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIScriptingSettings, 3272081393);
	template<> OEISCRIPTING_API UClass* StaticClass<UOEIScriptingSettings>()
	{
		return UOEIScriptingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIScriptingSettings(Z_Construct_UClass_UOEIScriptingSettings, &UOEIScriptingSettings::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UOEIScriptingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIScriptingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
