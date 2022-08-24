// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemXSAPI/Public/OnlineBridgePrivilegeAdapterXSAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBridgePrivilegeAdapterXSAPI() {}
// Cross Module References
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_NoRegister();
	ONLINESUBSYSTEMXSAPI_API UClass* Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemXSAPI();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineBridgePrivilegeAdapter_NoRegister();
// End Cross Module References
	void UOnlineBridgePrivilegeAdapterXSAPI::StaticRegisterNativesUOnlineBridgePrivilegeAdapterXSAPI()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_NoRegister()
	{
		return UOnlineBridgePrivilegeAdapterXSAPI::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemXSAPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OnlineBridgePrivilegeAdapterXSAPI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnlineBridgePrivilegeAdapterXSAPI.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineBridgePrivilegeAdapter_NoRegister, (int32)VTABLE_OFFSET(UOnlineBridgePrivilegeAdapterXSAPI, IOnlineBridgePrivilegeAdapter), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBridgePrivilegeAdapterXSAPI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::ClassParams = {
		&UOnlineBridgePrivilegeAdapterXSAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBridgePrivilegeAdapterXSAPI, 2611569437);
	template<> ONLINESUBSYSTEMXSAPI_API UClass* StaticClass<UOnlineBridgePrivilegeAdapterXSAPI>()
	{
		return UOnlineBridgePrivilegeAdapterXSAPI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBridgePrivilegeAdapterXSAPI(Z_Construct_UClass_UOnlineBridgePrivilegeAdapterXSAPI, &UOnlineBridgePrivilegeAdapterXSAPI::StaticClass, TEXT("/Script/OnlineSubsystemXSAPI"), TEXT("UOnlineBridgePrivilegeAdapterXSAPI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBridgePrivilegeAdapterXSAPI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
