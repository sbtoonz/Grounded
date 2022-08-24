#include "BurgleQuestOptionActor.h"
#include "ObsidianIDComponent.h"

class UBurgleQuestInstance;

void ABurgleQuestOptionActor::ReleaseByQuest(UBurgleQuestInstance* Quest) {
}

void ABurgleQuestOptionActor::OnStartQuest_Implementation() {
}

void ABurgleQuestOptionActor::OnEndQuest_Implementation() {
}

void ABurgleQuestOptionActor::NotifyStartQuest() {
}

void ABurgleQuestOptionActor::NotifyEndQuest(bool bCompleted) {
}

bool ABurgleQuestOptionActor::IsAvailable() const {
    return false;
}

UObsidianIDComponent* ABurgleQuestOptionActor::GetObsidianID() const {
    return NULL;
}

FGuid ABurgleQuestOptionActor::GetGuid() const {
    return FGuid{};
}

void ABurgleQuestOptionActor::ClaimByQuest(UBurgleQuestInstance* Quest) {
}

ABurgleQuestOptionActor::ABurgleQuestOptionActor() {
    this->RewardTier = 1;
    this->bAllowRepeat = false;
    this->IdComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

