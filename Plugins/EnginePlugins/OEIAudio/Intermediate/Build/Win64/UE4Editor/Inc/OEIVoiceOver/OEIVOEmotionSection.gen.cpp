// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVOEmotionSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVOEmotionSection() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVOEmotionSection_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVOEmotionSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
	OEIVOICEOVER_API UScriptStruct* Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams();
// End Cross Module References
	void UOEIVOEmotionSection::StaticRegisterNativesUOEIVOEmotionSection()
	{
	}
	UClass* Z_Construct_UClass_UOEIVOEmotionSection_NoRegister()
	{
		return UOEIVOEmotionSection::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVOEmotionSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVOEmotionSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVOEmotionSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIVOEmotionSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVOEmotionSection_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIVOEmotionSection" },
		{ "ModuleRelativePath", "Public/OEIVOEmotionSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOEIVOEmotionSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIVOEmotionSection, Params), Z_Construct_UScriptStruct_FOEIVOEmotionSectionParams, METADATA_PARAMS(Z_Construct_UClass_UOEIVOEmotionSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVOEmotionSection_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIVOEmotionSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIVOEmotionSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVOEmotionSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVOEmotionSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVOEmotionSection_Statics::ClassParams = {
		&UOEIVOEmotionSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIVOEmotionSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVOEmotionSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVOEmotionSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVOEmotionSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVOEmotionSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVOEmotionSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVOEmotionSection, 1950150598);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVOEmotionSection>()
	{
		return UOEIVOEmotionSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVOEmotionSection(Z_Construct_UClass_UOEIVOEmotionSection, &UOEIVOEmotionSection::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVOEmotionSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVOEmotionSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
