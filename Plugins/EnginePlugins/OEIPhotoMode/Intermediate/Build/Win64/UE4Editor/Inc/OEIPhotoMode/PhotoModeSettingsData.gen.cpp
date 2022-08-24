// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeSettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeSettingsData() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsData_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeSettingsData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FSettingInfo();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UColorGradingProfileData_NoRegister();
// End Cross Module References
	void UPhotoModeSettingsData::StaticRegisterNativesUPhotoModeSettingsData()
	{
	}
	UClass* Z_Construct_UClass_UPhotoModeSettingsData_NoRegister()
	{
		return UPhotoModeSettingsData::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeSettingsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingInfo_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SettingInfo_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SettingInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SettingInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorGradingProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColorGradingProfiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeSettingsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PhotoModeSettingsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_ValueProp = { "SettingInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSettingInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_Key_KeyProp = { "SettingInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_OEIPhotoMode_EPhotoModeSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsData" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo = { "SettingInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsData, SettingInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_ColorGradingProfiles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeSettingsData" },
		{ "ModuleRelativePath", "Public/PhotoModeSettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_ColorGradingProfiles = { "ColorGradingProfiles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeSettingsData, ColorGradingProfiles), Z_Construct_UClass_UColorGradingProfileData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_ColorGradingProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_ColorGradingProfiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeSettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_SettingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeSettingsData_Statics::NewProp_ColorGradingProfiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeSettingsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeSettingsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeSettingsData_Statics::ClassParams = {
		&UPhotoModeSettingsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhotoModeSettingsData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeSettingsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeSettingsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeSettingsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeSettingsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeSettingsData, 1203137343);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeSettingsData>()
	{
		return UPhotoModeSettingsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeSettingsData(Z_Construct_UClass_UPhotoModeSettingsData, &UPhotoModeSettingsData::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeSettingsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeSettingsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
