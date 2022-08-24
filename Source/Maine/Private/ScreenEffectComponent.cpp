#include "ScreenEffectComponent.h"

class AActor;
class UStatusEffect;
class UScreenEffectData;

void UScreenEffectComponent::OnStatusEffectRemoved(AActor* Owner, UStatusEffect* StatusEffect) {
}

void UScreenEffectComponent::OnStatusEffectAdded(AActor* Owner, UStatusEffect* StatusEffect) {
}

void UScreenEffectComponent::EndScreenEffect(UScreenEffectData* ScreenEffectData) {
}

void UScreenEffectComponent::BeginScreenEffectWithDirection(UScreenEffectData* ScreenEffectData, FVector Direction) {
}

void UScreenEffectComponent::BeginScreenEffect(UScreenEffectData* ScreenEffectData) {
}

UScreenEffectComponent::UScreenEffectComponent() {
    this->OwnerCharacter = NULL;
}

