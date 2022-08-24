// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/QuestBundleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBundleSet() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestBundleSet_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UQuestBundleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestBundle();
// End Cross Module References
	void UQuestBundleSet::StaticRegisterNativesUQuestBundleSet()
	{
	}
	UClass* Z_Construct_UClass_UQuestBundleSet_NoRegister()
	{
		return UQuestBundleSet::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBundleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuestBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestBundles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBundleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBundleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestBundleSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestBundleSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundleSet" },
		{ "ModuleRelativePath", "Public/QuestBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBundleSet, Hash), METADATA_PARAMS(Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles_Inner = { "QuestBundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestBundle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "QuestBundleSet" },
		{ "ModuleRelativePath", "Public/QuestBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles = { "QuestBundles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBundleSet, QuestBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBundleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBundleSet_Statics::NewProp_QuestBundles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBundleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBundleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestBundleSet_Statics::ClassParams = {
		&UQuestBundleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestBundleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBundleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestBundleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBundleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestBundleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestBundleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestBundleSet, 2984572493);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UQuestBundleSet>()
	{
		return UQuestBundleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestBundleSet(Z_Construct_UClass_UQuestBundleSet, &UQuestBundleSet::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UQuestBundleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBundleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
