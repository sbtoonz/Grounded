// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OnlineBridgePresenceAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgePresenceAdapter() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapter_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOnlineBridgePresenceAdapter::StaticRegisterNativesUOnlineBridgePresenceAdapter()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapter_NoRegister()
	{
		return UOnlineBridgePresenceAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineBridgePresenceAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnlineBridgePresenceAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::ClassParams = {
		&UOnlineBridgePresenceAdapter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgePresenceAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgePresenceAdapter, 2911702993);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBridgePresenceAdapter>()
	{
		return UOnlineBridgePresenceAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgePresenceAdapter(Z_Construct_UClass_UOnlineBridgePresenceAdapter, &UOnlineBridgePresenceAdapter::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOnlineBridgePresenceAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgePresenceAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
