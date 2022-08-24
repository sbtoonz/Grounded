// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/OnlineConstantInterfacePlayFab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineConstantInterfacePlayFab() {}
// Cross Module References
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UOnlineConstantInterfacePlayFab_NoRegister();
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UOnlineConstantInterfacePlayFab();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineConstantInterface_NoRegister();
// End Cross Module References
	void UOnlineConstantInterfacePlayFab::StaticRegisterNativesUOnlineConstantInterfacePlayFab()
	{
	}
	UClass* Z_Construct_UClass_UOnlineConstantInterfacePlayFab_NoRegister()
	{
		return UOnlineConstantInterfacePlayFab::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineConstantInterfacePlayFab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineConstantInterfacePlayFab.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineConstantInterface_NoRegister, (int32)VTABLE_OFFSET(UOnlineConstantInterfacePlayFab, IOnlineConstantInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineConstantInterfacePlayFab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::ClassParams = {
		&UOnlineConstantInterfacePlayFab::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineConstantInterfacePlayFab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineConstantInterfacePlayFab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineConstantInterfacePlayFab, 127897643);
	template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UOnlineConstantInterfacePlayFab>()
	{
		return UOnlineConstantInterfacePlayFab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineConstantInterfacePlayFab(Z_Construct_UClass_UOnlineConstantInterfacePlayFab, &UOnlineConstantInterfacePlayFab::StaticClass, TEXT("/Script/OnlineSubsystemPlayFab"), TEXT("UOnlineConstantInterfacePlayFab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineConstantInterfacePlayFab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
