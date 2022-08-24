#include "InterestCore.h"

class UVitalStat;
class UAttractionComponent;

bool UInterestCore::ShouldTrackDesiredTarget() const {
    return false;
}

bool UInterestCore::ShouldInteractWithFace() const {
    return false;
}

bool UInterestCore::SetVitalValueBySemantic(const FGameplayTag& Tag, float Value) {
    return false;
}

void UInterestCore::SetActivityMode(ECreatureActivityMode Mode) {
}

bool UInterestCore::HasInterest() const {
    return false;
}

bool UInterestCore::HasDesiredBreadcrumb() const {
    return false;
}

bool UInterestCore::GetVitalValueBySemantic(const FGameplayTag& Tag, float& Value) const {
    return false;
}

bool UInterestCore::GetVitalValue(const UVitalStat* Stat, float& Value) const {
    return false;
}

FVitalState UInterestCore::GetVitalState() {
    return FVitalState{};
}

TMap<UVitalStat*, FVitalStatValue> UInterestCore::GetVitals() const {
    return TMap<UVitalStat*, FVitalStatValue>();
}

FGameplayTag UInterestCore::GetTirednessTag() const {
    return FGameplayTag{};
}

FRealInterestState UInterestCore::GetState() {
    return FRealInterestState{};
}

bool UInterestCore::GetShouldDropBreadcrumbs() const {
    return false;
}

float UInterestCore::GetPetHappinessNormalized() const {
    return 0.0f;
}

bool UInterestCore::GetMustLand() const {
    return false;
}

FGameplayTagContainer UInterestCore::GetFoodTags() const {
    return FGameplayTagContainer{};
}

EFaceTargetType UInterestCore::GetFacingBehavior() const {
    return EFaceTargetType::None;
}

FRotator UInterestCore::GetDesiredTargetRotation() const {
    return FRotator{};
}

FVector UInterestCore::GetDesiredTargetLocation() const {
    return FVector{};
}

UAttractionComponent* UInterestCore::GetDesiredTarget() const {
    return NULL;
}

FVector UInterestCore::GetBreadcrumbActionLocation() {
    return FVector{};
}

FGoapActionInstance UInterestCore::GetBreadcrumbAction() {
    return FGoapActionInstance{};
}

ECreatureActivityMode UInterestCore::GetActivityMode() const {
    return ECreatureActivityMode::Normal;
}

void UInterestCore::AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment) {
}

void UInterestCore::AdjustVitalValue(const UVitalStat* Stat, float Adjustment) {
}

UInterestCore::UInterestCore() {
}

