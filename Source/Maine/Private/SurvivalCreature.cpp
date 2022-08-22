#include "SurvivalCreature.h"
#include "Net/UnrealNetwork.h"

class ASurvivalPlayerCharacter;
class UTamedCreatureData;
class UItem;

void ASurvivalCreature::TickDrown(float DeltaTime) {
}

void ASurvivalCreature::OnRep_TameData(UTamedCreatureData* OldData) {
}

bool ASurvivalCreature::IsTamingFood(const UItem* Item) const {
    return false;
}

bool ASurvivalCreature::IsInactivePet() const {
    return false;
}

bool ASurvivalCreature::IsActivePet() const {
    return false;
}

void ASurvivalCreature::HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState) {
}

FVector ASurvivalCreature::GetPetMasterLocation() const {
    return FVector{};
}

ASurvivalPlayerCharacter* ASurvivalCreature::GetPetMaster() const {
    return NULL;
}

FVector ASurvivalCreature::GetPetHomeLocation() const {
    return FVector{};
}

float ASurvivalCreature::GetPetHappinessNormalized() const {
    return 0.0f;
}

FString ASurvivalCreature::GetFoodsList() const {
    return TEXT("");
}

TArray<FDataTableRowHandle> ASurvivalCreature::GetActivePetPassiveEffects() const {
    return TArray<FDataTableRowHandle>();
}

void ASurvivalCreature::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASurvivalCreature, TameData);
}

ASurvivalCreature::ASurvivalCreature() {
    this->TameData = NULL;
    this->TamingChance = 1.00f;
    this->BeingPetAnim = NULL;
    this->PlayerPettingAnim = NULL;
    this->PlayerPettingAnimDead = NULL;
    this->OptimalPettingDistance = 130.00f;
    this->DrownTimer = 5.00f;
    this->WaveWeightClass = EWaveCreatureWeightClass::VeryLight;
}

