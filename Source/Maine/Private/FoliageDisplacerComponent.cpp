#include "FoliageDisplacerComponent.h"

UFoliageDisplacerComponent::UFoliageDisplacerComponent() {
    this->Radius = 400.00f;
    this->RegisterRadius = 400.00f;
    this->VelocityCompensationMultiplier = 1.00f;
    this->MaxVelocityCompensation = 0.00f;
    this->SpeedAudioSmoothingSpeed = 800.00f;
    this->EnergyAudioSmoothingSpeed = 8.00f;
    this->SwapLevel = EFoliageSwapLevel::Player;
}

