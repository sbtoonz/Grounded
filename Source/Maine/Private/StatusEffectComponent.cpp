#include "StatusEffectComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UStatusEffect;
class ASurvivalCharacter;
class USurvivalDamageType;

void UStatusEffectComponent::RemoveEffect(UStatusEffect* StatusEffect, bool bBroadcastChangedEvent) {
}

void UStatusEffectComponent::OnRest(float RestDuration) {
}

void UStatusEffectComponent::OnRep_StatusEffects(const TArray<UStatusEffect*>& PreviousStatusEffects) {
}

void UStatusEffectComponent::OnHealthStateChange(EHealthState NewHealthState) {
}

void UStatusEffectComponent::OnDayNightChange(bool bbIsDayTime) {
}

void UStatusEffectComponent::OnCombatChange(ASurvivalCharacter* Character, bool bInCombat) {
}

bool UStatusEffectComponent::HasStatusEffectTag(FGameplayTag EffectTag) const {
    return false;
}

bool UStatusEffectComponent::HasStatusEffectOfType(EStatusEffectType StatType) const {
    return false;
}

bool UStatusEffectComponent::HasStatusEffectOfDamageType(EStatusEffectType StatType, TSubclassOf<USurvivalDamageType> DamageType) const {
    return false;
}

bool UStatusEffectComponent::HasAnyStatusEffectTag(FGameplayTagContainer EffectTags) const {
    return false;
}

float UStatusEffectComponent::GetValueForStatWithExtraData(EStatusEffectType StatType, FDataTableRowHandle ExtraData) const {
    return 0.0f;
}

float UStatusEffectComponent::GetValueForStatForDamageTypeFlags(EStatusEffectType StatType, int32 Flags) const {
    return 0.0f;
}

float UStatusEffectComponent::GetValueForStatForDamageInfo(EStatusEffectType StatType, const FDamageInfo& DammageInfo) const {
    return 0.0f;
}

float UStatusEffectComponent::GetValueForStat(EStatusEffectType StatType) const {
    return 0.0f;
}

TArray<UStatusEffect*> UStatusEffectComponent::GetStatusEffects() const {
    return TArray<UStatusEffect*>();
}

int32 UStatusEffectComponent::GetNumStatusEffectOfType(EStatusEffectType StatType) const {
    return 0;
}

TArray<FDataTableRowHandle> UStatusEffectComponent::GetDefaultStatusEffects() const {
    return TArray<FDataTableRowHandle>();
}

UStatusEffect* UStatusEffectComponent::CreateAndAddEffect(FDataTableRowHandle StatusEffectRowHandle) {
    return NULL;
}

bool UStatusEffectComponent::CanAddEffect(FDataTableRowHandle StatusEffectRowHandle) {
    return false;
}

void UStatusEffectComponent::AddEffect(UStatusEffect* StatusEffect) {
}

void UStatusEffectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStatusEffectComponent, StatusEffects);
}

UStatusEffectComponent::UStatusEffectComponent() {
}

