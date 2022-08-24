// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EQuestEventType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuestEventType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestEventType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EQuestEventType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EQuestEventType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EQuestEventType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestEventType>()
	{
		return EQuestEventType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestEventType(EQuestEventType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EQuestEventType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EQuestEventType_Hash() { return 1065190810U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestEventType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestEventType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EQuestEventType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestEventType::Talk", (int64)EQuestEventType::Talk },
				{ "EQuestEventType::Kill", (int64)EQuestEventType::Kill },
				{ "EQuestEventType::Location", (int64)EQuestEventType::Location },
				{ "EQuestEventType::AcquireItem", (int64)EQuestEventType::AcquireItem },
				{ "EQuestEventType::Interact", (int64)EQuestEventType::Interact },
				{ "EQuestEventType::GlobalVariable", (int64)EQuestEventType::GlobalVariable },
				{ "EQuestEventType::Inspect", (int64)EQuestEventType::Inspect },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcquireItem.Name", "EQuestEventType::AcquireItem" },
				{ "GlobalVariable.Name", "EQuestEventType::GlobalVariable" },
				{ "Inspect.Name", "EQuestEventType::Inspect" },
				{ "Interact.Name", "EQuestEventType::Interact" },
				{ "Kill.Name", "EQuestEventType::Kill" },
				{ "Location.Name", "EQuestEventType::Location" },
				{ "ModuleRelativePath", "Public/EQuestEventType.h" },
				{ "Talk.Name", "EQuestEventType::Talk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EQuestEventType",
				"EQuestEventType",
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
