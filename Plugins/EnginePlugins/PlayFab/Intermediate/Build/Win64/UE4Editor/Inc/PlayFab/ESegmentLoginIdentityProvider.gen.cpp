// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ESegmentLoginIdentityProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESegmentLoginIdentityProvider() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ESegmentLoginIdentityProvider_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider, Z_Construct_UPackage__Script_PlayFab(), TEXT("ESegmentLoginIdentityProvider"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ESegmentLoginIdentityProvider>()
	{
		return ESegmentLoginIdentityProvider_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegmentLoginIdentityProvider(ESegmentLoginIdentityProvider_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ESegmentLoginIdentityProvider"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider_Hash() { return 1538366791U; }
	UEnum* Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegmentLoginIdentityProvider"), 0, Get_Z_Construct_UEnum_PlayFab_ESegmentLoginIdentityProvider_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegmentLoginIdentityProvider::pfenum_Unknown", (int64)ESegmentLoginIdentityProvider::pfenum_Unknown },
				{ "ESegmentLoginIdentityProvider::pfenum_PlayFab", (int64)ESegmentLoginIdentityProvider::pfenum_PlayFab },
				{ "ESegmentLoginIdentityProvider::pfenum_Custom", (int64)ESegmentLoginIdentityProvider::pfenum_Custom },
				{ "ESegmentLoginIdentityProvider::pfenum_GameCenter", (int64)ESegmentLoginIdentityProvider::pfenum_GameCenter },
				{ "ESegmentLoginIdentityProvider::pfenum_GooglePlay", (int64)ESegmentLoginIdentityProvider::pfenum_GooglePlay },
				{ "ESegmentLoginIdentityProvider::pfenum_Steam", (int64)ESegmentLoginIdentityProvider::pfenum_Steam },
				{ "ESegmentLoginIdentityProvider::pfenum_XBoxLive", (int64)ESegmentLoginIdentityProvider::pfenum_XBoxLive },
				{ "ESegmentLoginIdentityProvider::pfenum_PSN", (int64)ESegmentLoginIdentityProvider::pfenum_PSN },
				{ "ESegmentLoginIdentityProvider::pfenum_Kongregate", (int64)ESegmentLoginIdentityProvider::pfenum_Kongregate },
				{ "ESegmentLoginIdentityProvider::pfenum_Facebook", (int64)ESegmentLoginIdentityProvider::pfenum_Facebook },
				{ "ESegmentLoginIdentityProvider::pfenum_IOSDevice", (int64)ESegmentLoginIdentityProvider::pfenum_IOSDevice },
				{ "ESegmentLoginIdentityProvider::pfenum_AndroidDevice", (int64)ESegmentLoginIdentityProvider::pfenum_AndroidDevice },
				{ "ESegmentLoginIdentityProvider::pfenum_Twitch", (int64)ESegmentLoginIdentityProvider::pfenum_Twitch },
				{ "ESegmentLoginIdentityProvider::pfenum_WindowsHello", (int64)ESegmentLoginIdentityProvider::pfenum_WindowsHello },
				{ "ESegmentLoginIdentityProvider::pfenum_GameServer", (int64)ESegmentLoginIdentityProvider::pfenum_GameServer },
				{ "ESegmentLoginIdentityProvider::pfenum_CustomServer", (int64)ESegmentLoginIdentityProvider::pfenum_CustomServer },
				{ "ESegmentLoginIdentityProvider::pfenum_NintendoSwitch", (int64)ESegmentLoginIdentityProvider::pfenum_NintendoSwitch },
				{ "ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames", (int64)ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames },
				{ "ESegmentLoginIdentityProvider::pfenum_OpenIdConnect", (int64)ESegmentLoginIdentityProvider::pfenum_OpenIdConnect },
				{ "ESegmentLoginIdentityProvider::pfenum_Apple", (int64)ESegmentLoginIdentityProvider::pfenum_Apple },
				{ "ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount", (int64)ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount },
				{ "ESegmentLoginIdentityProvider::pfenum_MAX", (int64)ESegmentLoginIdentityProvider::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ESegmentLoginIdentityProvider.h" },
				{ "pfenum_AndroidDevice.Name", "ESegmentLoginIdentityProvider::pfenum_AndroidDevice" },
				{ "pfenum_Apple.Name", "ESegmentLoginIdentityProvider::pfenum_Apple" },
				{ "pfenum_Custom.Name", "ESegmentLoginIdentityProvider::pfenum_Custom" },
				{ "pfenum_CustomServer.Name", "ESegmentLoginIdentityProvider::pfenum_CustomServer" },
				{ "pfenum_Facebook.Name", "ESegmentLoginIdentityProvider::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGames.Name", "ESegmentLoginIdentityProvider::pfenum_FacebookInstantGames" },
				{ "pfenum_GameCenter.Name", "ESegmentLoginIdentityProvider::pfenum_GameCenter" },
				{ "pfenum_GameServer.Name", "ESegmentLoginIdentityProvider::pfenum_GameServer" },
				{ "pfenum_GooglePlay.Name", "ESegmentLoginIdentityProvider::pfenum_GooglePlay" },
				{ "pfenum_IOSDevice.Name", "ESegmentLoginIdentityProvider::pfenum_IOSDevice" },
				{ "pfenum_Kongregate.Name", "ESegmentLoginIdentityProvider::pfenum_Kongregate" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ESegmentLoginIdentityProvider::pfenum_MAX" },
				{ "pfenum_NintendoSwitch.Name", "ESegmentLoginIdentityProvider::pfenum_NintendoSwitch" },
				{ "pfenum_NintendoSwitchAccount.Name", "ESegmentLoginIdentityProvider::pfenum_NintendoSwitchAccount" },
				{ "pfenum_OpenIdConnect.Name", "ESegmentLoginIdentityProvider::pfenum_OpenIdConnect" },
				{ "pfenum_PlayFab.Name", "ESegmentLoginIdentityProvider::pfenum_PlayFab" },
				{ "pfenum_PSN.Name", "ESegmentLoginIdentityProvider::pfenum_PSN" },
				{ "pfenum_Steam.Name", "ESegmentLoginIdentityProvider::pfenum_Steam" },
				{ "pfenum_Twitch.Name", "ESegmentLoginIdentityProvider::pfenum_Twitch" },
				{ "pfenum_Unknown.Name", "ESegmentLoginIdentityProvider::pfenum_Unknown" },
				{ "pfenum_WindowsHello.Name", "ESegmentLoginIdentityProvider::pfenum_WindowsHello" },
				{ "pfenum_XBoxLive.Name", "ESegmentLoginIdentityProvider::pfenum_XBoxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ESegmentLoginIdentityProvider",
				"ESegmentLoginIdentityProvider",
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
