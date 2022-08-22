#include "StaminaComponent.h"
#include "Net/UnrealNetwork.h"

void UStaminaComponent::Restore() {
}

void UStaminaComponent::OnStatusEffectChanged() {
}

void UStaminaComponent::OnRest(float RestDuration) {
}

void UStaminaComponent::OnRep_CurrentStamina(float PrevStamina) {
}

bool UStaminaComponent::IsStaminaCapped() const {
    return false;
}

bool UStaminaComponent::IsEmpty() const {
    return false;
}

float UStaminaComponent::GetStaminaRatio() const {
    return 0.0f;
}

float UStaminaComponent::GetMaxStaminaCapped() const {
    return 0.0f;
}

float UStaminaComponent::GetMaxStamina() const {
    return 0.0f;
}

float UStaminaComponent::GetEnergyRatio() const {
    return 0.0f;
}

float UStaminaComponent::GetCurrentStamina() const {
    return 0.0f;
}

void UStaminaComponent::ConsumeStamina(float AmountToConsume) {
}

bool UStaminaComponent::CanRegenerate() const {
    return false;
}

void UStaminaComponent::AddStamina(float AmountToAdd) {
}

void UStaminaComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStaminaComponent, CurrentStamina);
}

UStaminaComponent::UStaminaComponent() {
    this->CurrentStamina = 0.00f;
    this->MaxStamina = 100.00f;
    this->RegenDelay = 1.00f;
    this->RegenRate = 20.00f;
    this->ExhaustedStaminaDelay = 3.00f;
    this->bExhausted = false;
    this->StaminaToHungerRatio = 0.01f;
}

