// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EQuestResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuestResult() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestResult();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EQuestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EQuestResult, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EQuestResult"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestResult>()
	{
		return EQuestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestResult(EQuestResult_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EQuestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EQuestResult_Hash() { return 2252037752U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestResult"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EQuestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestResult::Success", (int64)EQuestResult::Success },
				{ "EQuestResult::Failed", (int64)EQuestResult::Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Failed.Name", "EQuestResult::Failed" },
				{ "ModuleRelativePath", "Public/EQuestResult.h" },
				{ "Success.Name", "EQuestResult::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EQuestResult",
				"EQuestResult",
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
