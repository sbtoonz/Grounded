// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverSection() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverSection_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerReference();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FConversationReference();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FVoiceOverData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UOEIVoiceOverSection::StaticRegisterNativesUOEIVoiceOverSection()
	{
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverSection_NoRegister()
	{
		return UOEIVoiceOverSection::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Speaker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Conversation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NodeId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceOverDataOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoiceOverDataOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseDuration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationAssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationAssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationAssetPaths;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AudioAssetPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAssetPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioAssetPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConversationId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConversationId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultAudioDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultAudioDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIVoiceOverSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Speaker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, Speaker), Z_Construct_UScriptStruct_FSpeakerReference, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Speaker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Conversation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, Conversation), Z_Construct_UScriptStruct_FConversationReference, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Conversation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Conversation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_NodeId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, NodeId), METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_NodeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_NodeId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_VoiceOverDataOverride_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_VoiceOverDataOverride = { "VoiceOverDataOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, VoiceOverDataOverride), Z_Construct_UScriptStruct_FVoiceOverData, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_VoiceOverDataOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_VoiceOverDataOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_StartOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, StartOffset), METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_EndOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, EndOffset), METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_BaseDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_BaseDuration = { "BaseDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, BaseDuration), METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_BaseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_BaseDuration_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths_Inner = { "AnimationAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths = { "AnimationAssetPaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, AnimationAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths_Inner = { "AudioAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths = { "AudioAssetPaths", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, AudioAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_SpeakerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_SpeakerID = { "SpeakerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, SpeakerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_SpeakerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_SpeakerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_ConversationId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_ConversationId = { "ConversationId", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, ConversationId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_ConversationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_ConversationId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_DefaultAudioDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverSection" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_DefaultAudioDuration = { "DefaultAudioDuration", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverSection, DefaultAudioDuration), METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_DefaultAudioDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_DefaultAudioDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIVoiceOverSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Speaker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_Conversation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_NodeId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_VoiceOverDataOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_StartOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_EndOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_BaseDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AnimationAssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_AudioAssetPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_SpeakerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_ConversationId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverSection_Statics::NewProp_DefaultAudioDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVoiceOverSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverSection_Statics::ClassParams = {
		&UOEIVoiceOverSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIVoiceOverSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverSection, 4082882222);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverSection>()
	{
		return UOEIVoiceOverSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverSection(Z_Construct_UClass_UOEIVoiceOverSection, &UOEIVoiceOverSection::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
