// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIMoviePlayer/Public/OEISubtitleEntryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEISubtitleEntryWidget() {}
// Cross Module References
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleEntryWidget_NoRegister();
	OEIMOVIEPLAYER_API UClass* Z_Construct_UClass_UOEISubtitleEntryWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_OEIMoviePlayer();
// End Cross Module References
	void UOEISubtitleEntryWidget::StaticRegisterNativesUOEISubtitleEntryWidget()
	{
	}
	UClass* Z_Construct_UClass_UOEISubtitleEntryWidget_NoRegister()
	{
		return UOEISubtitleEntryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UOEISubtitleEntryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIMoviePlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEISubtitleEntryWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEISubtitleEntryWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEISubtitleEntryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::ClassParams = {
		&UOEISubtitleEntryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEISubtitleEntryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEISubtitleEntryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEISubtitleEntryWidget, 4227251130);
	template<> OEIMOVIEPLAYER_API UClass* StaticClass<UOEISubtitleEntryWidget>()
	{
		return UOEISubtitleEntryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEISubtitleEntryWidget(Z_Construct_UClass_UOEISubtitleEntryWidget, &UOEISubtitleEntryWidget::StaticClass, TEXT("/Script/OEIMoviePlayer"), TEXT("UOEISubtitleEntryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEISubtitleEntryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
