#include "ConversationConditionalsBP.h"

bool UConversationConditionalsBP::IsSpeakerDead(FGuid Speaker, EBoolResult& OutResult) {
    return false;
}

bool UConversationConditionalsBP::IsInstanceDead(FGuid Instance, EBoolResult& OutResult) {
    return false;
}

bool UConversationConditionalsBP::HasConversationNodeBeenVisited(FGuid ConversationId, int32 NodeId, EBoolResult& OutResult) {
    return false;
}

UConversationConditionalsBP::UConversationConditionalsBP() {
}

