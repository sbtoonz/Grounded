#include "EventAttackComponent.h"

class UBaseLODActor;
class AController;
class UAttack;

void UEventAttackComponent::ResetValues() {
}

void UEventAttackComponent::OnDamagedCharacter(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UEventAttackComponent::OnAttack(UAttack* Attack) {
}

void UEventAttackComponent::EndAttack(UAttack* Attack) {
}

void UEventAttackComponent::ApplyEffects() {
}

UEventAttackComponent::UEventAttackComponent() {
    this->DamageEventType = EDamageEventComponentType::ColliderConfigDamageTaken;
    this->HealthToLoseForApplyingEffect = 1.00f;
}

