// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/ENodePlayType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeENodePlayType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_ENodePlayType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* ENodePlayType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_ENodePlayType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("ENodePlayType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<ENodePlayType>()
	{
		return ENodePlayType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENodePlayType(ENodePlayType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("ENodePlayType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_ENodePlayType_Hash() { return 3174211452U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_ENodePlayType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENodePlayType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_ENodePlayType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENodePlayType::Normal", (int64)ENodePlayType::Normal },
				{ "ENodePlayType::Random", (int64)ENodePlayType::Random },
				{ "ENodePlayType::CycleLoop", (int64)ENodePlayType::CycleLoop },
				{ "ENodePlayType::CycleStop", (int64)ENodePlayType::CycleStop },
				{ "ENodePlayType::CycleRandom", (int64)ENodePlayType::CycleRandom },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CycleLoop.Name", "ENodePlayType::CycleLoop" },
				{ "CycleRandom.Name", "ENodePlayType::CycleRandom" },
				{ "CycleStop.Name", "ENodePlayType::CycleStop" },
				{ "ModuleRelativePath", "Public/ENodePlayType.h" },
				{ "Normal.Name", "ENodePlayType::Normal" },
				{ "Random.Name", "ENodePlayType::Random" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"ENodePlayType",
				"ENodePlayType",
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
