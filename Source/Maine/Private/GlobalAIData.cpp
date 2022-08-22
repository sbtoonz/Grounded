#include "GlobalAIData.h"

UGlobalAIData::UGlobalAIData() {
    this->StaticObstacleTargetLocationQuery = NULL;
    this->DefaultBlackboard = NULL;
    this->FootstepNoiseCooldown = 1.00f;
    this->NoiseExpirationTime = 10.00f;
    this->NearPartyDistance = 3000.00f;
    this->SenseThreatDecayTime = 5.00f;
    this->CombatThreatDecayTime = 12.00f;
    this->TargetAggressionDecayTime = 5.00f;
    this->ThreatDecayPerSecond = 1.00f;
    this->MaxTokens = 2;
    this->MaxBuildingTokens = 2;
    this->BuildingTokenCooldownModifier = 1.00f;
}

