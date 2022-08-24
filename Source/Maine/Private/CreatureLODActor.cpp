#include "CreatureLODActor.h"

class UTamedCreatureData;

bool UCreatureLODActor::IsTame() const {
    return false;
}

void UCreatureLODActor::HandleTameStateChanged(UTamedCreatureData* Sender, ETamedState NewState) {
}

void UCreatureLODActor::HandleSelfDeath(const FDamageInfo& DamageInfo) {
}

ETamedState UCreatureLODActor::GetTamedState() const {
    return ETamedState::None;
}

UTamedCreatureData* UCreatureLODActor::GetTamedCreatureData() const {
    return NULL;
}

float UCreatureLODActor::GetHappinessNormalized() const {
    return 0.0f;
}

TArray<FDataTableRowHandle> UCreatureLODActor::GetActivePetPassiveEffects() const {
    return TArray<FDataTableRowHandle>();
}

UCreatureLODActor::UCreatureLODActor() {
}

