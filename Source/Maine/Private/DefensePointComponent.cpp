#include "DefensePointComponent.h"
#include "Net/UnrealNetwork.h"

class UHealthComponent;
class AActor;
class UPrimitiveComponent;
class ABuilding;

void UDefensePointComponent::OnRep_CurrentState(EDefensePointState PreviousState) {
}

void UDefensePointComponent::OnRep_CurrentCharge() {
}

void UDefensePointComponent::OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator) {
}

void UDefensePointComponent::OnEncounterSpawnKilled() {
}

void UDefensePointComponent::OnEncounterSpawnDestroyed() {
}

void UDefensePointComponent::OnEncounterComplete(AActor* DamageSource) {
}

void UDefensePointComponent::OnDefensePointHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}


void UDefensePointComponent::OnAttackAreaOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


bool UDefensePointComponent::IsDefensePointValid(ABuilding* TargetBuilding) {
    return false;
}

float UDefensePointComponent::GetEnemyProgress() const {
    return 0.0f;
}

EDefensePointState UDefensePointComponent::GetDefensePointState() const {
    return EDefensePointState::Ready;
}

TArray<FDefensePointTarget> UDefensePointComponent::GetDefensePoints() const {
    return TArray<FDefensePointTarget>();
}

float UDefensePointComponent::GetChargeRatio() const {
    return 0.0f;
}

void UDefensePointComponent::DeactivateEncounter() {
}

bool UDefensePointComponent::ActivateEncounter(AActor* Instigator) {
    return false;
}

void UDefensePointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDefensePointComponent, CurrentCharge);
    DOREPLIFETIME(UDefensePointComponent, CurrentState);
    DOREPLIFETIME(UDefensePointComponent, TotalActiveCreatures);
    DOREPLIFETIME(UDefensePointComponent, CurrentActiveCreatures);
    DOREPLIFETIME(UDefensePointComponent, bPassesConditionals);
}

UDefensePointComponent::UDefensePointComponent() {
    this->bQuestCritical = false;
    this->DeinstanceRadius = 10000.00f;
    this->ChargeFailType = EDefensePointChargeFailType::AllFail;
    this->ChargeInterval = 5.00f;
    this->ChargePerTarget = 5.00f;
    this->MaxCharge = 600.00f;
    this->CurrentCharge = 0.00f;
    this->OverrideMusicTrackMild = NULL;
    this->OverrideMusicTrackIntense = NULL;
    this->UnderAttackChatterDelay = 3.00f;
    this->CurrentState = EDefensePointState::Ready;
    this->TotalActiveCreatures = 0;
    this->CurrentActiveCreatures = 0;
    this->bPassesConditionals = false;
    this->TriggerUnderAttackHUDMarkers = false;
    this->HUDMarkerCooldown = 20.00f;
}

