#include "InterestComponent.h"

class UInterestCore;
class UGoapWorldStateEvaluator;
class UVitalStat;
class UGoapAction;
class AActor;
class UAttractionComponent;

void UInterestComponent::VisitBreadcrumb() {
}

bool UInterestComponent::HasInterest() const {
    return false;
}

bool UInterestComponent::HasDesiredBreadcrumb() const {
    return false;
}

void UInterestComponent::HandleCoreActivityModeChanged(UInterestCore* Sender, ECreatureActivityMode Mode) {
}

TArray<UGoapWorldStateEvaluator*> UInterestComponent::GetWorldEvaluators() const {
    return TArray<UGoapWorldStateEvaluator*>();
}

bool UInterestComponent::GetVitalValueBySemantic(const FGameplayTag& Tag, float& Value) const {
    return false;
}

bool UInterestComponent::GetVitalValue(const UVitalStat* Stat, float& Value) const {
    return false;
}

FVitalState UInterestComponent::GetVitalState() {
    return FVitalState{};
}

TMap<UVitalStat*, FVitalStatValue> UInterestComponent::GetVitals() const {
    return TMap<UVitalStat*, FVitalStatValue>();
}

FGameplayTag UInterestComponent::GetTirednessTag() const {
    return FGameplayTag{};
}

FRealInterestState UInterestComponent::GetState() {
    return FRealInterestState{};
}

bool UInterestComponent::GetShouldDropBreadcrumbs() const {
    return false;
}

FGameplayTagContainer UInterestComponent::GetFoodTags() const {
    return FGameplayTagContainer{};
}

UGoapAction* UInterestComponent::GetFleeBreadcrumbAction() const {
    return NULL;
}

FRotator UInterestComponent::GetDesiredTargetRotation() const {
    return FRotator{};
}

FVector UInterestComponent::GetDesiredTargetLocation() const {
    return FVector{};
}

AActor* UInterestComponent::GetDesiredTargetActor() const {
    return NULL;
}

UAttractionComponent* UInterestComponent::GetDesiredTarget() const {
    return NULL;
}

FVector UInterestComponent::GetBreadcrumbActionLocation() {
    return FVector{};
}

FGoapActionInstance UInterestComponent::GetBreadcrumbAction() {
    return FGoapActionInstance{};
}

UGoapAction* UInterestComponent::GetBaselineAction() const {
    return NULL;
}

ECreatureActivityMode UInterestComponent::GetActivityMode() const {
    return ECreatureActivityMode::Normal;
}

void UInterestComponent::AdjustVitalValueBySemantic(const FGameplayTag& Tag, float Adjustment) {
}

void UInterestComponent::AdjustVitalValue(const UVitalStat* Stat, float Adjustment) {
}

UInterestComponent::UInterestComponent() {
    this->Core = NULL;
    this->bShouldDropBreadcrumbs = false;
    this->FleeBreadcrumbAction = NULL;
    this->BaselineAction = NULL;
}

