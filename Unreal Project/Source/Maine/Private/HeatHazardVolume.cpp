#include "HeatHazardVolume.h"

class UHeatHazardComponent;

FDamageData AHeatHazardVolume::GetDamageData() const {
    return FDamageData{};
}

float AHeatHazardVolume::EvaluateHeatHazard_Implementation(UHeatHazardComponent* HazardComponent) {
    return 0.0f;
}

AHeatHazardVolume::AHeatHazardVolume() {
    this->HazardStartTime = 8.00f;
    this->HazardEndTime = 17.00f;
}

