// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/PlayFabPartyNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabPartyNetDriver() {}
// Cross Module References
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabPartyNetDriver_NoRegister();
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabPartyNetDriver();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
// End Cross Module References
	void UPlayFabPartyNetDriver::StaticRegisterNativesUPlayFabPartyNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UPlayFabPartyNetDriver_NoRegister()
	{
		return UPlayFabPartyNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabPartyNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDelayAfterTravelHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugDelayAfterTravelHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDelayAfterTravelClient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugDelayAfterTravelClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabPartyNetDriver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabPartyNetDriver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelHost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabPartyNetDriver" },
		{ "ModuleRelativePath", "Public/PlayFabPartyNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelHost = { "DebugDelayAfterTravelHost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabPartyNetDriver, DebugDelayAfterTravelHost), METADATA_PARAMS(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelClient_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PlayFabPartyNetDriver" },
		{ "ModuleRelativePath", "Public/PlayFabPartyNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelClient = { "DebugDelayAfterTravelClient", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayFabPartyNetDriver, DebugDelayAfterTravelClient), METADATA_PARAMS(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelClient_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::NewProp_DebugDelayAfterTravelClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabPartyNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::ClassParams = {
		&UPlayFabPartyNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabPartyNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabPartyNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabPartyNetDriver, 2102634057);
	template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UPlayFabPartyNetDriver>()
	{
		return UPlayFabPartyNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabPartyNetDriver(Z_Construct_UClass_UPlayFabPartyNetDriver, &UPlayFabPartyNetDriver::StaticClass, TEXT("/Script/OnlineSubsystemPlayFab"), TEXT("UPlayFabPartyNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabPartyNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
