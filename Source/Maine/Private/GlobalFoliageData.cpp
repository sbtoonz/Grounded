#include "GlobalFoliageData.h"

class UStaticMesh;

float UGlobalFoliageData::GetFoliagePlayerSwapDistanceFromMesh(const UStaticMesh* StaticMesh) const {
    return 0.0f;
}

float UGlobalFoliageData::GetFoliagePlayerSwapDistanceFromKey(const FFoliageKey& Key) const {
    return 0.0f;
}

EFoliageInstanceState UGlobalFoliageData::GetFoliageDefaultStateFromMesh(const UStaticMesh* StaticMesh) const {
    return EFoliageInstanceState::Added;
}

EFoliageInstanceState UGlobalFoliageData::GetFoliageDefaultStateFromKey(const FFoliageKey& Key) const {
    return EFoliageInstanceState::Added;
}

bool UGlobalFoliageData::GetFoliageAnimatesFromMesh(const UStaticMesh* StaticMesh) const {
    return false;
}

bool UGlobalFoliageData::GetFoliageAnimatesFromKey(const FFoliageKey& Key) const {
    return false;
}

UGlobalFoliageData::UGlobalFoliageData() {
    this->FoliageRustleFadeInTime = 0.20f;
    this->FoliageRustleFadeOutTime = 1.00f;
    this->FoliageRustleMinEnergy = 2.50f;
    this->InstanceIfNecessaryDistance = 1500.00f;
}

