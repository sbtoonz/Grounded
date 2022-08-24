#include "DefensePointBuilding.h"
#include "DefensePointComponent.h"

void ADefensePointBuilding::NativeOnDefensePointStateChanged(EDefensePointState CurrentState) {
}

void ADefensePointBuilding::NativeOnDefensePointComplete(bool bSuccess) {
}

void ADefensePointBuilding::NativeOnChargeValueChanged(float ChargeRatio) {
}

ADefensePointBuilding::ADefensePointBuilding() {
    this->DefensePointComponent = CreateDefaultSubobject<UDefensePointComponent>(TEXT("DefensePointComponent"));
    this->bCullVisualUpdating = false;
    this->bCameraShaking = false;
}

