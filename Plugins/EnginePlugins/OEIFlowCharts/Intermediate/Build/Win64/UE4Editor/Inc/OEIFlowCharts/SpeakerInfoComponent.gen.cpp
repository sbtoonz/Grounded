// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/SpeakerInfoComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeakerInfoComponent() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerInfoComponent_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_USpeakerInfoComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FSpeakerInfo();
// End Cross Module References
	void USpeakerInfoComponent::StaticRegisterNativesUSpeakerInfoComponent()
	{
	}
	UClass* Z_Construct_UClass_USpeakerInfoComponent_NoRegister()
	{
		return USpeakerInfoComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpeakerInfoComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpeakerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeakerInfoComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerInfoComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SpeakerInfoComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpeakerInfoComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeakerInfoComponent_Statics::NewProp_SpeakerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpeakerInfoComponent" },
		{ "ModuleRelativePath", "Public/SpeakerInfoComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpeakerInfoComponent_Statics::NewProp_SpeakerInfo = { "SpeakerInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpeakerInfoComponent, SpeakerInfo), Z_Construct_UScriptStruct_FSpeakerInfo, METADATA_PARAMS(Z_Construct_UClass_USpeakerInfoComponent_Statics::NewProp_SpeakerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerInfoComponent_Statics::NewProp_SpeakerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpeakerInfoComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpeakerInfoComponent_Statics::NewProp_SpeakerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeakerInfoComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeakerInfoComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpeakerInfoComponent_Statics::ClassParams = {
		&USpeakerInfoComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpeakerInfoComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerInfoComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpeakerInfoComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeakerInfoComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeakerInfoComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpeakerInfoComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpeakerInfoComponent, 3304947191);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<USpeakerInfoComponent>()
	{
		return USpeakerInfoComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpeakerInfoComponent(Z_Construct_UClass_USpeakerInfoComponent, &USpeakerInfoComponent::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("USpeakerInfoComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeakerInfoComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
