// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ELoginIdentityProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELoginIdentityProvider() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ELoginIdentityProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ELoginIdentityProvider, Z_Construct_UPackage__Script_PlayFab(), TEXT("ELoginIdentityProvider"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ELoginIdentityProvider>()
	{
		return ELoginIdentityProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELoginIdentityProvider(ELoginIdentityProvider_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ELoginIdentityProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ELoginIdentityProvider_Hash() { return 3345418297U; }
	UEnum* Z_Construct_UEnum_PlayFab_ELoginIdentityProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELoginIdentityProvider"), 0, Get_Z_Construct_UEnum_PlayFab_ELoginIdentityProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELoginIdentityProvider::pfenum_Unknown", (int64)ELoginIdentityProvider::pfenum_Unknown },
				{ "ELoginIdentityProvider::pfenum_PlayFab", (int64)ELoginIdentityProvider::pfenum_PlayFab },
				{ "ELoginIdentityProvider::pfenum_Custom", (int64)ELoginIdentityProvider::pfenum_Custom },
				{ "ELoginIdentityProvider::pfenum_GameCenter", (int64)ELoginIdentityProvider::pfenum_GameCenter },
				{ "ELoginIdentityProvider::pfenum_GooglePlay", (int64)ELoginIdentityProvider::pfenum_GooglePlay },
				{ "ELoginIdentityProvider::pfenum_Steam", (int64)ELoginIdentityProvider::pfenum_Steam },
				{ "ELoginIdentityProvider::pfenum_XBoxLive", (int64)ELoginIdentityProvider::pfenum_XBoxLive },
				{ "ELoginIdentityProvider::pfenum_PSN", (int64)ELoginIdentityProvider::pfenum_PSN },
				{ "ELoginIdentityProvider::pfenum_Kongregate", (int64)ELoginIdentityProvider::pfenum_Kongregate },
				{ "ELoginIdentityProvider::pfenum_Facebook", (int64)ELoginIdentityProvider::pfenum_Facebook },
				{ "ELoginIdentityProvider::pfenum_IOSDevice", (int64)ELoginIdentityProvider::pfenum_IOSDevice },
				{ "ELoginIdentityProvider::pfenum_AndroidDevice", (int64)ELoginIdentityProvider::pfenum_AndroidDevice },
				{ "ELoginIdentityProvider::pfenum_Twitch", (int64)ELoginIdentityProvider::pfenum_Twitch },
				{ "ELoginIdentityProvider::pfenum_WindowsHello", (int64)ELoginIdentityProvider::pfenum_WindowsHello },
				{ "ELoginIdentityProvider::pfenum_GameServer", (int64)ELoginIdentityProvider::pfenum_GameServer },
				{ "ELoginIdentityProvider::pfenum_CustomServer", (int64)ELoginIdentityProvider::pfenum_CustomServer },
				{ "ELoginIdentityProvider::pfenum_NintendoSwitch", (int64)ELoginIdentityProvider::pfenum_NintendoSwitch },
				{ "ELoginIdentityProvider::pfenum_FacebookInstantGames", (int64)ELoginIdentityProvider::pfenum_FacebookInstantGames },
				{ "ELoginIdentityProvider::pfenum_OpenIdConnect", (int64)ELoginIdentityProvider::pfenum_OpenIdConnect },
				{ "ELoginIdentityProvider::pfenum_Apple", (int64)ELoginIdentityProvider::pfenum_Apple },
				{ "ELoginIdentityProvider::pfenum_NintendoSwitchAccount", (int64)ELoginIdentityProvider::pfenum_NintendoSwitchAccount },
				{ "ELoginIdentityProvider::pfenum_MAX", (int64)ELoginIdentityProvider::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ELoginIdentityProvider.h" },
				{ "pfenum_AndroidDevice.Name", "ELoginIdentityProvider::pfenum_AndroidDevice" },
				{ "pfenum_Apple.Name", "ELoginIdentityProvider::pfenum_Apple" },
				{ "pfenum_Custom.Name", "ELoginIdentityProvider::pfenum_Custom" },
				{ "pfenum_CustomServer.Name", "ELoginIdentityProvider::pfenum_CustomServer" },
				{ "pfenum_Facebook.Name", "ELoginIdentityProvider::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGames.Name", "ELoginIdentityProvider::pfenum_FacebookInstantGames" },
				{ "pfenum_GameCenter.Name", "ELoginIdentityProvider::pfenum_GameCenter" },
				{ "pfenum_GameServer.Name", "ELoginIdentityProvider::pfenum_GameServer" },
				{ "pfenum_GooglePlay.Name", "ELoginIdentityProvider::pfenum_GooglePlay" },
				{ "pfenum_IOSDevice.Name", "ELoginIdentityProvider::pfenum_IOSDevice" },
				{ "pfenum_Kongregate.Name", "ELoginIdentityProvider::pfenum_Kongregate" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ELoginIdentityProvider::pfenum_MAX" },
				{ "pfenum_NintendoSwitch.Name", "ELoginIdentityProvider::pfenum_NintendoSwitch" },
				{ "pfenum_NintendoSwitchAccount.Name", "ELoginIdentityProvider::pfenum_NintendoSwitchAccount" },
				{ "pfenum_OpenIdConnect.Name", "ELoginIdentityProvider::pfenum_OpenIdConnect" },
				{ "pfenum_PlayFab.Name", "ELoginIdentityProvider::pfenum_PlayFab" },
				{ "pfenum_PSN.Name", "ELoginIdentityProvider::pfenum_PSN" },
				{ "pfenum_Steam.Name", "ELoginIdentityProvider::pfenum_Steam" },
				{ "pfenum_Twitch.Name", "ELoginIdentityProvider::pfenum_Twitch" },
				{ "pfenum_Unknown.Name", "ELoginIdentityProvider::pfenum_Unknown" },
				{ "pfenum_WindowsHello.Name", "ELoginIdentityProvider::pfenum_WindowsHello" },
				{ "pfenum_XBoxLive.Name", "ELoginIdentityProvider::pfenum_XBoxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ELoginIdentityProvider",
				"ELoginIdentityProvider",
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
