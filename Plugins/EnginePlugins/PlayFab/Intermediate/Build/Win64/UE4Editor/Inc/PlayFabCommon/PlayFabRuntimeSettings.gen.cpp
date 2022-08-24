// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFabCommon/Public/PlayFabRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabRuntimeSettings() {}
// Cross Module References
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister();
	PLAYFABCOMMON_API UClass* Z_Construct_UClass_UPlayFabRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_PlayFabCommon();
// End Cross Module References
	void UPlayFabRuntimeSettings::StaticRegisterNativesUPlayFabRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings_NoRegister()
	{
		return UPlayFabRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductionEnvironmentURL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductionEnvironmentURL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeveloperSecretKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeveloperSecretKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PlayFabCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabRuntimeSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabRuntimeSettings" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL = { "ProductionEnvironmentURL", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, ProductionEnvironmentURL), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabRuntimeSettings" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId = { "TitleId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, TitleId), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabRuntimeSettings" },
		{ "ModuleRelativePath", "Public/PlayFabRuntimeSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey = { "DeveloperSecretKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabRuntimeSettings, DeveloperSecretKey), METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_ProductionEnvironmentURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_TitleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::NewProp_DeveloperSecretKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams = {
		&UPlayFabRuntimeSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabRuntimeSettings, 4282031242);
	template<> PLAYFABCOMMON_API UClass* StaticClass<UPlayFabRuntimeSettings>()
	{
		return UPlayFabRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabRuntimeSettings(Z_Construct_UClass_UPlayFabRuntimeSettings, &UPlayFabRuntimeSettings::StaticClass, TEXT("/Script/PlayFabCommon"), TEXT("UPlayFabRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
