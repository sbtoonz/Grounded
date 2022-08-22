#include "BurgleQuestChipOptionActor.h"
#include "PersistenceComponent.h"
#include "ConditionalToggleComponent.h"

bool ABurgleQuestChipOptionActor::IsComplete() {
    return false;
}

FDataTableRowHandle ABurgleQuestChipOptionActor::GetChipItemType() const {
    return FDataTableRowHandle{};
}

ABurgleQuestChipOptionActor::ABurgleQuestChipOptionActor() {
    this->ChipItem = NULL;
    this->bHasInitializedChip = false;
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ConditionalToggleComponent = CreateDefaultSubobject<UConditionalToggleComponent>(TEXT("ConditionalToggleComponent"));
}

