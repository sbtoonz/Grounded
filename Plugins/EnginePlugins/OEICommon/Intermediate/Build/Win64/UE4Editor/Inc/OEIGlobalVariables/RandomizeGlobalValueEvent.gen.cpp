// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/RandomizeGlobalValueEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomizeGlobalValueEvent() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_URandomizeGlobalValueEvent_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_URandomizeGlobalValueEvent();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
// End Cross Module References
	void URandomizeGlobalValueEvent::StaticRegisterNativesURandomizeGlobalValueEvent()
	{
	}
	UClass* Z_Construct_UClass_URandomizeGlobalValueEvent_NoRegister()
	{
		return URandomizeGlobalValueEvent::StaticClass();
	}
	struct Z_Construct_UClass_URandomizeGlobalValueEvent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RandomizeGlobalValueEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RandomizeGlobalValueEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomizeGlobalValueEvent" },
		{ "ModuleRelativePath", "Public/RandomizeGlobalValueEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_GlobalVariable = { "GlobalVariable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomizeGlobalValueEvent, GlobalVariable), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_GlobalVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MinValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomizeGlobalValueEvent" },
		{ "ModuleRelativePath", "Public/RandomizeGlobalValueEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomizeGlobalValueEvent, MinValue), METADATA_PARAMS(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MaxValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RandomizeGlobalValueEvent" },
		{ "ModuleRelativePath", "Public/RandomizeGlobalValueEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URandomizeGlobalValueEvent, MaxValue), METADATA_PARAMS(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MaxValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_GlobalVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::NewProp_MaxValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URandomizeGlobalValueEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::ClassParams = {
		&URandomizeGlobalValueEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URandomizeGlobalValueEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URandomizeGlobalValueEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URandomizeGlobalValueEvent, 1201176287);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<URandomizeGlobalValueEvent>()
	{
		return URandomizeGlobalValueEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URandomizeGlobalValueEvent(Z_Construct_UClass_URandomizeGlobalValueEvent, &URandomizeGlobalValueEvent::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("URandomizeGlobalValueEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URandomizeGlobalValueEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
