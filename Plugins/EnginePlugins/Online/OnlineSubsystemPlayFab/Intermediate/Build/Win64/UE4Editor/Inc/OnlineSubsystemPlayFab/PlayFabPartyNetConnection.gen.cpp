// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemPlayFab/Public/PlayFabPartyNetConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayFabPartyNetConnection() {}
// Cross Module References
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabPartyNetConnection_NoRegister();
	ONLINESUBSYSTEMPLAYFAB_API UClass* Z_Construct_UClass_UPlayFabPartyNetConnection();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemPlayFab();
// End Cross Module References
	void UPlayFabPartyNetConnection::StaticRegisterNativesUPlayFabPartyNetConnection()
	{
	}
	UClass* Z_Construct_UClass_UPlayFabPartyNetConnection_NoRegister()
	{
		return UPlayFabPartyNetConnection::StaticClass();
	}
	struct Z_Construct_UClass_UPlayFabPartyNetConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemPlayFab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayFabPartyNetConnection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayFabPartyNetConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayFabPartyNetConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::ClassParams = {
		&UPlayFabPartyNetConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayFabPartyNetConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayFabPartyNetConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayFabPartyNetConnection, 3891804783);
	template<> ONLINESUBSYSTEMPLAYFAB_API UClass* StaticClass<UPlayFabPartyNetConnection>()
	{
		return UPlayFabPartyNetConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayFabPartyNetConnection(Z_Construct_UClass_UPlayFabPartyNetConnection, &UPlayFabPartyNetConnection::StaticClass, TEXT("/Script/OnlineSubsystemPlayFab"), TEXT("UPlayFabPartyNetConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayFabPartyNetConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
