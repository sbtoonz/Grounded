// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIGlobalVariables/Public/SetGlobalIfGlobalEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetGlobalIfGlobalEvent() {}
// Cross Module References
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_USetGlobalIfGlobalEvent_NoRegister();
	OEIGLOBALVARIABLES_API UClass* Z_Construct_UClass_USetGlobalIfGlobalEvent();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	UPackage* Z_Construct_UPackage__Script_OEIGlobalVariables();
	OEIGLOBALVARIABLES_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalVariableReference();
// End Cross Module References
	void USetGlobalIfGlobalEvent::StaticRegisterNativesUSetGlobalIfGlobalEvent()
	{
	}
	UClass* Z_Construct_UClass_USetGlobalIfGlobalEvent_NoRegister()
	{
		return USetGlobalIfGlobalEvent::StaticClass();
	}
	struct Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalGlobalVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalGlobalVariable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionalValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIGlobalVariables,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SetGlobalIfGlobalEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SetGlobalIfGlobalEvent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_GlobalVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetGlobalIfGlobalEvent" },
		{ "ModuleRelativePath", "Public/SetGlobalIfGlobalEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_GlobalVariable = { "GlobalVariable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGlobalIfGlobalEvent, GlobalVariable), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_GlobalVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_GlobalVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_VariableValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetGlobalIfGlobalEvent" },
		{ "ModuleRelativePath", "Public/SetGlobalIfGlobalEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_VariableValue = { "VariableValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGlobalIfGlobalEvent, VariableValue), METADATA_PARAMS(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_VariableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_VariableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalGlobalVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetGlobalIfGlobalEvent" },
		{ "ModuleRelativePath", "Public/SetGlobalIfGlobalEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalGlobalVariable = { "ConditionalGlobalVariable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGlobalIfGlobalEvent, ConditionalGlobalVariable), Z_Construct_UScriptStruct_FGlobalVariableReference, METADATA_PARAMS(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalGlobalVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalGlobalVariable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SetGlobalIfGlobalEvent" },
		{ "ModuleRelativePath", "Public/SetGlobalIfGlobalEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalValue = { "ConditionalValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USetGlobalIfGlobalEvent, ConditionalValue), METADATA_PARAMS(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_GlobalVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_VariableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalGlobalVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::NewProp_ConditionalValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetGlobalIfGlobalEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::ClassParams = {
		&USetGlobalIfGlobalEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::PropPointers),
		0,
		0x003030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetGlobalIfGlobalEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetGlobalIfGlobalEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetGlobalIfGlobalEvent, 1956342553);
	template<> OEIGLOBALVARIABLES_API UClass* StaticClass<USetGlobalIfGlobalEvent>()
	{
		return USetGlobalIfGlobalEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetGlobalIfGlobalEvent(Z_Construct_UClass_USetGlobalIfGlobalEvent, &USetGlobalIfGlobalEvent::StaticClass, TEXT("/Script/OEIGlobalVariables"), TEXT("USetGlobalIfGlobalEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetGlobalIfGlobalEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
