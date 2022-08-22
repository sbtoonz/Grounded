#include "ZoneManagerComponent.h"
#include "Net/UnrealNetwork.h"

void UZoneManagerComponent::OnRep_PlayerOverlapVolumes() {
}

void UZoneManagerComponent::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UZoneManagerComponent::OnDayNightChange(bool bIsDayTime) {
}

FDataTableRowHandle UZoneManagerComponent::GetLocalZoneRowHandle() const {
    return FDataTableRowHandle{};
}

void UZoneManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UZoneManagerComponent, PlayerOverlapVolumes);
}

UZoneManagerComponent::UZoneManagerComponent() {
}

