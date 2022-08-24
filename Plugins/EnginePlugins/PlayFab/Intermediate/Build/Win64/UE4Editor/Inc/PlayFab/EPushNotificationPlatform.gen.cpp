// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EPushNotificationPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPushNotificationPlatform() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EPushNotificationPlatform();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EPushNotificationPlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EPushNotificationPlatform, Z_Construct_UPackage__Script_PlayFab(), TEXT("EPushNotificationPlatform"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EPushNotificationPlatform>()
	{
		return EPushNotificationPlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPushNotificationPlatform(EPushNotificationPlatform_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EPushNotificationPlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EPushNotificationPlatform_Hash() { return 3127346064U; }
	UEnum* Z_Construct_UEnum_PlayFab_EPushNotificationPlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPushNotificationPlatform"), 0, Get_Z_Construct_UEnum_PlayFab_EPushNotificationPlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPushNotificationPlatform::pfenum_ApplePushNotificationService", (int64)EPushNotificationPlatform::pfenum_ApplePushNotificationService },
				{ "EPushNotificationPlatform::pfenum_GoogleCloudMessaging", (int64)EPushNotificationPlatform::pfenum_GoogleCloudMessaging },
				{ "EPushNotificationPlatform::pfenum_MAX", (int64)EPushNotificationPlatform::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EPushNotificationPlatform.h" },
				{ "pfenum_ApplePushNotificationService.Name", "EPushNotificationPlatform::pfenum_ApplePushNotificationService" },
				{ "pfenum_GoogleCloudMessaging.Name", "EPushNotificationPlatform::pfenum_GoogleCloudMessaging" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EPushNotificationPlatform::pfenum_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EPushNotificationPlatform",
				"EPushNotificationPlatform",
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
