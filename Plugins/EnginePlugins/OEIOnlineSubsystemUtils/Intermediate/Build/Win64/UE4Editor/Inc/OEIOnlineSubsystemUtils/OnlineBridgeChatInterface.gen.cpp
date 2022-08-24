// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OnlineBridgeChatInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeChatInterface() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeChatInterface_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeChatInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOnlineBridgeChatInterface::StaticRegisterNativesUOnlineBridgeChatInterface()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeChatInterface_NoRegister()
	{
		return UOnlineBridgeChatInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeChatInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineBridgeChatInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnlineBridgeChatInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::ClassParams = {
		&UOnlineBridgeChatInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeChatInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeChatInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeChatInterface, 3843242338);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineBridgeChatInterface>()
	{
		return UOnlineBridgeChatInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeChatInterface(Z_Construct_UClass_UOnlineBridgeChatInterface, &UOnlineBridgeChatInterface::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOnlineBridgeChatInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeChatInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
