// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ChatterAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatterAsset() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterAsset_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FChatterBundle();
// End Cross Module References
	void UChatterAsset::StaticRegisterNativesUChatterAsset()
	{
	}
	UClass* Z_Construct_UClass_UChatterAsset_NoRegister()
	{
		return UChatterAsset::StaticClass();
	}
	struct Z_Construct_UClass_UChatterAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterBundle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterBundle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChatterAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChatterAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChatterAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChatterAsset_Statics::NewProp_ChatterBundle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChatterAsset" },
		{ "ModuleRelativePath", "Public/ChatterAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChatterAsset_Statics::NewProp_ChatterBundle = { "ChatterBundle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UChatterAsset, ChatterBundle), Z_Construct_UScriptStruct_FChatterBundle, METADATA_PARAMS(Z_Construct_UClass_UChatterAsset_Statics::NewProp_ChatterBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterAsset_Statics::NewProp_ChatterBundle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChatterAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChatterAsset_Statics::NewProp_ChatterBundle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChatterAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatterAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UChatterAsset_Statics::ClassParams = {
		&UChatterAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChatterAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChatterAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChatterAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChatterAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChatterAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UChatterAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UChatterAsset, 2906480173);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UChatterAsset>()
	{
		return UChatterAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChatterAsset(Z_Construct_UClass_UChatterAsset, &UChatterAsset::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UChatterAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChatterAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
