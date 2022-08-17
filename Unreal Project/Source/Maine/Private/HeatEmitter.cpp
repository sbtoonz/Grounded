#include "HeatEmitter.h"

FHeatEmitter::FHeatEmitter() {
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->UseActorForwardScaling = false;
    this->FOVAngleBeforeFallOff = 0.00f;
    this->EmissionMaxRadius = 0.00f;
    this->EmissionMaxStrength = 0.00f;
    this->EmitterDamageMultiplier = 0.00f;
}

