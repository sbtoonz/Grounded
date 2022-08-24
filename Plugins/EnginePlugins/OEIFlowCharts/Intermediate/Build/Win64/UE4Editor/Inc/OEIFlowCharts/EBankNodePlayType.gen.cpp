// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EBankNodePlayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBankNodePlayType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EBankNodePlayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EBankNodePlayType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EBankNodePlayType>()
	{
		return EBankNodePlayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBankNodePlayType(EBankNodePlayType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EBankNodePlayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType_Hash() { return 1300099318U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBankNodePlayType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EBankNodePlayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBankNodePlayType::PlayFirst", (int64)EBankNodePlayType::PlayFirst },
				{ "EBankNodePlayType::PlayAll", (int64)EBankNodePlayType::PlayAll },
				{ "EBankNodePlayType::PlayRandom", (int64)EBankNodePlayType::PlayRandom },
				{ "EBankNodePlayType::CycleRandom", (int64)EBankNodePlayType::CycleRandom },
				{ "EBankNodePlayType::VoicedResponse", (int64)EBankNodePlayType::VoicedResponse },
				{ "EBankNodePlayType::ObjectiveBank", (int64)EBankNodePlayType::ObjectiveBank },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CycleRandom.Name", "EBankNodePlayType::CycleRandom" },
				{ "ModuleRelativePath", "Public/EBankNodePlayType.h" },
				{ "ObjectiveBank.Name", "EBankNodePlayType::ObjectiveBank" },
				{ "PlayAll.Name", "EBankNodePlayType::PlayAll" },
				{ "PlayFirst.Name", "EBankNodePlayType::PlayFirst" },
				{ "PlayRandom.Name", "EBankNodePlayType::PlayRandom" },
				{ "VoicedResponse.Name", "EBankNodePlayType::VoicedResponse" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EBankNodePlayType",
				"EBankNodePlayType",
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
