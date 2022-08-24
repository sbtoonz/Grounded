// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIFlowCharts/Public/EFlowChartNodeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFlowChartNodeType() {}
// Cross Module References
	OEIFLOWCHARTS_API UEnum* Z_Construct_UEnum_OEIFlowCharts_EFlowChartNodeType();
	UPackage* Z_Construct_UPackage__Script_OEIFlowCharts();
// End Cross Module References
	static UEnum* EFlowChartNodeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OEIFlowCharts_EFlowChartNodeType, Z_Construct_UPackage__Script_OEIFlowCharts(), TEXT("EFlowChartNodeType"));
		}
		return Singleton;
	}
	template<> OEIFLOWCHARTS_API UEnum* StaticEnum<EFlowChartNodeType>()
	{
		return EFlowChartNodeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowChartNodeType(EFlowChartNodeType_StaticEnum, TEXT("/Script/OEIFlowCharts"), TEXT("EFlowChartNodeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OEIFlowCharts_EFlowChartNodeType_Hash() { return 1931961351U; }
	UEnum* Z_Construct_UEnum_OEIFlowCharts_EFlowChartNodeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OEIFlowCharts();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowChartNodeType"), 0, Get_Z_Construct_UEnum_OEIFlowCharts_EFlowChartNodeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowChartNodeType::Talk", (int64)EFlowChartNodeType::Talk },
				{ "EFlowChartNodeType::PlayerResponse", (int64)EFlowChartNodeType::PlayerResponse },
				{ "EFlowChartNodeType::Script", (int64)EFlowChartNodeType::Script },
				{ "EFlowChartNodeType::Cinematic", (int64)EFlowChartNodeType::Cinematic },
				{ "EFlowChartNodeType::TriggerConversation", (int64)EFlowChartNodeType::TriggerConversation },
				{ "EFlowChartNodeType::Resume", (int64)EFlowChartNodeType::Resume },
				{ "EFlowChartNodeType::CheckpointBranch", (int64)EFlowChartNodeType::CheckpointBranch },
				{ "EFlowChartNodeType::Chatter", (int64)EFlowChartNodeType::Chatter },
				{ "EFlowChartNodeType::Bank", (int64)EFlowChartNodeType::Bank },
				{ "EFlowChartNodeType::Quest", (int64)EFlowChartNodeType::Quest },
				{ "EFlowChartNodeType::Objective", (int64)EFlowChartNodeType::Objective },
				{ "EFlowChartNodeType::EndState", (int64)EFlowChartNodeType::EndState },
				{ "EFlowChartNodeType::GlobalQuest", (int64)EFlowChartNodeType::GlobalQuest },
				{ "EFlowChartNodeType::BranchComplete", (int64)EFlowChartNodeType::BranchComplete },
				{ "EFlowChartNodeType::QuestBranch", (int64)EFlowChartNodeType::QuestBranch },
				{ "EFlowChartNodeType::ChatterEvent", (int64)EFlowChartNodeType::ChatterEvent },
				{ "EFlowChartNodeType::ChatterBranch", (int64)EFlowChartNodeType::ChatterBranch },
				{ "EFlowChartNodeType::SoundEffect", (int64)EFlowChartNodeType::SoundEffect },
				{ "EFlowChartNodeType::TalkObjective", (int64)EFlowChartNodeType::TalkObjective },
				{ "EFlowChartNodeType::GlobalVariableObjective", (int64)EFlowChartNodeType::GlobalVariableObjective },
				{ "EFlowChartNodeType::GenericObjective", (int64)EFlowChartNodeType::GenericObjective },
				{ "EFlowChartNodeType::KillObjective", (int64)EFlowChartNodeType::KillObjective },
				{ "EFlowChartNodeType::AcquireItemObjective", (int64)EFlowChartNodeType::AcquireItemObjective },
				{ "EFlowChartNodeType::BranchCompleteObjective", (int64)EFlowChartNodeType::BranchCompleteObjective },
				{ "EFlowChartNodeType::ResultSuccess", (int64)EFlowChartNodeType::ResultSuccess },
				{ "EFlowChartNodeType::ResultSuccessGlobalVariable", (int64)EFlowChartNodeType::ResultSuccessGlobalVariable },
				{ "EFlowChartNodeType::ResultFailedGlobalVariable", (int64)EFlowChartNodeType::ResultFailedGlobalVariable },
				{ "EFlowChartNodeType::ResultFailedObjectiveBank", (int64)EFlowChartNodeType::ResultFailedObjectiveBank },
				{ "EFlowChartNodeType::ResultFailedAcquireItem", (int64)EFlowChartNodeType::ResultFailedAcquireItem },
				{ "EFlowChartNodeType::ResultFailedKill", (int64)EFlowChartNodeType::ResultFailedKill },
				{ "EFlowChartNodeType::ResultFailedFactionChange", (int64)EFlowChartNodeType::ResultFailedFactionChange },
				{ "EFlowChartNodeType::ResultFailedBranch", (int64)EFlowChartNodeType::ResultFailedBranch },
				{ "EFlowChartNodeType::ObjectiveBank", (int64)EFlowChartNodeType::ObjectiveBank },
				{ "EFlowChartNodeType::GlobalQuestEvent", (int64)EFlowChartNodeType::GlobalQuestEvent },
				{ "EFlowChartNodeType::GlobalQuestEventGlobalVariable", (int64)EFlowChartNodeType::GlobalQuestEventGlobalVariable },
				{ "EFlowChartNodeType::GlobalQuestEventKill", (int64)EFlowChartNodeType::GlobalQuestEventKill },
				{ "EFlowChartNodeType::GlobalQuestEventFactionChange", (int64)EFlowChartNodeType::GlobalQuestEventFactionChange },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AcquireItemObjective.Name", "EFlowChartNodeType::AcquireItemObjective" },
				{ "Bank.Name", "EFlowChartNodeType::Bank" },
				{ "BranchComplete.Name", "EFlowChartNodeType::BranchComplete" },
				{ "BranchCompleteObjective.Name", "EFlowChartNodeType::BranchCompleteObjective" },
				{ "Chatter.Name", "EFlowChartNodeType::Chatter" },
				{ "ChatterBranch.Name", "EFlowChartNodeType::ChatterBranch" },
				{ "ChatterEvent.Name", "EFlowChartNodeType::ChatterEvent" },
				{ "CheckpointBranch.Name", "EFlowChartNodeType::CheckpointBranch" },
				{ "Cinematic.Name", "EFlowChartNodeType::Cinematic" },
				{ "EndState.Name", "EFlowChartNodeType::EndState" },
				{ "GenericObjective.Name", "EFlowChartNodeType::GenericObjective" },
				{ "GlobalQuest.Name", "EFlowChartNodeType::GlobalQuest" },
				{ "GlobalQuestEvent.Name", "EFlowChartNodeType::GlobalQuestEvent" },
				{ "GlobalQuestEventFactionChange.Name", "EFlowChartNodeType::GlobalQuestEventFactionChange" },
				{ "GlobalQuestEventGlobalVariable.Name", "EFlowChartNodeType::GlobalQuestEventGlobalVariable" },
				{ "GlobalQuestEventKill.Name", "EFlowChartNodeType::GlobalQuestEventKill" },
				{ "GlobalVariableObjective.Name", "EFlowChartNodeType::GlobalVariableObjective" },
				{ "KillObjective.Name", "EFlowChartNodeType::KillObjective" },
				{ "ModuleRelativePath", "Public/EFlowChartNodeType.h" },
				{ "Objective.Name", "EFlowChartNodeType::Objective" },
				{ "ObjectiveBank.Name", "EFlowChartNodeType::ObjectiveBank" },
				{ "PlayerResponse.Name", "EFlowChartNodeType::PlayerResponse" },
				{ "Quest.Name", "EFlowChartNodeType::Quest" },
				{ "QuestBranch.Name", "EFlowChartNodeType::QuestBranch" },
				{ "ResultFailedAcquireItem.Name", "EFlowChartNodeType::ResultFailedAcquireItem" },
				{ "ResultFailedBranch.Name", "EFlowChartNodeType::ResultFailedBranch" },
				{ "ResultFailedFactionChange.Name", "EFlowChartNodeType::ResultFailedFactionChange" },
				{ "ResultFailedGlobalVariable.Name", "EFlowChartNodeType::ResultFailedGlobalVariable" },
				{ "ResultFailedKill.Name", "EFlowChartNodeType::ResultFailedKill" },
				{ "ResultFailedObjectiveBank.Name", "EFlowChartNodeType::ResultFailedObjectiveBank" },
				{ "ResultSuccess.Name", "EFlowChartNodeType::ResultSuccess" },
				{ "ResultSuccessGlobalVariable.Name", "EFlowChartNodeType::ResultSuccessGlobalVariable" },
				{ "Resume.Name", "EFlowChartNodeType::Resume" },
				{ "Script.Name", "EFlowChartNodeType::Script" },
				{ "SoundEffect.Name", "EFlowChartNodeType::SoundEffect" },
				{ "Talk.Name", "EFlowChartNodeType::Talk" },
				{ "TalkObjective.Name", "EFlowChartNodeType::TalkObjective" },
				{ "TriggerConversation.Name", "EFlowChartNodeType::TriggerConversation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OEIFlowCharts,
				nullptr,
				"EFlowChartNodeType",
				"EFlowChartNodeType",
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
