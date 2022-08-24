// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIAchievements/Public/AchievementsBundle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementsBundle() {}
// Cross Module References
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UAchievementsBundle_NoRegister();
	OEIACHIEVEMENTS_API UClass* Z_Construct_UClass_UAchievementsBundle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIAchievements();
	OEIACHIEVEMENTS_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementEntry();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UAchievementsBundle::StaticRegisterNativesUAchievementsBundle()
	{
	}
	UClass* Z_Construct_UClass_UAchievementsBundle_NoRegister()
	{
		return UAchievementsBundle::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementsBundle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AchievementValues_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AchievementValues_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AchievementValues;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementsBundle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIAchievements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementsBundle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AchievementsBundle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AchievementsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_ValueProp = { "AchievementValues", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAchievementEntry, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_Key_KeyProp = { "AchievementValues_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementsBundle" },
		{ "ModuleRelativePath", "Public/AchievementsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues = { "AchievementValues", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementsBundle, AchievementValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AchievementsBundle" },
		{ "ModuleRelativePath", "Public/AchievementsBundle.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementsBundle, Hash), METADATA_PARAMS(Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementsBundle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_AchievementValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementsBundle_Statics::NewProp_Hash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementsBundle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementsBundle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementsBundle_Statics::ClassParams = {
		&UAchievementsBundle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAchievementsBundle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementsBundle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementsBundle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementsBundle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementsBundle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementsBundle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementsBundle, 3871524044);
	template<> OEIACHIEVEMENTS_API UClass* StaticClass<UAchievementsBundle>()
	{
		return UAchievementsBundle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementsBundle(Z_Construct_UClass_UAchievementsBundle, &UAchievementsBundle::StaticClass, TEXT("/Script/OEIAchievements"), TEXT("UAchievementsBundle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementsBundle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
