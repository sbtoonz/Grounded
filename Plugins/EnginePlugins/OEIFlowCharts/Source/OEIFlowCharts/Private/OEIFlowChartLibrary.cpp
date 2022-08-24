#include "OEIFlowChartLibrary.h"

class USpeakerAsset;
class UConversationAsset;

FSpeakerReference UOEIFlowChartLibrary::MakeSpeakerReferenceWithAsset(USpeakerAsset* Asset) {
    return FSpeakerReference{};
}

FSpeakerReference UOEIFlowChartLibrary::MakeSpeakerReference(FGuid ID) {
    return FSpeakerReference{};
}

FQuestReference UOEIFlowChartLibrary::MakeQuestReference(FGuid ID) {
    return FQuestReference{};
}

FConversationReference UOEIFlowChartLibrary::MakeConversationReferenceWithAsset(UConversationAsset* Asset) {
    return FConversationReference{};
}

FConversationReference UOEIFlowChartLibrary::MakeConversationReference(FGuid ID) {
    return FConversationReference{};
}

FChatterEventReference UOEIFlowChartLibrary::MakeChatterEventReference(FGuid ID) {
    return FChatterEventReference{};
}

FGuid UOEIFlowChartLibrary::GetSpeakerID(const FSpeakerReference& Speaker) {
    return FGuid{};
}

FGuid UOEIFlowChartLibrary::GetQuestID(const FQuestReference& Quest) {
    return FGuid{};
}

FGuid UOEIFlowChartLibrary::GetConversationID(const FConversationReference& Conversation) {
    return FGuid{};
}

FGuid UOEIFlowChartLibrary::GetChatterEventID(const FChatterEventReference& ChatterEvent) {
    return FGuid{};
}

void UOEIFlowChartLibrary::ExecuteOnUpdateScript(const FConversationReference& Conversation, int32 NodeId, FGuid ScriptID) {
}

UOEIFlowChartLibrary::UOEIFlowChartLibrary() {
}

