#include "BurrowComponent.h"
#include "Net/UnrealNetwork.h"

class AController;
class ASurvivalCharacter;
class UBaseLODActor;

void UBurrowComponent::UnBurrow() {
}

void UBurrowComponent::OnRep_BurrowState() {
}

void UBurrowComponent::OnDeath(const FDamageInfo& DamageInfo) {
}

void UBurrowComponent::OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UBurrowComponent::OnCombatChange(ASurvivalCharacter* Character, bool InCombat) {
}

bool UBurrowComponent::IsBurrowed() const {
    return false;
}

EBurrowState UBurrowComponent::GetBurrowState() const {
    return EBurrowState::None;
}

void UBurrowComponent::Burrow() {
}

void UBurrowComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBurrowComponent, BurrowState);
}

UBurrowComponent::UBurrowComponent() {
    this->BurrowCooldown = 0.00f;
    this->BurrowTime = 1.00f;
    this->UnburrowTime = 1.00f;
    this->bDisableWhileUnburrowed = false;
    this->bCombatTogglesBurrow = true;
    this->bClearThreatOnBurrow = true;
    this->bBurrowAtBeginPlay = true;
    this->bHasBurrowedTimeToStop = false;
    this->BurrowedTimeToStop = 60.00f;
    this->bDestroyAfterBurrowing = false;
    this->bCheckMaterialWhenBurrowing = true;
    this->BurrowState = EBurrowState::None;
}

