#include "GlobalTamingData.h"

float UGlobalTamingData::HungerToHappiness(float Hunger) const {
    return 0.0f;
}

float UGlobalTamingData::HappinessToHunger(float Happiness) const {
    return 0.0f;
}

int32 UGlobalTamingData::GetHappinessStepIndexFromHunger(float Hunger) const {
    return 0;
}

int32 UGlobalTamingData::GetHappinessStepIndex(float Happiness) const {
    return 0;
}

FTamingHappinessStep UGlobalTamingData::GetHappinessStepData(float Happiness) const {
    return FTamingHappinessStep{};
}

UGlobalTamingData::UGlobalTamingData() {
    this->EquippedHappinessDecayMult = 0.75f;
}

