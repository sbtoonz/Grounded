#include "AmbienceManager.h"
#include "QuadAudioBedComponent.h"

class UDataTable;

void UAmbienceManager::OnUpdateZone(const FDataTableRowHandle PrevZoneDataTableRowHandle, const FDataTableRowHandle NewZoneDataTableRowHandle, bool bIsSubmerged) {
}

void UAmbienceManager::OnHourChanged(int32 NewHour, int32 NewDay) {
}

void UAmbienceManager::HandleEnterNewZone(const FDataTableRowHandle ZoneAudioRowHandle) {
}

FDataTableRowHandle UAmbienceManager::GetLocalZoneAudioDataRowHandle() const {
    return FDataTableRowHandle{};
}

void UAmbienceManager::DestroyAllZoneBuckets() {
}

void UAmbienceManager::CreateNewZoneBuckets(const UDataTable* OneShotDataTable) {
}

UAmbienceManager::UAmbienceManager() {
    this->QuadAudioBedComponent = CreateDefaultSubobject<UQuadAudioBedComponent>(TEXT("QuadAudioBedComponent"));
}

