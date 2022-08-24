// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIText/Public/OEITextSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEITextSettings() {}
// Cross Module References
	OEITEXT_API UClass* Z_Construct_UClass_UOEITextSettings_NoRegister();
	OEITEXT_API UClass* Z_Construct_UClass_UOEITextSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OEIText();
	OEITEXT_API UScriptStruct* Z_Construct_UScriptStruct_FStringTableBundleSets();
	OEITEXT_API UClass* Z_Construct_UClass_UStringTokensBundle_NoRegister();
// End Cross Module References
	void UOEITextSettings::StaticRegisterNativesUOEITextSettings()
	{
	}
	UClass* Z_Construct_UClass_UOEITextSettings_NoRegister()
	{
		return UOEITextSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOEITextSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultLanguageCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultVOLanguageCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultVOLanguageCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDialects_MetaData[];
#endif
		static void NewProp_bSupportsDialects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDialects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StringTableBundleSetMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringTableBundleSetMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTableBundleSetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StringTableBundleSetMap;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StringTokenBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringTokenBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringTokenBundles;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SupportedVOLanguageCodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedVOLanguageCodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedVOLanguageCodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEITextSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEITextSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultLanguageCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultLanguageCode = { "DefaultLanguageCode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEITextSettings, DefaultLanguageCode), METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultLanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultLanguageCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultVOLanguageCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultVOLanguageCode = { "DefaultVOLanguageCode", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEITextSettings, DefaultVOLanguageCode), METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultVOLanguageCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultVOLanguageCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects_SetBit(void* Obj)
	{
		((UOEITextSettings*)Obj)->bSupportsDialects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects = { "bSupportsDialects", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOEITextSettings), &Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_ValueProp = { "StringTableBundleSetMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FStringTableBundleSets, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_Key_KeyProp = { "StringTableBundleSetMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap = { "StringTableBundleSetMap", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEITextSettings, StringTableBundleSetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles_Inner = { "StringTokenBundles", nullptr, (EPropertyFlags)0x0004000000004000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStringTokensBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles = { "StringTokenBundles", nullptr, (EPropertyFlags)0x0014000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEITextSettings, StringTokenBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes_Inner = { "SupportedVOLanguageCodes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEITextSettings" },
		{ "ModuleRelativePath", "Public/OEITextSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes = { "SupportedVOLanguageCodes", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEITextSettings, SupportedVOLanguageCodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEITextSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultLanguageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_DefaultVOLanguageCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_bSupportsDialects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTableBundleSetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_StringTokenBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEITextSettings_Statics::NewProp_SupportedVOLanguageCodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEITextSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEITextSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEITextSettings_Statics::ClassParams = {
		&UOEITextSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEITextSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UOEITextSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEITextSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEITextSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEITextSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEITextSettings, 2383790114);
	template<> OEITEXT_API UClass* StaticClass<UOEITextSettings>()
	{
		return UOEITextSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEITextSettings(Z_Construct_UClass_UOEITextSettings, &UOEITextSettings::StaticClass, TEXT("/Script/OEIText"), TEXT("UOEITextSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEITextSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
