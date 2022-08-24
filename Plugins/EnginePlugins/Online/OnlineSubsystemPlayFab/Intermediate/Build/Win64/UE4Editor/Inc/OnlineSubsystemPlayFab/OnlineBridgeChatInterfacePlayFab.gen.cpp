// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/OnlineBridgeChatInterfacePlayFab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeChatInterfacePlayFab() {}
// Cross Module References
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_NoRegister();
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeChatInterface_NoRegister();
// End Cross Module References
	void UOnlineBridgeChatInterfacePlayFab::StaticRegisterNativesUOnlineBridgeChatInterfacePlayFab()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_NoRegister()
	{
		return UOnlineBridgeChatInterfacePlayFab::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineBridgeChatInterfacePlayFab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBridgeChatInterfacePlayFab.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineBridgeChatInterface_NoRegister, (int32)VTABLE_OFFSET(UOnlineBridgeChatInterfacePlayFab, IOnlineBridgeChatInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBridgeChatInterfacePlayFab>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::ClassParams = {
		&UOnlineBridgeChatInterfacePlayFab::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeChatInterfacePlayFab, 2198157663);
	template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UOnlineBridgeChatInterfacePlayFab>()
	{
		return UOnlineBridgeChatInterfacePlayFab::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeChatInterfacePlayFab(Z_Construct_UClass_UOnlineBridgeChatInterfacePlayFab, &UOnlineBridgeChatInterfacePlayFab::StaticClass, TEXT("/Script/OnlineSubsystemPlayFab"), TEXT("UOnlineBridgeChatInterfacePlayFab"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeChatInterfacePlayFab);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
