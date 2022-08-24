#include "GlobalCombatData.h"

UGlobalCombatData::UGlobalCombatData() {
    this->DefaultAttackTraceRadius = 50.00f;
    this->OutOfStaminaBlockStunMultiplier = 2.00f;
    this->OutOfStaminaBlockMultiplier = 1.00f;
    this->GenericDamageType = NULL;
    this->HungerDamageType = NULL;
    this->ThirstDamageType = NULL;
    this->BadFoodDamageType = NULL;
    this->EnvironmentalDamageType = NULL;
    this->MinimumDamageReduction = 0.00f;
    this->MinimumDamageReductionDecreasePerEquipmentLevel = 0.50f;
    this->CriticalHitMultiplier = 2.00f;
    this->ThrowingStaminaCost = 20.00f;
    this->ThrowingDurabilityCost = 20.00f;
    this->ThrowingForce = 0.00f;
    this->ThrowingRotationalForce = 0.00f;
    this->ItemVelocityThresholdForDamage = 0.00f;
    this->ItemVelocityThresholdForSound = 0.00f;
    this->HitMarkerSound = NULL;
    this->CriticalHitEffect = NULL;
    this->CombatRegenDelay = 5.00f;
    this->CombatRegenTickPercentage = 1.00f;
    this->CombatRegenTickRate = 1.00f;
}

