#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class UStatusEffect;
class UAuraReceiverComponent;
class ASurvivalCharacter;
class UObject;
class UBaseLODActor;
class AController;
class USurvivalGameInstance;
class UGoapAction;

void UHealthComponent::ToggleShowHealthDebug() {
}

bool UHealthComponent::ShowDamageInteractUI() const {
    return false;
}

void UHealthComponent::SetCurrentHealth(float DesiredHealth) {
}

void UHealthComponent::SetCurrentDamage(float DesiredDamage) {
}

void UHealthComponent::ServerKill_Implementation() {
}
bool UHealthComponent::ServerKill_Validate() {
    return true;
}

void UHealthComponent::Revive(AActor* InReviver) {
}

void UHealthComponent::Restore() {
}

void UHealthComponent::OnStatusEffectChanged(AActor* Owner, UStatusEffect* StatusEffect) {
}

void UHealthComponent::OnRest(float RestDuration) {
}

void UHealthComponent::OnRep_Reviver() {
}

void UHealthComponent::OnRep_HealthState(EHealthState PrevHealthState) {
}

void UHealthComponent::OnRep_CurrentFragilityLevel() {
}

void UHealthComponent::OnRep_CurrentDamage(float PrevDamage) {
}

void UHealthComponent::OnPlayerScalingCountChanged(UAuraReceiverComponent* Sender, int32 AuraCount) {
}

void UHealthComponent::OnCombatChanged(ASurvivalCharacter* Character, bool bInCombat) {
}

void UHealthComponent::MulticastHandleEffects_Implementation(FVector HitLocation, float Damage, const FDamageInfo& DamageInfo, EPlayEffectType PlayEffectType) {
}

void UHealthComponent::Kill() {
}

bool UHealthComponent::IsReviving() const {
    return false;
}

bool UHealthComponent::IsKnockedOut() const {
    return false;
}

bool UHealthComponent::IsIncapacitated() const {
    return false;
}

bool UHealthComponent::IsFragile() const {
    return false;
}

bool UHealthComponent::IsDead() const {
    return false;
}

bool UHealthComponent::IsDamaged() const {
    return false;
}

void UHealthComponent::Incapacitate() {
}

void UHealthComponent::HandleOutOfCombatRegen() {
}

void UHealthComponent::HandleDecay() {
}

float UHealthComponent::GetReviveTimeRatio() const {
    return 0.0f;
}

float UHealthComponent::GetReviveTime() const {
    return 0.0f;
}

int32 UHealthComponent::GetRequiredDamageTypeFlags() const {
    return 0;
}

uint8 UHealthComponent::GetRequiredDamageTier() const {
    return 0;
}

float UHealthComponent::GetMaxHits() const {
    return 0.0f;
}

float UHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

float UHealthComponent::GetInverseHealthRatio() const {
    return 0.0f;
}

float UHealthComponent::GetIncapacitatedTimeRatio() const {
    return 0.0f;
}

EHealthState UHealthComponent::GetHealthState() const {
    return EHealthState::Alive;
}

float UHealthComponent::GetHealthRatio() const {
    return 0.0f;
}

float UHealthComponent::GetFragileProgress() const {
    return 0.0f;
}

float UHealthComponent::GetDamageReduction() const {
    return 0.0f;
}

float UHealthComponent::GetCurrentHealth() const {
    return 0.0f;
}

bool UHealthComponent::CanBeRepaired() const {
    return false;
}

void UHealthComponent::ApplyHit(UBaseLODActor* Causer) {
}

void UHealthComponent::ApplyDamageFromInfo(float& Damage, const FDamageEvent& DamageEvent, FDamageInfo& DamageInfo) {
}

void UHealthComponent::ApplyDamage(float& Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) {
}

TArray<UGoapAction*> UHealthComponent::AllocateGOAPActions_Implementation(USurvivalGameInstance* GameInstance, UObject* InOwner) {
    return TArray<UGoapAction*>();
}

void UHealthComponent::AddHealth(float Amount, UBaseLODActor* Causer) {
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, bRepairDisabled);
    DOREPLIFETIME(UHealthComponent, CurrentFragilityLevel);
    DOREPLIFETIME(UHealthComponent, HealthState);
    DOREPLIFETIME(UHealthComponent, HealthStateOnLoad);
    DOREPLIFETIME(UHealthComponent, CurrentDamage);
    DOREPLIFETIME(UHealthComponent, ReviveStartTime);
    DOREPLIFETIME(UHealthComponent, IncapacitationTimer);
    DOREPLIFETIME(UHealthComponent, FragileDeathTime);
    DOREPLIFETIME(UHealthComponent, Reviver);
}

UHealthComponent::UHealthComponent() {
    this->BaseDamageReduction = 0.00f;
    this->ImmunityFlags = 0;
    this->RequiredDamageTypeFlags = 0;
    this->FriendlyFireType = EFriendlyFireType::Default;
    this->RequiredDamageTypeTier = 0;
    this->PlayDamagedParticlesOnDeath = true;
    this->bCanDieFromDamage = true;
    this->bCanBeRepaired = false;
    this->bCanBePushed = false;
    this->bRegenOutOfCombat = true;
    this->bAllowRepairWhenCantBeDamaged = false;
    this->bRepairDisabled = false;
    this->bAffectsDurability = true;
    this->bCanDieFromFragility = false;
    this->CurrentFragilityLevel = 0;
    this->FragileTime = 0.00f;
    this->OnNoDamagedSFX = NULL;
    this->OnDamagedSFX = NULL;
    this->OnDeathSFX = NULL;
    this->HealthFleeThreshold = 0.00f;
    this->MaxHits = 0;
    this->OverrideTargetTokens = 0;
    this->bShowDamageInteractUI = false;
    this->HealthState = EHealthState::Alive;
    this->HealthStateOnLoad = EHealthState::Alive;
    this->IncapacitationSetting = EIncapacitationSetting::None;
    this->MaxHealth = 100.00f;
    this->CurrentDamage = 0.00f;
    this->ReviveHealthPercentage = 0.50f;
    this->ReviveTime = 5.00f;
    this->ReviveStartTime = 0.00f;
    this->IncapacitationTime = 0.00f;
    this->IncapacitationTimer = 0.00f;
    this->ReviveImmunityTime = 0.00f;
    this->FragileDeathTime = 0.00f;
    this->ReviveAnim = NULL;
    this->TimeUntilDecay = 300.00f;
    this->HealthPerHourRested = 0.00f;
    this->KillAction = NULL;
    this->TimeForMemorizingPushback = 3.00f;
}

