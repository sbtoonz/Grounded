// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayFab/Public/EStatisticAggregationMethod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStatisticAggregationMethod() {}
// Cross Module References
	PLAYFAB_API UEnum* Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod();
	UPackage* Z_Construct_UPackage__Script_PlayFab();
// End Cross Module References
	static UEnum* EStatisticAggregationMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod, Z_Construct_UPackage__Script_PlayFab(), TEXT("EStatisticAggregationMethod"));
		}
		return Singleton;
	}
	template<> PLAYFAB_API UEnum* StaticEnum<EStatisticAggregationMethod>()
	{
		return EStatisticAggregationMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisticAggregationMethod(EStatisticAggregationMethod_StaticEnum, TEXT("/Script/PlayFab"), TEXT("EStatisticAggregationMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod_Hash() { return 1314078790U; }
	UEnum* Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlayFab();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisticAggregationMethod"), 0, Get_Z_Construct_UEnum_PlayFab_EStatisticAggregationMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisticAggregationMethod::pfenum_Last", (int64)EStatisticAggregationMethod::pfenum_Last },
				{ "EStatisticAggregationMethod::pfenum_Min", (int64)EStatisticAggregationMethod::pfenum_Min },
				{ "EStatisticAggregationMethod::pfenum_Max", (int64)EStatisticAggregationMethod::pfenum_Max },
				{ "EStatisticAggregationMethod::pfenum_Sum", (int64)EStatisticAggregationMethod::pfenum_Sum },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EStatisticAggregationMethod.h" },
				{ "pfenum_Last.Name", "EStatisticAggregationMethod::pfenum_Last" },
				{ "pfenum_Max.Name", "EStatisticAggregationMethod::pfenum_Max" },
				{ "pfenum_Min.Name", "EStatisticAggregationMethod::pfenum_Min" },
				{ "pfenum_Sum.Name", "EStatisticAggregationMethod::pfenum_Sum" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlayFab,
				nullptr,
				"EStatisticAggregationMethod",
				"EStatisticAggregationMethod",
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
