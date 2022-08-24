// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterBundleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterBundleSet() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterBundleSet_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterBundleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterBundle();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterEvent();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FCooldownSet();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterVariantSet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UChatterBundleSet::StaticRegisterNativesUChatterBundleSet()
	{
	}
	UClass* Z_Construct_UClass_UChatterBundleSet_NoRegister()
	{
		return UChatterBundleSet::StaticClass();
	}
	struct Z_Construct_UClass_UChatterBundleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatterBundles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChatterEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CooldownSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CooldownSets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariantSets_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariantSets_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariantSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VariantSets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VOAssetFolders_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VOAssetFolders_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VOAssetFolders;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioAssets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatterBundleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChatterBundleSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, Hash), METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles_Inner = { "ChatterBundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatterBundle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles = { "ChatterBundles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, ChatterBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents_Inner = { "ChatterEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChatterEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents = { "ChatterEvents", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, ChatterEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets_Inner = { "CooldownSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCooldownSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets = { "CooldownSets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, CooldownSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_ValueProp = { "VariantSets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FChatterVariantSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_Key_KeyProp = { "VariantSets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets = { "VariantSets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, VariantSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders_Inner = { "VOAssetFolders", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders = { "VOAssetFolders", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, VOAssetFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets_Inner = { "AudioAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterBundleSet" },
		{ "ModuleRelativePath", "Public/ChatterBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets = { "AudioAssets", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterBundleSet, AudioAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatterBundleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_ChatterEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_CooldownSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VariantSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_VOAssetFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterBundleSet_Statics::NewProp_AudioAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatterBundleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatterBundleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChatterBundleSet_Statics::ClassParams = {
		&UChatterBundleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChatterBundleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChatterBundleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterBundleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatterBundleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChatterBundleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChatterBundleSet, 2551751889);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UChatterBundleSet>()
	{
		return UChatterBundleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChatterBundleSet(Z_Construct_UClass_UChatterBundleSet, &UChatterBundleSet::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UChatterBundleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatterBundleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
