#include "VitalVisualsComponent.h"
#include "Net/UnrealNetwork.h"

void UVitalVisualsComponent::OnRep_VitalValue() {
}

bool UVitalVisualsComponent::HasVitalTag(FGameplayTag Tag) const {
    return false;
}

float UVitalVisualsComponent::GetVitalValue() const {
    return 0.0f;
}

void UVitalVisualsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVitalVisualsComponent, VitalValue);
}

UVitalVisualsComponent::UVitalVisualsComponent() {
    this->VitalValue = 0.00f;
}

