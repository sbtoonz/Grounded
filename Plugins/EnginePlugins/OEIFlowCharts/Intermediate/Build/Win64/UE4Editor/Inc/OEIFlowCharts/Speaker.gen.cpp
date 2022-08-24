// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/Speaker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeaker() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeaker_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeaker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	void USpeaker::StaticRegisterNativesUSpeaker()
	{
	}
	UClass* Z_Construct_UClass_USpeaker_NoRegister()
	{
		return USpeaker::StaticClass();
	}
	struct Z_Construct_UClass_USpeaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeaker_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Speaker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpeaker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeaker_Statics::ClassParams = {
		&USpeaker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpeaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeaker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeaker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeaker, 674300882);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<USpeaker>()
	{
		return USpeaker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeaker(Z_Construct_UClass_USpeaker, &USpeaker::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("USpeaker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeaker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
