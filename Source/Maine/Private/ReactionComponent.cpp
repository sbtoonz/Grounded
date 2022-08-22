#include "ReactionComponent.h"
#include "Net/UnrealNetwork.h"

class AController;
class UBaseLODActor;
class ACharacter;

void UReactionComponent::OnRep_StunState(EStunState PrevStunState) {
}

void UReactionComponent::OnHit(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow) {
}

void UReactionComponent::OnHealthStateChanged(EHealthState NewHealthState) {
}

void UReactionComponent::OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

bool UReactionComponent::IsStunned() const {
    return false;
}

EStunState UReactionComponent::GetStunState() const {
    return EStunState::None;
}

float UReactionComponent::GetStunRatio() const {
    return 0.0f;
}

float UReactionComponent::GetStunDuration() const {
    return 0.0f;
}

float UReactionComponent::GetMaxStun() const {
    return 0.0f;
}

bool UReactionComponent::CanBeStunned() const {
    return false;
}

void UReactionComponent::BeginStun() {
}

void UReactionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UReactionComponent, CurrentStunValue);
    DOREPLIFETIME(UReactionComponent, StunState);
}

UReactionComponent::UReactionComponent() {
    this->CurrentStunValue = 0.00f;
    this->MaxStunValue = 0.00f;
    this->StunDecayRate = 0.00f;
    this->StunDuration = 0.00f;
    this->StunCooldown = 0.00f;
    this->bOnlyStunFromBlocks = false;
    this->bOnlyStunWhileFlying = false;
    this->bFlinchOnTakeDamageDuringStun = true;
    this->StunState = EStunState::None;
    this->StaggerThreshold = 5;
    this->FlinchAnim = NULL;
    this->StunAnim = NULL;
    this->StaggerAnim = NULL;
    this->Capture = NULL;
    this->StunEffect = NULL;
}

