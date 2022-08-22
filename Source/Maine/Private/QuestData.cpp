#include "QuestData.h"

FQuestData::FQuestData() {
    this->QuestStartConversationDelay = 0.00f;
    this->QuestCompleteConversationDelay = 0.00f;
    this->DisabledForPackageFlags = 0;
    this->OnlyValidInDevelopmentContent = false;
    this->IsLocalClientQuest = false;
    this->StartsAsStickied = false;
    this->Tutorial = false;
    this->IsCritPathQuest = false;
    this->AutoSaveOnComplete = false;
    this->IsCut = false;
}

