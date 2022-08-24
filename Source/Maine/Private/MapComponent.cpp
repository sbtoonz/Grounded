#include "MapComponent.h"
#include "Net/UnrealNetwork.h"

class ASurvivalPlayerState;

void UMapComponent::UnlockPuzzlePieceZone(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& PuzzlePieceRegion) {
}

void UMapComponent::OnRep_UnlockedMaps() {
}

void UMapComponent::MulticastNotifyPuzzlePieceZoneUnlocked_Implementation(ASurvivalPlayerState* Unlocker, const FDataTableRowHandle& UnlockedPuzzlePieceZone) {
}

bool UMapComponent::IsPuzzlePieceZoneUnlocked(const FDataTableRowHandle& PuzzlePieceRegion) const {
    return false;
}

bool UMapComponent::HasSeenMapUnlocked(EPuzzlePieceZone MapData) const {
    return false;
}

FVector2D UMapComponent::GetWorldMapPosition(FVector Location) const {
    return FVector2D{};
}

void UMapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMapComponent, UnlockedPuzzlePieceZones);
}

UMapComponent::UMapComponent() {
    this->WorldMapXMin = 0.00f;
    this->WorldMapXMax = 0.00f;
    this->WorldMapYMin = 0.00f;
    this->WorldMapYMax = 0.00f;
}

