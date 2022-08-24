// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EAzureRegion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAzureRegion() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EAzureRegion();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EAzureRegion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EAzureRegion, Z_Construct_UPackage__Script_PlayFab(), TEXT("EAzureRegion"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EAzureRegion>()
	{
		return EAzureRegion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAzureRegion(EAzureRegion_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EAzureRegion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EAzureRegion_Hash() { return 3274693181U; }
	UEnum* Z_Construct_UEnum_PlayFab_EAzureRegion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAzureRegion"), 0, Get_Z_Construct_UEnum_PlayFab_EAzureRegion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAzureRegion::pfenum_AustraliaEast", (int64)EAzureRegion::pfenum_AustraliaEast },
				{ "EAzureRegion::pfenum_AustraliaSoutheast", (int64)EAzureRegion::pfenum_AustraliaSoutheast },
				{ "EAzureRegion::pfenum_BrazilSouth", (int64)EAzureRegion::pfenum_BrazilSouth },
				{ "EAzureRegion::pfenum_CentralUs", (int64)EAzureRegion::pfenum_CentralUs },
				{ "EAzureRegion::pfenum_EastAsia", (int64)EAzureRegion::pfenum_EastAsia },
				{ "EAzureRegion::pfenum_EastUs", (int64)EAzureRegion::pfenum_EastUs },
				{ "EAzureRegion::pfenum_EastUs2", (int64)EAzureRegion::pfenum_EastUs2 },
				{ "EAzureRegion::pfenum_JapanEast", (int64)EAzureRegion::pfenum_JapanEast },
				{ "EAzureRegion::pfenum_JapanWest", (int64)EAzureRegion::pfenum_JapanWest },
				{ "EAzureRegion::pfenum_NorthCentralUs", (int64)EAzureRegion::pfenum_NorthCentralUs },
				{ "EAzureRegion::pfenum_NorthEurope", (int64)EAzureRegion::pfenum_NorthEurope },
				{ "EAzureRegion::pfenum_SouthCentralUs", (int64)EAzureRegion::pfenum_SouthCentralUs },
				{ "EAzureRegion::pfenum_SoutheastAsia", (int64)EAzureRegion::pfenum_SoutheastAsia },
				{ "EAzureRegion::pfenum_WestEurope", (int64)EAzureRegion::pfenum_WestEurope },
				{ "EAzureRegion::pfenum_WestUs", (int64)EAzureRegion::pfenum_WestUs },
				{ "EAzureRegion::pfenum_ChinaEast2", (int64)EAzureRegion::pfenum_ChinaEast2 },
				{ "EAzureRegion::pfenum_ChinaNorth2", (int64)EAzureRegion::pfenum_ChinaNorth2 },
				{ "EAzureRegion::pfenum_SouthAfricaNorth", (int64)EAzureRegion::pfenum_SouthAfricaNorth },
				{ "EAzureRegion::pfenum_CentralUsEuap", (int64)EAzureRegion::pfenum_CentralUsEuap },
				{ "EAzureRegion::pfenum_WestCentralUs", (int64)EAzureRegion::pfenum_WestCentralUs },
				{ "EAzureRegion::pfenum_KoreaCentral", (int64)EAzureRegion::pfenum_KoreaCentral },
				{ "EAzureRegion::pfenum_FranceCentral", (int64)EAzureRegion::pfenum_FranceCentral },
				{ "EAzureRegion::pfenum_WestUs2", (int64)EAzureRegion::pfenum_WestUs2 },
				{ "EAzureRegion::pfenum_CentralIndia", (int64)EAzureRegion::pfenum_CentralIndia },
				{ "EAzureRegion::pfenum_UaeNorth", (int64)EAzureRegion::pfenum_UaeNorth },
				{ "EAzureRegion::pfenum_MAX", (int64)EAzureRegion::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/EAzureRegion.h" },
				{ "pfenum_AustraliaEast.Name", "EAzureRegion::pfenum_AustraliaEast" },
				{ "pfenum_AustraliaSoutheast.Name", "EAzureRegion::pfenum_AustraliaSoutheast" },
				{ "pfenum_BrazilSouth.Name", "EAzureRegion::pfenum_BrazilSouth" },
				{ "pfenum_CentralIndia.Name", "EAzureRegion::pfenum_CentralIndia" },
				{ "pfenum_CentralUs.Name", "EAzureRegion::pfenum_CentralUs" },
				{ "pfenum_CentralUsEuap.Name", "EAzureRegion::pfenum_CentralUsEuap" },
				{ "pfenum_ChinaEast2.Name", "EAzureRegion::pfenum_ChinaEast2" },
				{ "pfenum_ChinaNorth2.Name", "EAzureRegion::pfenum_ChinaNorth2" },
				{ "pfenum_EastAsia.Name", "EAzureRegion::pfenum_EastAsia" },
				{ "pfenum_EastUs.Name", "EAzureRegion::pfenum_EastUs" },
				{ "pfenum_EastUs2.Name", "EAzureRegion::pfenum_EastUs2" },
				{ "pfenum_FranceCentral.Name", "EAzureRegion::pfenum_FranceCentral" },
				{ "pfenum_JapanEast.Name", "EAzureRegion::pfenum_JapanEast" },
				{ "pfenum_JapanWest.Name", "EAzureRegion::pfenum_JapanWest" },
				{ "pfenum_KoreaCentral.Name", "EAzureRegion::pfenum_KoreaCentral" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EAzureRegion::pfenum_MAX" },
				{ "pfenum_NorthCentralUs.Name", "EAzureRegion::pfenum_NorthCentralUs" },
				{ "pfenum_NorthEurope.Name", "EAzureRegion::pfenum_NorthEurope" },
				{ "pfenum_SouthAfricaNorth.Name", "EAzureRegion::pfenum_SouthAfricaNorth" },
				{ "pfenum_SouthCentralUs.Name", "EAzureRegion::pfenum_SouthCentralUs" },
				{ "pfenum_SoutheastAsia.Name", "EAzureRegion::pfenum_SoutheastAsia" },
				{ "pfenum_UaeNorth.Name", "EAzureRegion::pfenum_UaeNorth" },
				{ "pfenum_WestCentralUs.Name", "EAzureRegion::pfenum_WestCentralUs" },
				{ "pfenum_WestEurope.Name", "EAzureRegion::pfenum_WestEurope" },
				{ "pfenum_WestUs.Name", "EAzureRegion::pfenum_WestUs" },
				{ "pfenum_WestUs2.Name", "EAzureRegion::pfenum_WestUs2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EAzureRegion",
				"EAzureRegion",
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
