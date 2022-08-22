#include "HUDMarkerManagerComponent.h"

class APlayerState;
class AActor;
class APawn;
class UBaseLODActor;

void UHUDMarkerManagerComponent::ToggleShowFarHUDMarkers() {
}

void UHUDMarkerManagerComponent::RegisterPlayerWaypointMarker(APlayerState* OwningPlayer, FVector Location, bool ShowDistance, float Lifetime) {
}

void UHUDMarkerManagerComponent::RegisterPlayer(APawn* Player) {
}

void UHUDMarkerManagerComponent::RegisterLocationMarker(const FString& MarkerTag, FDataTableRowHandle Quest, FVector Location, EHUDMarkerType MarkerType, bool ShowDistance, float Lifetime) {
}

void UHUDMarkerManagerComponent::RegisterItemObjectiveMarker(FDataTableRowHandle ItemDataRowHandle, FDataTableRowHandle Quest, bool ShowDistance, float Lifetime) {
}

void UHUDMarkerManagerComponent::RefreshActor(AActor* Actor) {
}

void UHUDMarkerManagerComponent::OnPlayerRemoved(APlayerState* PlayerState) {
}

void UHUDMarkerManagerComponent::K2_RegisterLODActor(UBaseLODActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime) {
}

void UHUDMarkerManagerComponent::K2_RegisterActor(AActor* Actor, FDataTableRowHandle Quest, FDataTableRowHandle AdditionalData, EHUDMarkerType MarkerType, int32 IconVariant, int32 ColorVariant, bool ShowDistance, float Lifetime) {
}

bool UHUDMarkerManagerComponent::GetShowFarHUDMarkers() const {
    return false;
}

void UHUDMarkerManagerComponent::DeregisterActorMarker(AActor* ActorToDeregister, EHUDMarkerType MarkerType) {
}

void UHUDMarkerManagerComponent::DeregisterActor(AActor* Actor) {
}

void UHUDMarkerManagerComponent::AddStartingMarkers() {
}

UHUDMarkerManagerComponent::UHUDMarkerManagerComponent() {
    this->MaxHeightUsedForTopOfObjectiveMesh = 200.00f;
}

