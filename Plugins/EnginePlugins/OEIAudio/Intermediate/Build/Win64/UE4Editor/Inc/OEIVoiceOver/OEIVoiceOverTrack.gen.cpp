// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverTrack() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverTrack_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
// End Cross Module References
	void UOEIVoiceOverTrack::StaticRegisterNativesUOEIVoiceOverTrack()
	{
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverTrack_NoRegister()
	{
		return UOEIVoiceOverTrack::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSections_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverTrack_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIVoiceOverTrack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVoiceOverTrack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverTrack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVoiceOverTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIVoiceOverTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVoiceOverTrack_Statics::NewProp_AnimationSections,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOEIVoiceOverTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UOEIVoiceOverTrack, IMovieSceneTrackTemplateProducer), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVoiceOverTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverTrack_Statics::ClassParams = {
		&UOEIVoiceOverTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIVoiceOverTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverTrack, 3146243774);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverTrack>()
	{
		return UOEIVoiceOverTrack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverTrack(Z_Construct_UClass_UOEIVoiceOverTrack, &UOEIVoiceOverTrack::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
