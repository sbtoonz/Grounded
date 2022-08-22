#include "SurvivalComponent.h"
#include "Net/UnrealNetwork.h"

void USurvivalComponent::SetCurrentWater(float NewWaterLevel) {
}

void USurvivalComponent::SetCurrentSizzle(float NewSizzle) {
}

void USurvivalComponent::SetCurrentFood(float NewFoodLevel) {
}

void USurvivalComponent::SetCurrentBreath(float NewBreath) {
}

void USurvivalComponent::RestoreBreath(float BreathAmount) {
}

void USurvivalComponent::RestoreAll() {
}

void USurvivalComponent::Rest(float RestDuration) {
}

void USurvivalComponent::OnStatusEffectsChanged() {
}

void USurvivalComponent::OnRep_CurrentWater(float PrevWater) {
}

void USurvivalComponent::OnRep_CurrentFood(float PrevFood) {
}

void USurvivalComponent::OnGameModeChanged() {
}

bool USurvivalComponent::IsFullBreath() const {
    return false;
}

bool USurvivalComponent::IsFoodOrWaterEmpty() const {
    return false;
}

float USurvivalComponent::GetThirstRatio() const {
    return 0.0f;
}

float USurvivalComponent::GetHungerRatio() const {
    return 0.0f;
}

float USurvivalComponent::GetDeathSecondsTimerRatio() const {
    return 0.0f;
}

int32 USurvivalComponent::GetDeathSecondsLeft() const {
    return 0;
}

float USurvivalComponent::GetCurrentSizzleRatio() const {
    return 0.0f;
}

int32 USurvivalComponent::GetBreathSecondsLeft() const {
    return 0;
}

float USurvivalComponent::GetBreathRatio() const {
    return 0.0f;
}

int32 USurvivalComponent::GetBreathAlertTime() const {
    return 0;
}

float USurvivalComponent::GetBreathAdjustmentRate() const {
    return 0.0f;
}

bool USurvivalComponent::CanBreathe() const {
    return false;
}

void USurvivalComponent::AddWater(float WaterAmount) {
}

void USurvivalComponent::AddFood(float FoodAmount) {
}

void USurvivalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USurvivalComponent, CurrentFood);
    DOREPLIFETIME(USurvivalComponent, CurrentWater);
    DOREPLIFETIME(USurvivalComponent, CurrentBreath);
    DOREPLIFETIME(USurvivalComponent, DeathTimer);
}

USurvivalComponent::USurvivalComponent() {
    this->CurrentFood = 50.00f;
    this->CurrentWater = 50.00f;
    this->CurrentBreath = 100.00f;
    this->MinimumRestPercentage = 0.10f;
    this->RestRateMultiplier = 0.25f;
    this->bKillOnEmptyFoodOrWater = false;
    this->DeathDelayTime = 10.00f;
    this->DeathTimer = 0.00f;
    this->PassiveHungerEffect = NULL;
    this->PassiveThirstEffect = NULL;
    this->HungerDamageEffect = NULL;
    this->HungerBonusEffect = NULL;
    this->ThirstDamageEffect = NULL;
    this->ThirstBonusEffect = NULL;
    this->BreathDamageEffect = NULL;
}

