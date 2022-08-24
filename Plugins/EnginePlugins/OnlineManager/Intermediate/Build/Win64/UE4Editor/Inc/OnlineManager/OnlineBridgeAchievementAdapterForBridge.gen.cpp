// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineBridgeAchievementAdapterForBridge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeAchievementAdapterForBridge() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapter_NoRegister();
// End Cross Module References
	void UOnlineBridgeAchievementAdapterForBridge::StaticRegisterNativesUOnlineBridgeAchievementAdapterForBridge()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_NoRegister()
	{
		return UOnlineBridgeAchievementAdapterForBridge::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineBridgeAchievementAdapterForBridge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBridgeAchievementAdapterForBridge.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineBridgeAchievementAdapter_NoRegister, (int32)VTABLE_OFFSET(UOnlineBridgeAchievementAdapterForBridge, IOnlineBridgeAchievementAdapter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBridgeAchievementAdapterForBridge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::ClassParams = {
		&UOnlineBridgeAchievementAdapterForBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeAchievementAdapterForBridge, 1715054384);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineBridgeAchievementAdapterForBridge>()
	{
		return UOnlineBridgeAchievementAdapterForBridge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeAchievementAdapterForBridge(Z_Construct_UClass_UOnlineBridgeAchievementAdapterForBridge, &UOnlineBridgeAchievementAdapterForBridge::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineBridgeAchievementAdapterForBridge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeAchievementAdapterForBridge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
