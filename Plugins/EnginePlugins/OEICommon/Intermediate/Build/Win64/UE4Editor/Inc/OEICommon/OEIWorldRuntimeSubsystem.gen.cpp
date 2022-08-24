// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/OEIWorldRuntimeSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIWorldRuntimeSubsystem() {}
// Cross Module References
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem_NoRegister();
	OEICOMMON_API UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	void UOEIWorldRuntimeSubsystem::StaticRegisterNativesUOEIWorldRuntimeSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem_NoRegister()
	{
		return UOEIWorldRuntimeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEICommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIWorldRuntimeSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIWorldRuntimeSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIWorldRuntimeSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::ClassParams = {
		&UOEIWorldRuntimeSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIWorldRuntimeSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIWorldRuntimeSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIWorldRuntimeSubsystem, 276126203);
	template<> OEICOMMON_API UClass* StaticClass<UOEIWorldRuntimeSubsystem>()
	{
		return UOEIWorldRuntimeSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIWorldRuntimeSubsystem(Z_Construct_UClass_UOEIWorldRuntimeSubsystem, &UOEIWorldRuntimeSubsystem::StaticClass, TEXT("/Script/OEICommon"), TEXT("UOEIWorldRuntimeSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIWorldRuntimeSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
