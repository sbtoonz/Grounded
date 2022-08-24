// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIAchievements/Public/OEIAchievementSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIAchievementSettings() {}
// Cross Module References
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UOEIAchievementSettings_NoRegister();
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UOEIAchievementSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OEIAchievements();
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UAchievementsBundle_NoRegister();
// End Cross Module References
	void UOEIAchievementSettings::StaticRegisterNativesUOEIAchievementSettings()
	{
	}
	UClass* Z_Construct_UClass_UOEIAchievementSettings_NoRegister()
	{
		return UOEIAchievementSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOEIAchievementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AchievementsBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementsBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AchievementsBundles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIAchievementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIAchievements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIAchievementSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIAchievementSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles_Inner = { "AchievementsBundles", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAchievementsBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIAchievementSettings" },
		{ "ModuleRelativePath", "Public/OEIAchievementSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles = { "AchievementsBundles", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIAchievementSettings, AchievementsBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIAchievementSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIAchievementSettings_Statics::NewProp_AchievementsBundles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIAchievementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIAchievementSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIAchievementSettings_Statics::ClassParams = {
		&UOEIAchievementSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIAchievementSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIAchievementSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIAchievementSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIAchievementSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIAchievementSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIAchievementSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIAchievementSettings, 2535799688);
	template<> OEIACHIEVEMENTS_API UClass* StaticClass<UOEIAchievementSettings>()
	{
		return UOEIAchievementSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIAchievementSettings(Z_Construct_UClass_UOEIAchievementSettings, &UOEIAchievementSettings::StaticClass, TEXT("/Script/OEIAchievements"), TEXT("UOEIAchievementSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIAchievementSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
