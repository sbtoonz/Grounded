#include "DialogueNode.h"

FDialogueNode::FDialogueNode() {
    this->bNotSkippable = false;
    this->bIsQuestionNode = false;
    this->bHideSpeaker = false;
    this->PlayType = ENodePlayType::Normal;
    this->Persistence = EPersistenceType::None;
    this->NoPlayRandomWeight = 0;
    this->DisplayType = ENodeDisplayType::Hidden;
}

