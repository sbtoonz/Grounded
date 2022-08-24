// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/IncrementGlobalValueEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIncrementGlobalValueEvent() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UIncrementGlobalValueEvent_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_UIncrementGlobalValueEvent();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
// End Cross Module References
	void UIncrementGlobalValueEvent::StaticRegisterNativesUIncrementGlobalValueEvent()
	{
	}
	UClass* Z_Construct_UClass_UIncrementGlobalValueEvent_NoRegister()
	{
		return UIncrementGlobalValueEvent::StaticClass();
	}
	struct Z_Construct_UClass_UIncrementGlobalValueEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IncrementValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IncrementValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IncrementGlobalValueEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IncrementGlobalValueEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IncrementGlobalValueEvent" },
		{ "ModuleRelativePath", "Public/IncrementGlobalValueEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_GlobalVariable = { "GlobalVariable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIncrementGlobalValueEvent, GlobalVariable), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_IncrementValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "IncrementGlobalValueEvent" },
		{ "ModuleRelativePath", "Public/IncrementGlobalValueEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_IncrementValue = { "IncrementValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIncrementGlobalValueEvent, IncrementValue), METADATA_PARAMS(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_IncrementValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_IncrementValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_GlobalVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::NewProp_IncrementValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIncrementGlobalValueEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::ClassParams = {
		&UIncrementGlobalValueEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIncrementGlobalValueEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIncrementGlobalValueEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIncrementGlobalValueEvent, 1181201789);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<UIncrementGlobalValueEvent>()
	{
		return UIncrementGlobalValueEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIncrementGlobalValueEvent(Z_Construct_UClass_UIncrementGlobalValueEvent, &UIncrementGlobalValueEvent::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("UIncrementGlobalValueEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIncrementGlobalValueEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
