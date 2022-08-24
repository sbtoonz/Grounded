// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/ERegion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERegion() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_ERegion();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* ERegion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_ERegion, Z_Construct_UPackage__Script_PlayFab(), TEXT("ERegion"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<ERegion>()
	{
		return ERegion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERegion(ERegion_StaticEnum, TEXT("/Script/PlayFab"), TEXT("ERegion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_ERegion_Hash() { return 2067691101U; }
	UEnum* Z_Construct_UEnum_PlayFab_ERegion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERegion"), 0, Get_Z_Construct_UEnum_PlayFab_ERegion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERegion::pfenum_USCentral", (int64)ERegion::pfenum_USCentral },
				{ "ERegion::pfenum_USEast", (int64)ERegion::pfenum_USEast },
				{ "ERegion::pfenum_EUWest", (int64)ERegion::pfenum_EUWest },
				{ "ERegion::pfenum_Singapore", (int64)ERegion::pfenum_Singapore },
				{ "ERegion::pfenum_Japan", (int64)ERegion::pfenum_Japan },
				{ "ERegion::pfenum_Brazil", (int64)ERegion::pfenum_Brazil },
				{ "ERegion::pfenum_Australia", (int64)ERegion::pfenum_Australia },
				{ "ERegion::pfenum_MAX", (int64)ERegion::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERegion.h" },
				{ "pfenum_Australia.Name", "ERegion::pfenum_Australia" },
				{ "pfenum_Brazil.Name", "ERegion::pfenum_Brazil" },
				{ "pfenum_EUWest.Name", "ERegion::pfenum_EUWest" },
				{ "pfenum_Japan.Name", "ERegion::pfenum_Japan" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "ERegion::pfenum_MAX" },
				{ "pfenum_Singapore.Name", "ERegion::pfenum_Singapore" },
				{ "pfenum_USCentral.Name", "ERegion::pfenum_USCentral" },
				{ "pfenum_USEast.Name", "ERegion::pfenum_USEast" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"ERegion",
				"ERegion",
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
