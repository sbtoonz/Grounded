// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ConversationBundleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationBundleSet() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationBundleSet_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UConversationBundleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationBundle();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerBundle();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerVoiceBundle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UConversationBundleSet::StaticRegisterNativesUConversationBundleSet()
	{
	}
	UClass* Z_Construct_UClass_UConversationBundleSet_NoRegister()
	{
		return UConversationBundleSet::StaticClass();
	}
	struct Z_Construct_UClass_UConversationBundleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hash;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConversationBundles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeakerBundles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerVoiceBundles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerVoiceBundles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerVoiceBundles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerSpeakerIDs_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeakerIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_PlayerSpeakerIDs;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConversationNameLookup_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationNameLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationNameLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ConversationNameLookup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationBundleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ConversationBundleSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_Hash_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, Hash), METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_Hash_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles_Inner = { "ConversationBundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConversationBundle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles = { "ConversationBundles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, ConversationBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles_Inner = { "SpeakerBundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpeakerBundle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles = { "SpeakerBundles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, SpeakerBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles_Inner = { "PlayerVoiceBundles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerVoiceBundle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles = { "PlayerVoiceBundles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, PlayerVoiceBundles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs_ElementProp = { "PlayerSpeakerIDs", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs = { "PlayerSpeakerIDs", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, PlayerSpeakerIDs), METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_ValueProp = { "ConversationNameLookup", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_Key_KeyProp = { "ConversationNameLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ConversationBundleSet" },
		{ "ModuleRelativePath", "Public/ConversationBundleSet.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup = { "ConversationNameLookup", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConversationBundleSet, ConversationNameLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationBundleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_Hash,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_SpeakerBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerVoiceBundles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_PlayerSpeakerIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationBundleSet_Statics::NewProp_ConversationNameLookup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationBundleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationBundleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConversationBundleSet_Statics::ClassParams = {
		&UConversationBundleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationBundleSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationBundleSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationBundleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationBundleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConversationBundleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConversationBundleSet, 4119581103);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UConversationBundleSet>()
	{
		return UConversationBundleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConversationBundleSet(Z_Construct_UClass_UConversationBundleSet, &UConversationBundleSet::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UConversationBundleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationBundleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
