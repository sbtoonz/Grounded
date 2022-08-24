// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingScreen/Public/LoadingScreenSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSettings() {}
// Cross Module References
	LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister();
	LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_LoadingScreen();
	LOADINGSCREEN_API UScriptStruct* Z_Construct_UScriptStruct_FLoadingScreenDescription();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	void ULoadingScreenSettings::StaticRegisterNativesULoadingScreenSettings()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenSettings_NoRegister()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartupScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TipFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadingFont;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipWrapAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TipWrapAt;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Tips_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tips_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tips;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FontColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FontColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentContainerVertAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentContainerVertAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentContainerMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentContainerMargin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_LoadingScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingScreenSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupScreen = { "StartupScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, StartupScreen), Z_Construct_UScriptStruct_FLoadingScreenDescription, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultScreen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultScreen = { "DefaultScreen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, DefaultScreen), Z_Construct_UScriptStruct_FLoadingScreenDescription, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipFont_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipFont = { "TipFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, TipFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_LoadingFont_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_LoadingFont = { "LoadingFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, LoadingFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_LoadingFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_LoadingFont_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipWrapAt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipWrapAt = { "TipWrapAt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, TipWrapAt), METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipWrapAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipWrapAt_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips_Inner = { "Tips", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips = { "Tips", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, Tips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_FontColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_FontColor = { "FontColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, FontColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_FontColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_FontColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerVertAlignment_MetaData[] = {
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerVertAlignment = { "ContentContainerVertAlignment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, ContentContainerVertAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerVertAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerVertAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerMargin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSettings" },
		{ "ModuleRelativePath", "Public/LoadingScreenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerMargin = { "ContentContainerMargin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSettings, ContentContainerMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerMargin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_StartupScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_DefaultScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_LoadingFont,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_TipWrapAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_Tips,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_FontColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerVertAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSettings_Statics::NewProp_ContentContainerMargin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams = {
		&ULoadingScreenSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenSettings, 106149059);
	template<> LOADINGSCREEN_API UClass* StaticClass<ULoadingScreenSettings>()
	{
		return ULoadingScreenSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenSettings(Z_Construct_UClass_ULoadingScreenSettings, &ULoadingScreenSettings::StaticClass, TEXT("/Script/LoadingScreen"), TEXT("ULoadingScreenSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
