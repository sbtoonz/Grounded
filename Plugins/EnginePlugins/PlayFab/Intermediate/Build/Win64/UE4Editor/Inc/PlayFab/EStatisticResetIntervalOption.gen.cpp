// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EStatisticResetIntervalOption.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStatisticResetIntervalOption() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EStatisticResetIntervalOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticResetIntervalOption"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticResetIntervalOption>()
	{
		return EStatisticResetIntervalOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticResetIntervalOption(EStatisticResetIntervalOption_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticResetIntervalOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption_Hash() { return 3948182175U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticResetIntervalOption"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticResetIntervalOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticResetIntervalOption::pfenum_Never", (int64)EStatisticResetIntervalOption::pfenum_Never },
				{ "EStatisticResetIntervalOption::pfenum_Hour", (int64)EStatisticResetIntervalOption::pfenum_Hour },
				{ "EStatisticResetIntervalOption::pfenum_Day", (int64)EStatisticResetIntervalOption::pfenum_Day },
				{ "EStatisticResetIntervalOption::pfenum_Week", (int64)EStatisticResetIntervalOption::pfenum_Week },
				{ "EStatisticResetIntervalOption::pfenum_Month", (int64)EStatisticResetIntervalOption::pfenum_Month },
				{ "EStatisticResetIntervalOption::pfenum_MAX", (int64)EStatisticResetIntervalOption::pfenum_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EStatisticResetIntervalOption.h" },
				{ "pfenum_Day.Name", "EStatisticResetIntervalOption::pfenum_Day" },
				{ "pfenum_Hour.Name", "EStatisticResetIntervalOption::pfenum_Hour" },
				{ "pfenum_MAX.Hidden", "" },
				{ "pfenum_MAX.Name", "EStatisticResetIntervalOption::pfenum_MAX" },
				{ "pfenum_Month.Name", "EStatisticResetIntervalOption::pfenum_Month" },
				{ "pfenum_Never.Name", "EStatisticResetIntervalOption::pfenum_Never" },
				{ "pfenum_Week.Name", "EStatisticResetIntervalOption::pfenum_Week" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticResetIntervalOption",
				"EStatisticResetIntervalOption",
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
