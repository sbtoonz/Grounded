// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/StartQuestEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartQuestEvent() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UStartQuestEvent_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UStartQuestEvent();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestReference();
// End Cross Module References
	void UStartQuestEvent::StaticRegisterNativesUStartQuestEvent()
	{
	}
	UClass* Z_Construct_UClass_UStartQuestEvent_NoRegister()
	{
		return UStartQuestEvent::StaticClass();
	}
	struct Z_Construct_UClass_UStartQuestEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartQuestEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartQuestEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StartQuestEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StartQuestEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartQuestEvent_Statics::NewProp_Quest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StartQuestEvent" },
		{ "ModuleRelativePath", "Public/StartQuestEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStartQuestEvent_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartQuestEvent, Quest), Z_Construct_UScriptStruct_FQuestReference, METADATA_PARAMS(Z_Construct_UClass_UStartQuestEvent_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartQuestEvent_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartQuestEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartQuestEvent_Statics::NewProp_Quest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartQuestEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartQuestEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartQuestEvent_Statics::ClassParams = {
		&UStartQuestEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStartQuestEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStartQuestEvent_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartQuestEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartQuestEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartQuestEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartQuestEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartQuestEvent, 2493057056);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UStartQuestEvent>()
	{
		return UStartQuestEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartQuestEvent(Z_Construct_UClass_UStartQuestEvent, &UStartQuestEvent::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UStartQuestEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartQuestEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
