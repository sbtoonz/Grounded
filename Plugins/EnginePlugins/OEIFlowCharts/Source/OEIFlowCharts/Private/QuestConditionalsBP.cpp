#include "QuestConditionalsBP.h"

bool UQuestConditionalsBP::IsQuestStateVisited(FGuid QuestID, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStateIrrelevant(FGuid QuestID, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStateActive(FGuid QuestID, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestStarted(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestMentioned(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestEndStateTriggered(FGuid QuestID, int32 EndStateID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestComplete(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::IsQuestAddendumTriggered(FGuid QuestID, int32 AddendumID, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestStateFailedOrIsIrrelevant(FGuid QuestID, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestStateFailed(FGuid QuestID, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

bool UQuestConditionalsBP::HasQuestFailed(FGuid QuestID, EBoolResult& OutResult) {
    return false;
}

UQuestConditionalsBP::UQuestConditionalsBP() {
}

