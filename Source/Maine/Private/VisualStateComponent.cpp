#include "VisualStateComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponent;
class AController;
class UBaseLODActor;
class UStaticMesh;

void UVisualStateComponent::SetCustomVisualState(FGameplayTag CustomVisualState) {
}

void UVisualStateComponent::SetActiveMeshTag(FGameplayTag NewActiveTag) {
}

void UVisualStateComponent::ResetActiveMeshTag() {
}

void UVisualStateComponent::OnRep_HitLocations() {
}

void UVisualStateComponent::OnRep_HealthState(EHealthVisualState OldHealthState) {
}

void UVisualStateComponent::OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UVisualStateComponent::OnHealthChange(UHealthComponent* SourceHealthComponent, float CurrentHealth, float OldHealth) {
}

bool UVisualStateComponent::HasMeshTag(const FGameplayTag& Tag) const {
    return false;
}

UStaticMesh* UVisualStateComponent::GetMesh(EHealthVisualState NewHealthState, const FGameplayTag& MeshTag) const {
    return NULL;
}

void UVisualStateComponent::ClearCustomVisualState(FGameplayTag CustomVisualState) {
}

void UVisualStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVisualStateComponent, HitLocations);
    DOREPLIFETIME(UVisualStateComponent, HealthState);
}

UVisualStateComponent::UVisualStateComponent() {
    this->bStartActive = true;
    this->bDamageStateEffects = false;
    this->DamageMaxLODLevel = 0;
    this->HealthState = EHealthVisualState::Pristine;
    this->HealthComponent = NULL;
    this->MeshComponent = NULL;
}

