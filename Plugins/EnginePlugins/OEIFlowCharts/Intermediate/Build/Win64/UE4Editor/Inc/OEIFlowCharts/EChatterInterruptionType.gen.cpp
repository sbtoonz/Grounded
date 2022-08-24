// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EChatterInterruptionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChatterInterruptionType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EChatterInterruptionType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EChatterInterruptionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EChatterInterruptionType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EChatterInterruptionType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EChatterInterruptionType>()
	{
		return EChatterInterruptionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChatterInterruptionType(EChatterInterruptionType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EChatterInterruptionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EChatterInterruptionType_Hash() { return 3452236499U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EChatterInterruptionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChatterInterruptionType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EChatterInterruptionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChatterInterruptionType::Interrupt", (int64)EChatterInterruptionType::Interrupt },
				{ "EChatterInterruptionType::PlaySimultaneously", (int64)EChatterInterruptionType::PlaySimultaneously },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Interrupt.Name", "EChatterInterruptionType::Interrupt" },
				{ "ModuleRelativePath", "Public/EChatterInterruptionType.h" },
				{ "PlaySimultaneously.Name", "EChatterInterruptionType::PlaySimultaneously" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EChatterInterruptionType",
				"EChatterInterruptionType",
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
