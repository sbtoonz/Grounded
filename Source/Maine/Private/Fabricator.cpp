#include "Fabricator.h"
#include "Net/UnrealNetwork.h"

class UHealthComponent;

void AFabricator::TickProcessing(float DeltaTime) {
}

void AFabricator::OnRep_FabricationState() {
}

void AFabricator::OnRep_FabricationItems() {
}

void AFabricator::OnHealthChanged(UHealthComponent* SourceHealthComponent, float NewHealth, float OldHealth) {
}

TArray<FRecipeRequirements> AFabricator::GetRemainingFabricationRequirements() const {
    return TArray<FRecipeRequirements>();
}

float AFabricator::GetProcessingTimePercentage() const {
    return 0.0f;
}

EFabricationState AFabricator::GetFabricationState() const {
    return EFabricationState::None;
}

void AFabricator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFabricator, FabricationItems);
    DOREPLIFETIME(AFabricator, FabricationState);
}

AFabricator::AFabricator() {
    this->ProcessingTime = 0.00f;
    this->OperableHealthThreshold = 0.25f;
    this->FabricationState = EFabricationState::None;
}

