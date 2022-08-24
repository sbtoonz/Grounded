#include "BestiaryComponent.h"
#include "Net/UnrealNetwork.h"

class UPlayerStatConfig;

void UBestiaryComponent::OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value) {
}

bool UBestiaryComponent::IsRareDataUnlocked(FDataTableRowHandle BestiaryRowHandle) {
    return false;
}

int32 UBestiaryComponent::GetStatValue(UPlayerStatConfig* Stat) const {
    return 0;
}

float UBestiaryComponent::GetBestiaryHealth(FDataTableRowHandle BestiaryRowHandle) const {
    return 0.0f;
}

TArray<ESurvivalDamageTypeFlags> UBestiaryComponent::GetBestiaryDamageWeaknesses(FDataTableRowHandle BestiaryRowHandle) const {
    return TArray<ESurvivalDamageTypeFlags>();
}

TArray<ESurvivalDamageTypeFlags> UBestiaryComponent::GetBestiaryDamageResistances(FDataTableRowHandle BestiaryRowHandle) const {
    return TArray<ESurvivalDamageTypeFlags>();
}

void UBestiaryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBestiaryComponent, BestiaryStats);
}

UBestiaryComponent::UBestiaryComponent() {
}

