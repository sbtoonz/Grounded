// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICrashLogging/Public/CrashLogging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrashLogging() {}
// Cross Module References
	OEICRASHLOGGING_API UClass* Z_Construct_UClass_UCrashLogging_NoRegister();
	OEICRASHLOGGING_API UClass* Z_Construct_UClass_UCrashLogging();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OEICrashLogging();
// End Cross Module References
	void UCrashLogging::StaticRegisterNativesUCrashLogging()
	{
	}
	UClass* Z_Construct_UClass_UCrashLogging_NoRegister()
	{
		return UCrashLogging::StaticClass();
	}
	struct Z_Construct_UClass_UCrashLogging_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrashLogging_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICrashLogging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrashLogging_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CrashLogging.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrashLogging.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrashLogging_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrashLogging>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrashLogging_Statics::ClassParams = {
		&UCrashLogging::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrashLogging_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrashLogging_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrashLogging()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrashLogging_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrashLogging, 2186204778);
	template<> OEICRASHLOGGING_API UClass* StaticClass<UCrashLogging>()
	{
		return UCrashLogging::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrashLogging(Z_Construct_UClass_UCrashLogging, &UCrashLogging::StaticClass, TEXT("/Script/OEICrashLogging"), TEXT("UCrashLogging"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrashLogging);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
