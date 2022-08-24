#include "TransmitterComponent.h"
#include "Net/UnrealNetwork.h"

void UTransmitterComponent::SetTransmissionEnabled(bool bEnable) {
}

bool UTransmitterComponent::IsTransmissionEnabled() const {
    return false;
}

FGameplayTag UTransmitterComponent::GetTransmittorType() const {
    return FGameplayTag{};
}

void UTransmitterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTransmitterComponent, bTransmissionEnabled);
}

UTransmitterComponent::UTransmitterComponent() {
    this->SignalAudioCue = NULL;
    this->SignalAudioRange = 2500.00f;
    this->SignalVolumeMax = 1.00f;
    this->SignalVolumeMin = 0.10f;
    this->SignalPitchMax = 1.00f;
    this->SignalPitchMin = 0.90f;
    this->SignalAudioComponent = NULL;
    this->bTransmissionEnabled = true;
    this->bSaveTransmissionState = false;
}

