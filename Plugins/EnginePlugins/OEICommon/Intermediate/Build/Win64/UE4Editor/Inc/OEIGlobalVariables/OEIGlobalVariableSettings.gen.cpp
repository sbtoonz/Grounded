// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/OEIGlobalVariableSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIGlobalVariableSettings() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UOEIGlobalVariableSettings_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UOEIGlobalVariableSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UGlobalVariableBundle_NoRegister();
// End Cross Module References
	void UOEIGlobalVariableSettings::StaticRegisterNativesUOEIGlobalVariableSettings()
	{
	}
	UClass* Z_Construct_UClass_UOEIGlobalVariableSettings_NoRegister()
	{
		return UOEIGlobalVariableSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOEIGlobalVariableSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GlobalVariableBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVariableBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalVariableBundles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIGlobalVariableSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIGlobalVariableSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles_Inner = { "GlobalVariableBundles", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGlobalVariableBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIGlobalVariableSettings" },
		{ "ModuleRelativePath", "Public/OEIGlobalVariableSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles = { "GlobalVariableBundles", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIGlobalVariableSettings, GlobalVariableBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::NewProp_GlobalVariableBundles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIGlobalVariableSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::ClassParams = {
		&UOEIGlobalVariableSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIGlobalVariableSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIGlobalVariableSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIGlobalVariableSettings, 4266760997);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UOEIGlobalVariableSettings>()
	{
		return UOEIGlobalVariableSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIGlobalVariableSettings(Z_Construct_UClass_UOEIGlobalVariableSettings, &UOEIGlobalVariableSettings::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UOEIGlobalVariableSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIGlobalVariableSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
