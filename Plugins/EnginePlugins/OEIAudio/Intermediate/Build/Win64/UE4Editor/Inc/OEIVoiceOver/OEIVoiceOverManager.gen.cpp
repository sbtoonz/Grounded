// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIVoiceOver/Public/OEIVoiceOverManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIVoiceOverManager() {}
// Cross Module References
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverManager_NoRegister();
	OEIVOICEOVER_API UClass* Z_Construct_UClass_UOEIVoiceOverManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OEIVoiceOver();
// End Cross Module References
	void UOEIVoiceOverManager::StaticRegisterNativesUOEIVoiceOverManager()
	{
	}
	UClass* Z_Construct_UClass_UOEIVoiceOverManager_NoRegister()
	{
		return UOEIVoiceOverManager::StaticClass();
	}
	struct Z_Construct_UClass_UOEIVoiceOverManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIVoiceOverManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIVoiceOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIVoiceOverManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIVoiceOverManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIVoiceOverManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIVoiceOverManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIVoiceOverManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIVoiceOverManager_Statics::ClassParams = {
		&UOEIVoiceOverManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOEIVoiceOverManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIVoiceOverManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIVoiceOverManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIVoiceOverManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIVoiceOverManager, 937998630);
	template<> OEIVOICEOVER_API UClass* StaticClass<UOEIVoiceOverManager>()
	{
		return UOEIVoiceOverManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIVoiceOverManager(Z_Construct_UClass_UOEIVoiceOverManager, &UOEIVoiceOverManager::StaticClass, TEXT("/Script/OEIVoiceOver"), TEXT("UOEIVoiceOverManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIVoiceOverManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
