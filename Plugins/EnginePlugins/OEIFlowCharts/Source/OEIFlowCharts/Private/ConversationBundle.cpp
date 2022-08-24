#include "ConversationBundle.h"

FConversationBundle::FConversationBundle() {
    this->ConversationType = EConversationType::Conversation;
    this->bHasCheckpoints = false;
    this->ResumeNodeID = 0;
}

