#include "ConversationNavigatorState.h"

FConversationNavigatorState::FConversationNavigatorState() {
    this->CurrentNodeID = 0;
    this->PlayerPawn = NULL;
    this->PlayerState = NULL;
    this->bDisplayNode = false;
    this->bCanContinue = false;
    this->bAllowContinue = false;
}

