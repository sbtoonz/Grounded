// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EQuestType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEQuestType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EQuestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EQuestType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EQuestType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EQuestType>()
	{
		return EQuestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestType(EQuestType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EQuestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EQuestType_Hash() { return 2278037140U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EQuestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EQuestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestType::MajorStoryQuest", (int64)EQuestType::MajorStoryQuest },
				{ "EQuestType::MajorSideQuest", (int64)EQuestType::MajorSideQuest },
				{ "EQuestType::Task", (int64)EQuestType::Task },
				{ "EQuestType::MinorStoryQuest", (int64)EQuestType::MinorStoryQuest },
				{ "EQuestType::MinorSideQuest", (int64)EQuestType::MinorSideQuest },
				{ "EQuestType::MajorFaction", (int64)EQuestType::MajorFaction },
				{ "EQuestType::MinorFaction", (int64)EQuestType::MinorFaction },
				{ "EQuestType::Companion", (int64)EQuestType::Companion },
				{ "EQuestType::Count", (int64)EQuestType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Companion.Name", "EQuestType::Companion" },
				{ "Count.Name", "EQuestType::Count" },
				{ "MajorFaction.Name", "EQuestType::MajorFaction" },
				{ "MajorSideQuest.Name", "EQuestType::MajorSideQuest" },
				{ "MajorStoryQuest.Name", "EQuestType::MajorStoryQuest" },
				{ "MinorFaction.Name", "EQuestType::MinorFaction" },
				{ "MinorSideQuest.Name", "EQuestType::MinorSideQuest" },
				{ "MinorStoryQuest.Name", "EQuestType::MinorStoryQuest" },
				{ "ModuleRelativePath", "Public/EQuestType.h" },
				{ "Task.Name", "EQuestType::Task" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EQuestType",
				"EQuestType",
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
