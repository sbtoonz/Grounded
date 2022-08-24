#include "PowerStorageBuilding.h"
#include "Net/UnrealNetwork.h"



void APowerStorageBuilding::OnRep_PowerReservoir(const FPowerReservoir& OldValue) {
}






bool APowerStorageBuilding::IsPowerFull() const {
    return false;
}

bool APowerStorageBuilding::IsPowerEmpty() const {
    return false;
}


FPowerReservoir APowerStorageBuilding::GetPowerReservoir() const {
    return FPowerReservoir{};
}

float APowerStorageBuilding::GetCurrentPower() const {
    return 0.0f;
}

bool APowerStorageBuilding::ConsumeUnit(FGameplayTag& PreviousPowerType) {
    return false;
}

bool APowerStorageBuilding::AddCharges(const FGameplayTag& NewPowerType, int32 Charges) {
    return false;
}

void APowerStorageBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerStorageBuilding, PowerReservoir);
}

APowerStorageBuilding::APowerStorageBuilding() {
    this->PowerCapacity = 20.00f;
    this->ItemDepostAnimType = EInteractAnimType::Deposit;
    this->ItemChargeAnimType = EInteractAnimType::Scoop;
    this->ManualInteractAnimType = EInteractAnimType::None;
}

