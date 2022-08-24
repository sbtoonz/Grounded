// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverActor() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverActor_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverActor();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeaker();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
// End Cross Module References
	void UOEIVoiceOverActor::StaticRegisterNativesUOEIVoiceOverActor()
	{
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverActor_NoRegister()
	{
		return UOEIVoiceOverActor::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpeaker,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverActor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OEIVoiceOverActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOEIVoiceOverActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverActor_Statics::ClassParams = {
		&UOEIVoiceOverActor::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverActor, 2771275175);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverActor>()
	{
		return UOEIVoiceOverActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverActor(Z_Construct_UClass_UOEIVoiceOverActor, &UOEIVoiceOverActor::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
