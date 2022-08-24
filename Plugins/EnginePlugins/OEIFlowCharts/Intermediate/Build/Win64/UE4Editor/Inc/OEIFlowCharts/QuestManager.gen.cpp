// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestBundleSet_NoRegister();
// End Cross Module References
	void UQuestManager::StaticRegisterNativesUQuestManager()
	{
	}
	UClass* Z_Construct_UClass_UQuestManager_NoRegister()
	{
		return UQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_UQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideBundleSets_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OverrideBundleSets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideBundleSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OverrideBundleSets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_ValueProp = { "OverrideBundleSets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UQuestBundleSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_Key_KeyProp = { "OverrideBundleSets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/QuestManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets = { "OverrideBundleSets", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManager, OverrideBundleSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OverrideBundleSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestManager_Statics::ClassParams = {
		&UQuestManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestManager, 616347154);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UQuestManager>()
	{
		return UQuestManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestManager(Z_Construct_UClass_UQuestManager, &UQuestManager::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UQuestManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
