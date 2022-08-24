// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIOnlineSubsystemUtils/Public/EOnlinePermission.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOnlinePermission() {}
// Cross Module References
	OEIONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission();
	UPackage* Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
// End Cross Module References
	static UEnum* EOnlinePermission_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission, Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils(), TEXT("EOnlinePermission"));
		}
		return Singleton;
	}
	template<> OEIONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlinePermission>()
	{
		return EOnlinePermission_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlinePermission(EOnlinePermission_StaticEnum, TEXT("/Script/OEIOnlineSubsystemUtils"), TEXT("EOnlinePermission"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission_Hash() { return 1804716591U; }
	UEnum* Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlinePermission"), 0, Get_Z_Construct_UEnum_OEIOnlineSubsystemUtils_EOnlinePermission_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlinePermission::CommunicateUsingText", (int64)EOnlinePermission::CommunicateUsingText },
				{ "EOnlinePermission::CommunicateUsingVideo", (int64)EOnlinePermission::CommunicateUsingVideo },
				{ "EOnlinePermission::CommunicateUsingVoice", (int64)EOnlinePermission::CommunicateUsingVoice },
				{ "EOnlinePermission::ViewTargetProfile", (int64)EOnlinePermission::ViewTargetProfile },
				{ "EOnlinePermission::ViewTargetPresence", (int64)EOnlinePermission::ViewTargetPresence },
				{ "EOnlinePermission::PlayMultiplayer", (int64)EOnlinePermission::PlayMultiplayer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CommunicateUsingText.Name", "EOnlinePermission::CommunicateUsingText" },
				{ "CommunicateUsingVideo.Name", "EOnlinePermission::CommunicateUsingVideo" },
				{ "CommunicateUsingVoice.Name", "EOnlinePermission::CommunicateUsingVoice" },
				{ "ModuleRelativePath", "Public/EOnlinePermission.h" },
				{ "PlayMultiplayer.Name", "EOnlinePermission::PlayMultiplayer" },
				{ "ViewTargetPresence.Name", "EOnlinePermission::ViewTargetPresence" },
				{ "ViewTargetProfile.Name", "EOnlinePermission::ViewTargetProfile" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIOnlineSubsystemUtils,
				nullptr,
				"EOnlinePermission",
				"EOnlinePermission",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
