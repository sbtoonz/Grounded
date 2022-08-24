// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SpeakerAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeakerAsset() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerAsset_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UChatterAsset_NoRegister();
// End Cross Module References
	void USpeakerAsset::StaticRegisterNativesUSpeakerAsset()
	{
	}
	UClass* Z_Construct_UClass_USpeakerAsset_NoRegister()
	{
		return USpeakerAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpeakerAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChatterAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChatterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChatterID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeakerAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpeakerAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerAsset" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerAsset, Name), METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerAsset" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerAsset, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerAsset" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerAsset, Hash), METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerAsset" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterAsset = { "ChatterAsset", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerAsset, ChatterAsset), Z_Construct_UClass_UChatterAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerAsset" },
		{ "ModuleRelativePath", "Public/SpeakerAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterID = { "ChatterID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerAsset, ChatterID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeakerAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerAsset_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerAsset_Statics::NewProp_ChatterID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeakerAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeakerAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeakerAsset_Statics::ClassParams = {
		&USpeakerAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpeakerAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpeakerAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeakerAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeakerAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeakerAsset, 116086976);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<USpeakerAsset>()
	{
		return USpeakerAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeakerAsset(Z_Construct_UClass_USpeakerAsset, &USpeakerAsset::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("USpeakerAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeakerAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
