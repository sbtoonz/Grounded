// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/TriggerQuestAddendumEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerQuestAddendumEvent() {}
// Cross Module References
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UTriggerQuestAddendumEvent_NoRegister();
	OEIFLOWCHARTS_API UClass* Z_Construct_UClass_UTriggerQuestAddendumEvent();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
	OEIFLOWCHARTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestReference();
// End Cross Module References
	void UTriggerQuestAddendumEvent::StaticRegisterNativesUTriggerQuestAddendumEvent()
	{
	}
	UClass* Z_Construct_UClass_UTriggerQuestAddendumEvent_NoRegister()
	{
		return UTriggerQuestAddendumEvent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddendumID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddendumID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIFlowCharts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerQuestAddendumEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerQuestAddendumEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_Quest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerQuestAddendumEvent" },
		{ "ModuleRelativePath", "Public/TriggerQuestAddendumEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerQuestAddendumEvent, Quest), Z_Construct_UScriptStruct_FQuestReference, METADATA_PARAMS(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_AddendumID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerQuestAddendumEvent" },
		{ "ModuleRelativePath", "Public/TriggerQuestAddendumEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_AddendumID = { "AddendumID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerQuestAddendumEvent, AddendumID), METADATA_PARAMS(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_AddendumID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_AddendumID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::NewProp_AddendumID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerQuestAddendumEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::ClassParams = {
		&UTriggerQuestAddendumEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerQuestAddendumEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerQuestAddendumEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerQuestAddendumEvent, 3737005209);
	template<> OEIFLOWCHARTS_API UClass* StaticClass<UTriggerQuestAddendumEvent>()
	{
		return UTriggerQuestAddendumEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerQuestAddendumEvent(Z_Construct_UClass_UTriggerQuestAddendumEvent, &UTriggerQuestAddendumEvent::StaticClass, TEXT("/Script/OEIFlowCharts"), TEXT("UTriggerQuestAddendumEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerQuestAddendumEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
