#include "DefensePointManager.h"
#include "DefensePointComponent.h"
#include "PersistenceComponent.h"
#include "ObsidianIDComponent.h"

void ADefensePointManager::NativeOnDefensePointStateChanged(EDefensePointState CurrentState) {
}

void ADefensePointManager::NativeOnDefensePointComplete(bool bSuccess) {
}

void ADefensePointManager::NativeOnChargeValueChanged(float ChargeRatio) {
}

bool ADefensePointManager::DefensePointDebugActive() {
    return false;
}

ADefensePointManager::ADefensePointManager() {
    this->DefensePointComponent = CreateDefaultSubobject<UDefensePointComponent>(TEXT("DefensePointComponent"));
    this->PersistenceComponent = CreateDefaultSubobject<UPersistenceComponent>(TEXT("PersistenceComponent"));
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}

