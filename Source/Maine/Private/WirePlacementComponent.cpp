#include "WirePlacementComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UWirePlacementComponent::ServerTryEnterWirePlacementMode_Implementation(AActor* Target) {
}

void UWirePlacementComponent::ServerExitWirePlacementMode_Implementation() {
}

void UWirePlacementComponent::ServerDisconnectWire_Implementation(AActor* InConnection) {
}

void UWirePlacementComponent::ServerConnectWire_Implementation() {
}

void UWirePlacementComponent::MulticastUpdateWireLocation_Implementation(FVector Start, FVector End) {
}

bool UWirePlacementComponent::GetIsPlacingWire() const {
    return false;
}

void UWirePlacementComponent::ClientOnEnterWirePlacementMode_Implementation() {
}

void UWirePlacementComponent::ClientExitWirePlacementMode_Implementation() {
}

void UWirePlacementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWirePlacementComponent, ConnectionStartActor);
    DOREPLIFETIME(UWirePlacementComponent, PossibleConnectionEndActor);
    DOREPLIFETIME(UWirePlacementComponent, WireVisualsInstance);
    DOREPLIFETIME(UWirePlacementComponent, ConnectionVisualsActor);
    DOREPLIFETIME(UWirePlacementComponent, IsPlacingWire);
}

UWirePlacementComponent::UWirePlacementComponent() {
    this->ConnectionStartActor = NULL;
    this->PossibleConnectionEndActor = NULL;
    this->WireVisualsInstance = NULL;
    this->ConnectionVisualsActor = NULL;
    this->IsPlacingWire = false;
    this->ConnectionVisuals = NULL;
}

