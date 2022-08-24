// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OEIStringCrcSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIStringCrcSettings() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOEIStringCrcSettings_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOEIStringCrcSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOEIStringCrcSettings::StaticRegisterNativesUOEIStringCrcSettings()
	{
	}
	UClass* Z_Construct_UClass_UOEIStringCrcSettings_NoRegister()
	{
		return UOEIStringCrcSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOEIStringCrcSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseStringCrcForPackageGUID_MetaData[];
#endif
		static void NewProp_UseStringCrcForPackageGUID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseStringCrcForPackageGUID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomStrings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomStrings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomStrings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIStringCrcSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIStringCrcSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIStringCrcSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIStringCrcSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringCrcSettings" },
		{ "ModuleRelativePath", "Public/OEIStringCrcSettings.h" },
	};
#endif
	void Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID_SetBit(void* Obj)
	{
		((UOEIStringCrcSettings*)Obj)->UseStringCrcForPackageGUID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID = { "UseStringCrcForPackageGUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOEIStringCrcSettings), &Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings_Inner = { "CustomStrings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIStringCrcSettings" },
		{ "ModuleRelativePath", "Public/OEIStringCrcSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings = { "CustomStrings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIStringCrcSettings, CustomStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIStringCrcSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_UseStringCrcForPackageGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIStringCrcSettings_Statics::NewProp_CustomStrings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIStringCrcSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIStringCrcSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIStringCrcSettings_Statics::ClassParams = {
		&UOEIStringCrcSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIStringCrcSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIStringCrcSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIStringCrcSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIStringCrcSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIStringCrcSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIStringCrcSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIStringCrcSettings, 759648246);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOEIStringCrcSettings>()
	{
		return UOEIStringCrcSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIStringCrcSettings(Z_Construct_UClass_UOEIStringCrcSettings, &UOEIStringCrcSettings::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOEIStringCrcSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIStringCrcSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
