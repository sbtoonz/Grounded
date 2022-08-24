// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EUserOrigination.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUserOrigination() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EUserOrigination();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EUserOrigination_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EUserOrigination, Z_Construct_UPackage__Script_PlayFab(), TEXT("EUserOrigination"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EUserOrigination>()
	{
		return EUserOrigination_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUserOrigination(EUserOrigination_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EUserOrigination"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EUserOrigination_Hash() { return 1562448899U; }
	UEnum* Z_Construct_UEnum_PlayFab_EUserOrigination()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUserOrigination"), 0, Get_Z_Construct_UEnum_PlayFab_EUserOrigination_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUserOrigination::pfenum_Organic", (int64)EUserOrigination::pfenum_Organic },
				{ "EUserOrigination::pfenum_Steam", (int64)EUserOrigination::pfenum_Steam },
				{ "EUserOrigination::pfenum_Google", (int64)EUserOrigination::pfenum_Google },
				{ "EUserOrigination::pfenum_Amazon", (int64)EUserOrigination::pfenum_Amazon },
				{ "EUserOrigination::pfenum_Facebook", (int64)EUserOrigination::pfenum_Facebook },
				{ "EUserOrigination::pfenum_Kongregate", (int64)EUserOrigination::pfenum_Kongregate },
				{ "EUserOrigination::pfenum_GamersFirst", (int64)EUserOrigination::pfenum_GamersFirst },
				{ "EUserOrigination::pfenum_Unknown", (int64)EUserOrigination::pfenum_Unknown },
				{ "EUserOrigination::pfenum_IOS", (int64)EUserOrigination::pfenum_IOS },
				{ "EUserOrigination::pfenum_LoadTest", (int64)EUserOrigination::pfenum_LoadTest },
				{ "EUserOrigination::pfenum_Android", (int64)EUserOrigination::pfenum_Android },
				{ "EUserOrigination::pfenum_PSN", (int64)EUserOrigination::pfenum_PSN },
				{ "EUserOrigination::pfenum_GameCenter", (int64)EUserOrigination::pfenum_GameCenter },
				{ "EUserOrigination::pfenum_CustomId", (int64)EUserOrigination::pfenum_CustomId },
				{ "EUserOrigination::pfenum_XboxLive", (int64)EUserOrigination::pfenum_XboxLive },
				{ "EUserOrigination::pfenum_Parse", (int64)EUserOrigination::pfenum_Parse },
				{ "EUserOrigination::pfenum_Twitch", (int64)EUserOrigination::pfenum_Twitch },
				{ "EUserOrigination::pfenum_WindowsHello", (int64)EUserOrigination::pfenum_WindowsHello },
				{ "EUserOrigination::pfenum_ServerCustomId", (int64)EUserOrigination::pfenum_ServerCustomId },
				{ "EUserOrigination::pfenum_NintendoSwitchDeviceId", (int64)EUserOrigination::pfenum_NintendoSwitchDeviceId },
				{ "EUserOrigination::pfenum_FacebookInstantGamesId", (int64)EUserOrigination::pfenum_FacebookInstantGamesId },
				{ "EUserOrigination::pfenum_OpenIdConnect", (int64)EUserOrigination::pfenum_OpenIdConnect },
				{ "EUserOrigination::pfenum_Apple", (int64)EUserOrigination::pfenum_Apple },
				{ "EUserOrigination::pfenum_NintendoSwitchAccount", (int64)EUserOrigination::pfenum_NintendoSwitchAccount },
				{ "EUserOrigination::pfenum_MAX", (int64)EUserOrigination::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EUserOrigination.h" },
				{ "pfenum_Amazon.Name", "EUserOrigination::pfenum_Amazon" },
				{ "pfenum_Android.Name", "EUserOrigination::pfenum_Android" },
				{ "pfenum_Apple.Name", "EUserOrigination::pfenum_Apple" },
				{ "pfenum_CustomId.Name", "EUserOrigination::pfenum_CustomId" },
				{ "pfenum_Facebook.Name", "EUserOrigination::pfenum_Facebook" },
				{ "pfenum_FacebookInstantGamesId.Name", "EUserOrigination::pfenum_FacebookInstantGamesId" },
				{ "pfenum_GameCenter.Name", "EUserOrigination::pfenum_GameCenter" },
				{ "pfenum_GamersFirst.Name", "EUserOrigination::pfenum_GamersFirst" },
				{ "pfenum_Google.Name", "EUserOrigination::pfenum_Google" },
				{ "pfenum_IOS.Name", "EUserOrigination::pfenum_IOS" },
				{ "pfenum_Kongregate.Name", "EUserOrigination::pfenum_Kongregate" },
				{ "pfenum_LoadTest.Name", "EUserOrigination::pfenum_LoadTest" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EUserOrigination::pfenum_MAX" },
				{ "pfenum_NintendoSwitchAccount.Name", "EUserOrigination::pfenum_NintendoSwitchAccount" },
				{ "pfenum_NintendoSwitchDeviceId.Name", "EUserOrigination::pfenum_NintendoSwitchDeviceId" },
				{ "pfenum_OpenIdConnect.Name", "EUserOrigination::pfenum_OpenIdConnect" },
				{ "pfenum_Organic.Name", "EUserOrigination::pfenum_Organic" },
				{ "pfenum_Parse.Name", "EUserOrigination::pfenum_Parse" },
				{ "pfenum_PSN.Name", "EUserOrigination::pfenum_PSN" },
				{ "pfenum_ServerCustomId.Name", "EUserOrigination::pfenum_ServerCustomId" },
				{ "pfenum_Steam.Name", "EUserOrigination::pfenum_Steam" },
				{ "pfenum_Twitch.Name", "EUserOrigination::pfenum_Twitch" },
				{ "pfenum_Unknown.Name", "EUserOrigination::pfenum_Unknown" },
				{ "pfenum_WindowsHello.Name", "EUserOrigination::pfenum_WindowsHello" },
				{ "pfenum_XboxLive.Name", "EUserOrigination::pfenum_XboxLive" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EUserOrigination",
				"EUserOrigination",
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
