#include "VitalStat.h"

class UInterestCore;

float UVitalStat::GetDecayRate(UInterestCore* Core, float DeltaHours) const {
    return 0.0f;
}

float UVitalStat::GetDamageResponse(float Damage, const FDamageInfo& DamageInfo) const {
    return 0.0f;
}

float UVitalStat::GenerateStartingValue(UInterestCore* Core) const {
    return 0.0f;
}

UVitalStat::UVitalStat() {
    this->ValueCurve = NULL;
    this->StartingRangeEnabled = 1;
}

