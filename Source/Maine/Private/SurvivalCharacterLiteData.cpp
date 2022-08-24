#include "SurvivalCharacterLiteData.h"

USurvivalCharacterLiteData::USurvivalCharacterLiteData() {
    this->ProxyStandInClass = NULL;
    this->bShouldActorLOD = false;
    this->MaxFullActorDistance = 0.00f;
    this->AverageDamage = 0.00f;
    this->WaveWeightClass = EWaveCreatureWeightClass::None;
    this->DefaultHalfHeight = 0.00f;
    this->MaxSwimSpeed = 0.00f;
    this->MaxFlySpeed = 0.00f;
    this->MaxWalkSpeed = 0.00f;
    this->bIsFlyer = false;
    this->bIsSwimmer = false;
    this->bHasAttacks = false;
    this->MaxPitch = 0.00f;
    this->InMotionWiggleAmplitude = 0.00f;
    this->IdleWiggleAmplitude = 0.00f;
    this->bHasController = false;
    this->bIsStationary = false;
    this->TetherRange = 0.00f;
    this->WanderRange = 0.00f;
    this->DefaultBehaviorType = EDefaultBehaviorType::Wander;
    this->ExploreMinAltitude = 0.00f;
    this->ExploreMaxAltitude = 0.00f;
    this->bHasInterestComponent = false;
}

