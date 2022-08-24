// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineManager/Public/OnlineManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineManager() {}
// Cross Module References
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineManager_NoRegister();
	ONLINEMANAGER_API UClass* Z_Construct_UClass_UOnlineManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_OnlineManager();
// End Cross Module References
	void UOnlineManager::StaticRegisterNativesUOnlineManager()
	{
	}
	UClass* Z_Construct_UClass_UOnlineManager_NoRegister()
	{
		return UOnlineManager::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsystemToLink_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SubsystemToLink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDevModeDisplayName_MetaData[];
#endif
		static void NewProp_UseDevModeDisplayName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDevModeDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDevModeDisplayName_MetaData[];
#endif
		static void NewProp_ForceDevModeDisplayName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceDevModeDisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineManager_Statics::NewProp_SubsystemToLink_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineManager" },
		{ "ModuleRelativePath", "Public/OnlineManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineManager_Statics::NewProp_SubsystemToLink = { "SubsystemToLink", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineManager, SubsystemToLink), METADATA_PARAMS(Z_Construct_UClass_UOnlineManager_Statics::NewProp_SubsystemToLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineManager_Statics::NewProp_SubsystemToLink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineManager" },
		{ "ModuleRelativePath", "Public/OnlineManager.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName_SetBit(void* Obj)
	{
		((UOnlineManager*)Obj)->UseDevModeDisplayName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName = { "UseDevModeDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlineManager), &Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OnlineManager" },
		{ "ModuleRelativePath", "Public/OnlineManager.h" },
	};
#endif
	void Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName_SetBit(void* Obj)
	{
		((UOnlineManager*)Obj)->ForceDevModeDisplayName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName = { "ForceDevModeDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlineManager), &Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineManager_Statics::NewProp_SubsystemToLink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineManager_Statics::NewProp_UseDevModeDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineManager_Statics::NewProp_ForceDevModeDisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineManager_Statics::ClassParams = {
		&UOnlineManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineManager_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineManager, 2390839097);
	template<> ONLINEMANAGER_API UClass* StaticClass<UOnlineManager>()
	{
		return UOnlineManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineManager(Z_Construct_UClass_UOnlineManager, &UOnlineManager::StaticClass, TEXT("/Script/OnlineManager"), TEXT("UOnlineManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
