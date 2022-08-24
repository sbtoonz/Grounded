// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemXSAPI/Public/OnlineBridgePresenceAdapterXSAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgePresenceAdapterXSAPI() {}
// Cross Module References
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_NoRegister();
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemXSAPI();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapter_NoRegister();
// End Cross Module References
	void UOnlineBridgePresenceAdapterXSAPI::StaticRegisterNativesUOnlineBridgePresenceAdapterXSAPI()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_NoRegister()
	{
		return UOnlineBridgePresenceAdapterXSAPI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemXSAPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineBridgePresenceAdapterXSAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBridgePresenceAdapterXSAPI.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineBridgePresenceAdapter_NoRegister, (int32)VTABLE_OFFSET(UOnlineBridgePresenceAdapterXSAPI, IOnlineBridgePresenceAdapter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBridgePresenceAdapterXSAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::ClassParams = {
		&UOnlineBridgePresenceAdapterXSAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgePresenceAdapterXSAPI, 3438427007);
	template<> ONLINESUBSYSTEMXSAPI_API UClass* StaticClass<UOnlineBridgePresenceAdapterXSAPI>()
	{
		return UOnlineBridgePresenceAdapterXSAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgePresenceAdapterXSAPI(Z_Construct_UClass_UOnlineBridgePresenceAdapterXSAPI, &UOnlineBridgePresenceAdapterXSAPI::StaticClass, TEXT("/Script/OnlineSubsystemXSAPI"), TEXT("UOnlineBridgePresenceAdapterXSAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgePresenceAdapterXSAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
