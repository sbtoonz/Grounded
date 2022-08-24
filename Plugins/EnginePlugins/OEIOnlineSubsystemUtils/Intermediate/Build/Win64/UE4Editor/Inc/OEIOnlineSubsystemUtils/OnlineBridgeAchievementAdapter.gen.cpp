// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OnlineBridgeAchievementAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeAchievementAdapter() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapter_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOnlineBridgeAchievementAdapter::StaticRegisterNativesUOnlineBridgeAchievementAdapter()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapter_NoRegister()
	{
		return UOnlineBridgeAchievementAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineBridgeAchievementAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnlineBridgeAchievementAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::ClassParams = {
		&UOnlineBridgeAchievementAdapter::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeAchievementAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeAchievementAdapter, 1357789989);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBridgeAchievementAdapter>()
	{
		return UOnlineBridgeAchievementAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeAchievementAdapter(Z_Construct_UClass_UOnlineBridgeAchievementAdapter, &UOnlineBridgeAchievementAdapter::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOnlineBridgeAchievementAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeAchievementAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
