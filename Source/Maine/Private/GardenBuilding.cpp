#include "GardenBuilding.h"
#include "Net/UnrealNetwork.h"

class UBaseLODActor;
class UItem;

void AGardenBuilding::TickProduction(float DeltaTime) {
}


void AGardenBuilding::OnSpawnedActorDestroyed(UBaseLODActor* LODActor) {
}

void AGardenBuilding::OnRep_RareSpawnList() {
}

void AGardenBuilding::OnRep_ProductionState() {
}

void AGardenBuilding::OnRep_ModifierItems() {
}

void AGardenBuilding::OnRep_CurrentRecipe() {
}

void AGardenBuilding::OnRep_CatalystItems() {
}

float AGardenBuilding::GetTimeRemaining() const {
    return 0.0f;
}

TArray<UItem*> AGardenBuilding::GetModifierItems() const {
    return TArray<UItem*>();
}

float AGardenBuilding::GetGardenModifier(EGardenModifierType ModifierType) const {
    return 0.0f;
}

EGardenState AGardenBuilding::GetCurrentState() const {
    return EGardenState::Idle;
}

TArray<UItem*> AGardenBuilding::GetCatalystItems() const {
    return TArray<UItem*>();
}

FGameplayTagContainer AGardenBuilding::GetAllItemTags() const {
    return FGameplayTagContainer{};
}

FDataTableRowHandle AGardenBuilding::FindRecipeForSelectedCatalyst() const {
    return FDataTableRowHandle{};
}

bool AGardenBuilding::CanAddItem(UItem* Item) const {
    return false;
}

float AGardenBuilding::CalculateRareSpawnChance() const {
    return 0.0f;
}

float AGardenBuilding::CalculateProductionDuration() const {
    return 0.0f;
}

bool AGardenBuilding::AreModifiersFull() const {
    return false;
}

bool AGardenBuilding::AreCatalystsFull() const {
    return false;
}

void AGardenBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGardenBuilding, GardenState);
    DOREPLIFETIME(AGardenBuilding, CatalystItems);
    DOREPLIFETIME(AGardenBuilding, ModifierItems);
    DOREPLIFETIME(AGardenBuilding, CurrentRecipe);
    DOREPLIFETIME(AGardenBuilding, Duration);
    DOREPLIFETIME(AGardenBuilding, CompletionTime);
    DOREPLIFETIME(AGardenBuilding, RareSpawnList);
}

AGardenBuilding::AGardenBuilding() {
    this->CatalystSlots = 1;
    this->ModifierSlots = 0;
    this->GardenState = EGardenState::Idle;
    this->Duration = 0.00f;
    this->CompletionTime = 0.00f;
    this->MinScale = 0.20f;
    this->MaxScale = 0.80f;
}

