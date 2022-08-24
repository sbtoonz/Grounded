// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationAsset() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationAsset_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationAsset();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationBundle();
// End Cross Module References
	void UConversationAsset::StaticRegisterNativesUConversationAsset()
	{
	}
	UClass* Z_Construct_UClass_UConversationAsset_NoRegister()
	{
		return UConversationAsset::StaticClass();
	}
	struct Z_Construct_UClass_UConversationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationBundle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationBundle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationAsset_Statics::NewProp_ConversationBundle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationAsset" },
		{ "ModuleRelativePath", "Public/ConversationAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationAsset_Statics::NewProp_ConversationBundle = { "ConversationBundle", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationAsset, ConversationBundle), Z_Construct_UScriptStruct_FConversationBundle, METADATA_PARAMS(Z_Construct_UClass_UConversationAsset_Statics::NewProp_ConversationBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationAsset_Statics::NewProp_ConversationBundle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationAsset_Statics::NewProp_ConversationBundle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationAsset_Statics::ClassParams = {
		&UConversationAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationAsset, 3297428393);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationAsset>()
	{
		return UConversationAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationAsset(Z_Construct_UClass_UConversationAsset, &UConversationAsset::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
