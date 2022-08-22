#include "StatusEffect.h"
#include "Net/UnrealNetwork.h"

bool UStatusEffect::ShowInUI() const {
    return false;
}

void UStatusEffect::OnRep_StatusEffectRowHandle(FDataTableRowHandle PreviousHandle) {
}

void UStatusEffect::OnRep_ResetTime() {
}

float UStatusEffect::GetTimeRemaining() const {
    return 0.0f;
}

float UStatusEffect::GetTimeElapsed() const {
    return 0.0f;
}

EStatusEffectType UStatusEffect::GetStatusEffectType() const {
    return EStatusEffectType::None;
}

EStatusEffectOriginType UStatusEffect::GetOriginType() const {
    return EStatusEffectOriginType::Gear;
}

FGameplayTagContainer UStatusEffect::GetEffectTags() const {
    return FGameplayTagContainer{};
}

EStatusEffectDurationType UStatusEffect::GetDurationType() const {
    return EStatusEffectDurationType::Duration;
}

float UStatusEffect::GetDuration() const {
    return 0.0f;
}

FDataTableRowHandle UStatusEffect::GetDataHandle() const {
    return FDataTableRowHandle{};
}

EStatusEffectApplyType UStatusEffect::GetApplicationType() const {
    return EStatusEffectApplyType::None;
}

void UStatusEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStatusEffect, StatusEffectRowHandle);
    DOREPLIFETIME(UStatusEffect, TimeElapsed);
    DOREPLIFETIME(UStatusEffect, bEnabled);
    DOREPLIFETIME(UStatusEffect, ResetTime);
    DOREPLIFETIME(UStatusEffect, OriginType);
}

UStatusEffect::UStatusEffect() {
    this->TimeElapsed = 0.00f;
    this->bEnabled = true;
    this->ResetTime = 0;
    this->OriginType = EStatusEffectOriginType::Other;
}

