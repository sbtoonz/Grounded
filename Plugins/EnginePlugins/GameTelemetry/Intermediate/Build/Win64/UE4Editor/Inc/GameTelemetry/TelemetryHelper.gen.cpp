// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameTelemetry/Public/TelemetryHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTelemetryHelper() {}
// Cross Module References
	GAMETELEMETRY_API UClass* Z_Construct_UClass_UTelemetryHelper_NoRegister();
	GAMETELEMETRY_API UClass* Z_Construct_UClass_UTelemetryHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GameTelemetry();
// End Cross Module References
	void UTelemetryHelper::StaticRegisterNativesUTelemetryHelper()
	{
	}
	UClass* Z_Construct_UClass_UTelemetryHelper_NoRegister()
	{
		return UTelemetryHelper::StaticClass();
	}
	struct Z_Construct_UClass_UTelemetryHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTelemetryHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameTelemetry,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTelemetryHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TelemetryHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TelemetryHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTelemetryHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTelemetryHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTelemetryHelper_Statics::ClassParams = {
		&UTelemetryHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTelemetryHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTelemetryHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTelemetryHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTelemetryHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTelemetryHelper, 3147127306);
	template<> GAMETELEMETRY_API UClass* StaticClass<UTelemetryHelper>()
	{
		return UTelemetryHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTelemetryHelper(Z_Construct_UClass_UTelemetryHelper, &UTelemetryHelper::StaticClass, TEXT("/Script/GameTelemetry"), TEXT("UTelemetryHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTelemetryHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
