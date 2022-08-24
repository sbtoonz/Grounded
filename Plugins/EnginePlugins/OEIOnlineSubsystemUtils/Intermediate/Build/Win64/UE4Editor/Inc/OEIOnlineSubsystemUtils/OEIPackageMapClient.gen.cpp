// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/OEIPackageMapClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOEIPackageMapClient() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOEIPackageMapClient_NoRegister();
	OEIONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOEIPackageMapClient();
	ENGINE_API UClass* Z_Construct_UClass_UPackageMapClient();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	void UOEIPackageMapClient::StaticRegisterNativesUOEIPackageMapClient()
	{
	}
	UClass* Z_Construct_UClass_UOEIPackageMapClient_NoRegister()
	{
		return UOEIPackageMapClient::StaticClass();
	}
	struct Z_Construct_UClass_UOEIPackageMapClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NetGUIDResetExceptionFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGUIDResetExceptionFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NetGUIDResetExceptionFilters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOEIPackageMapClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPackageMapClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPackageMapClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OEIPackageMapClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OEIPackageMapClient.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters_Inner = { "NetGUIDResetExceptionFilters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OEIPackageMapClient" },
		{ "ModuleRelativePath", "Public/OEIPackageMapClient.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters = { "NetGUIDResetExceptionFilters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOEIPackageMapClient, NetGUIDResetExceptionFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOEIPackageMapClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOEIPackageMapClient_Statics::NewProp_NetGUIDResetExceptionFilters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOEIPackageMapClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOEIPackageMapClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOEIPackageMapClient_Statics::ClassParams = {
		&UOEIPackageMapClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOEIPackageMapClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPackageMapClient_Statics::PropPointers),
		0,
		0x001000AAu,
		METADATA_PARAMS(Z_Construct_UClass_UOEIPackageMapClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOEIPackageMapClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOEIPackageMapClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOEIPackageMapClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOEIPackageMapClient, 2821163121);
	template<> OEIONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOEIPackageMapClient>()
	{
		return UOEIPackageMapClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOEIPackageMapClient(Z_Construct_UClass_UOEIPackageMapClient, &UOEIPackageMapClient::StaticClass, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("UOEIPackageMapClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOEIPackageMapClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
