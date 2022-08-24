#include "TamedCreatureData.h"
#include "Net/UnrealNetwork.h"

void UTamedCreatureData::SetTameState(ETamedState State) {
}

void UTamedCreatureData::OnRep_TameState() {
}

void UTamedCreatureData::OnRep_PetMaster() {
}

void UTamedCreatureData::HandleMasterKilled(const FDamageInfo& DamageInfo) {
}

ETamedState UTamedCreatureData::GetTameState() const {
    return ETamedState::None;
}

int32 UTamedCreatureData::GetDaysAsPet() const {
    return 0;
}

void UTamedCreatureData::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTamedCreatureData, PetHome);
    DOREPLIFETIME(UTamedCreatureData, PetName);
    DOREPLIFETIME(UTamedCreatureData, HourTamed);
    DOREPLIFETIME(UTamedCreatureData, TimesPetted);
    DOREPLIFETIME(UTamedCreatureData, RawHappinessValue);
    DOREPLIFETIME(UTamedCreatureData, Personality);
    DOREPLIFETIME(UTamedCreatureData, PetMaster);
    DOREPLIFETIME(UTamedCreatureData, TameState);
}

UTamedCreatureData::UTamedCreatureData() {
    this->HourTamed = 0.00f;
    this->TimesPetted = 0;
    this->RawHappinessValue = 0.00f;
    this->TameState = ETamedState::None;
}

