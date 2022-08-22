#include "ItemPowerData.h"

FItemPowerData::FItemPowerData() {
    this->UsesPower = false;
    this->AlwaysOn = false;
    this->bConsumesPowerDuringRest = false;
    this->bCanBeUsedInWater = false;
    this->TotalPowerTimeInHours = 0.00f;
    this->TotalCharges = 0.00f;
    this->ChargingAnimType = EInteractAnimType::None;
}

