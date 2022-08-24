// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OnlineBridgeUserAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeUserAdapter() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeUserAdapter_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeUserAdapter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOnlineBridgeUserAdapter::StaticRegisterNativesUOnlineBridgeUserAdapter()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeUserAdapter_NoRegister()
	{
		return UOnlineBridgeUserAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineBridgeUserAdapter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnlineBridgeUserAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::ClassParams = {
		&UOnlineBridgeUserAdapter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeUserAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeUserAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeUserAdapter, 2074114444);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBridgeUserAdapter>()
	{
		return UOnlineBridgeUserAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeUserAdapter(Z_Construct_UClass_UOnlineBridgeUserAdapter, &UOnlineBridgeUserAdapter::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOnlineBridgeUserAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeUserAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
