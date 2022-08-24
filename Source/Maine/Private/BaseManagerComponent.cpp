#include "BaseManagerComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

int32 UBaseManagerComponent::NumTargetsWithinRangeOfTargetBase(const TArray<AActor*>& Targets, int32 BaseIndex, float Distance) const {
    return 0;
}

int32 UBaseManagerComponent::NumBases() const {
    return 0;
}

bool UBaseManagerComponent::IsWithinTargetBase(FVector Location, int32 TargetBaseIndex) const {
    return false;
}

bool UBaseManagerComponent::IsWithinRangeOfBase(FVector Location, float Distance) const {
    return false;
}

bool UBaseManagerComponent::IsAnyTargetWithinRangeOfBase(const TArray<AActor*>& Targets, float Distance) const {
    return false;
}

bool UBaseManagerComponent::HasBase() const {
    return false;
}

int32 UBaseManagerComponent::GetTotalHeat() const {
    return 0;
}

FVector UBaseManagerComponent::GetRandomBaseLocation() const {
    return FVector{};
}

int32 UBaseManagerComponent::GetLargestBaseIndexWithinRangeOfTargetFull(const TArray<AActor*>& Targets, float Distance) const {
    return 0;
}

int32 UBaseManagerComponent::GetLargestBaseIndexWithinRangeOfTarget(const TArray<AActor*>& Targets, float Distance) const {
    return 0;
}

int32 UBaseManagerComponent::GetHeat(int32 BaseIndex) const {
    return 0;
}

int32 UBaseManagerComponent::GetClosestBaseIndexToTargets(const TArray<AActor*>& Targets) const {
    return 0;
}

int32 UBaseManagerComponent::GetClosestBaseIndex(FVector Location) const {
    return 0;
}

float UBaseManagerComponent::GetBaseRadius(int32 BaseIndex) const {
    return 0.0f;
}

FVector UBaseManagerComponent::GetBaseLocation(int32 BaseIndex) const {
    return FVector{};
}

void UBaseManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBaseManagerComponent, Bases);
}

UBaseManagerComponent::UBaseManagerComponent() {
    this->MinDistForBase = 10000.00f;
}

