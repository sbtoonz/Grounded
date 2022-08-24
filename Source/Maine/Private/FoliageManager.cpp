#include "FoliageManager.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

AFoliageManager::AFoliageManager() {
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

