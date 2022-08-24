#pragma once
#include "CoreMinimal.h"
#include "EFlowChartNodeType.generated.h"

UENUM()
enum class EFlowChartNodeType : uint8 {
    Talk,
    PlayerResponse,
    Script,
    Cinematic,
    TriggerConversation,
    Resume,
    CheckpointBranch,
    Chatter,
    Bank,
    Quest,
    Objective,
    EndState,
    GlobalQuest,
    BranchComplete,
    QuestBranch,
    ChatterEvent,
    ChatterBranch,
    SoundEffect,
    TalkObjective,
    GlobalVariableObjective,
    GenericObjective,
    KillObjective,
    AcquireItemObjective,
    BranchCompleteObjective,
    ResultSuccess,
    ResultSuccessGlobalVariable,
    ResultFailedGlobalVariable,
    ResultFailedObjectiveBank,
    ResultFailedAcquireItem,
    ResultFailedKill,
    ResultFailedFactionChange,
    ResultFailedBranch,
    ObjectiveBank,
    GlobalQuestEvent,
    GlobalQuestEventGlobalVariable,
    GlobalQuestEventKill,
    GlobalQuestEventFactionChange,
};
