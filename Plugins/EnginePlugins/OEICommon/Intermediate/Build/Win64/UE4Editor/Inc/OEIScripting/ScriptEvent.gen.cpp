// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIScripting/Public/ScriptEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptEvent() {}
// Cross Module References
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent_NoRegister();
	OEISCRIPTING_API UClass* Z_Construct_UClass_UScriptEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIScripting();
// End Cross Module References
	void UScriptEvent::StaticRegisterNativesUScriptEvent()
	{
	}
	UClass* Z_Construct_UClass_UScriptEvent_NoRegister()
	{
		return UScriptEvent::StaticClass();
	}
	struct Z_Construct_UClass_UScriptEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIScripting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptEvent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ScriptEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScriptEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptEvent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScriptEvent_Statics::ClassParams = {
		&UScriptEvent::StaticClass,
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
		0x003030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptEvent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScriptEvent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScriptEvent, 22366128);
	template<> OEISCRIPTING_API UClass* StaticClass<UScriptEvent>()
	{
		return UScriptEvent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScriptEvent(Z_Construct_UClass_UScriptEvent, &UScriptEvent::StaticClass, TEXT("/Script/OEIScripting"), TEXT("UScriptEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
