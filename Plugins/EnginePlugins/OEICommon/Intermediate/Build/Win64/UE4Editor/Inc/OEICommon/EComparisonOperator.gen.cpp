// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEICommon/Public/EComparisonOperator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEComparisonOperator() {}
// Cross Module References
	OEICOMMON_API UEnum* Z_Construct_UEnum_OEICommon_EComparisonOperator();
	UPackage* Z_Construct_UPackage__Script_OEICommon();
// End Cross Module References
	static UEnum* EComparisonOperator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEICommon_EComparisonOperator, Z_Construct_UPackage__Script_OEICommon(), TEXT("EComparisonOperator"));
		}
		return Singleton;
	}
	template<> OEICOMMON_API UEnum* StaticEnum<EComparisonOperator>()
	{
		return EComparisonOperator_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EComparisonOperator(EComparisonOperator_StaticEnum, TEXT("/Script/OEICommon"), TEXT("EComparisonOperator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEICommon_EComparisonOperator_Hash() { return 2626894244U; }
	UEnum* Z_Construct_UEnum_OEICommon_EComparisonOperator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEICommon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EComparisonOperator"), 0, Get_Z_Construct_UEnum_OEICommon_EComparisonOperator_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EComparisonOperator::Equals", (int64)EComparisonOperator::Equals },
				{ "EComparisonOperator::NotEqual", (int64)EComparisonOperator::NotEqual },
				{ "EComparisonOperator::GreaterThan", (int64)EComparisonOperator::GreaterThan },
				{ "EComparisonOperator::LessThan", (int64)EComparisonOperator::LessThan },
				{ "EComparisonOperator::GreaterThanOrEquals", (int64)EComparisonOperator::GreaterThanOrEquals },
				{ "EComparisonOperator::LessThanOrEquals", (int64)EComparisonOperator::LessThanOrEquals },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equals.Name", "EComparisonOperator::Equals" },
				{ "GreaterThan.Name", "EComparisonOperator::GreaterThan" },
				{ "GreaterThanOrEquals.Name", "EComparisonOperator::GreaterThanOrEquals" },
				{ "LessThan.Name", "EComparisonOperator::LessThan" },
				{ "LessThanOrEquals.Name", "EComparisonOperator::LessThanOrEquals" },
				{ "ModuleRelativePath", "Public/EComparisonOperator.h" },
				{ "NotEqual.Name", "EComparisonOperator::NotEqual" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEICommon,
				nullptr,
				"EComparisonOperator",
				"EComparisonOperator",
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
