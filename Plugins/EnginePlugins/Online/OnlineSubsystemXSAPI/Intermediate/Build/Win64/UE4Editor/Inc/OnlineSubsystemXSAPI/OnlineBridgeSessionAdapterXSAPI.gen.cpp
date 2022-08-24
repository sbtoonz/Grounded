// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemXSAPI/Public/OnlineBridgeSessionAdapterXSAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgeSessionAdapterXSAPI() {}
// Cross Module References
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_NoRegister();
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemXSAPI();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgeSessionAdapter_NoRegister();
// End Cross Module References
	void UOnlineBridgeSessionAdapterXSAPI::StaticRegisterNativesUOnlineBridgeSessionAdapterXSAPI()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_NoRegister()
	{
		return UOnlineBridgeSessionAdapterXSAPI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemXSAPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineBridgeSessionAdapterXSAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBridgeSessionAdapterXSAPI.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineBridgeSessionAdapter_NoRegister, (int32)VTABLE_OFFSET(UOnlineBridgeSessionAdapterXSAPI, IOnlineBridgeSessionAdapter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBridgeSessionAdapterXSAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::ClassParams = {
		&UOnlineBridgeSessionAdapterXSAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgeSessionAdapterXSAPI, 89549206);
	template<> ONLINESUBSYSTEMXSAPI_API UClass* StaticClass<UOnlineBridgeSessionAdapterXSAPI>()
	{
		return UOnlineBridgeSessionAdapterXSAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgeSessionAdapterXSAPI(Z_Construct_UClass_UOnlineBridgeSessionAdapterXSAPI, &UOnlineBridgeSessionAdapterXSAPI::StaticClass, TEXT("/Script/OnlineSubsystemXSAPI"), TEXT("UOnlineBridgeSessionAdapterXSAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgeSessionAdapterXSAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
