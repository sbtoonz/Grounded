#include "BuildingGridComponent.h"
#include "Net/UnrealNetwork.h"

class ABuilding;

FIntVector UBuildingGridComponent::WorldToGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const {
    return FIntVector{};
}

FTransform UBuildingGridComponent::SnapToBuildGrid(EBuildingPlacementMode PlacementMode, FVector WorldPosition, FVector2D Offset) const {
    return FTransform{};
}

void UBuildingGridComponent::RegisterChangedCallback(const FBuildingGridKey& GridLocation, ABuilding* Building) {
}

void UBuildingGridComponent::OnRep_TimeSinceCreation() {
}

void UBuildingGridComponent::OnRep_SurfaceType() {
}

void UBuildingGridComponent::OnRep_InstancedBuildings() {
}

FVector UBuildingGridComponent::LocalToWorld(FVector LocalLocation) const {
    return FVector{};
}

FIntVector UBuildingGridComponent::LocalToGrid(EBuildingPlacementMode PlacementMode, FVector LocalPosition, FVector2D Offset) const {
    return FIntVector{};
}

FVector UBuildingGridComponent::KeyToWorldLocation(const FBuildingGridKey& Key) {
    return FVector{};
}

bool UBuildingGridComponent::IsSnapOccupied(FIntVector Snap) const {
    return false;
}

bool UBuildingGridComponent::IsBlocked(const FBuildingGridKey& GridLocation) const {
    return false;
}

bool UBuildingGridComponent::HasOverlappingBuilding(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const {
    return false;
}

bool UBuildingGridComponent::HasBuildingPrecise(const FBuildingGridKey& GridLocation) const {
    return false;
}

bool UBuildingGridComponent::HasBuildingAdjacent(const FBuildingGridKey& GridLocation, const ABuilding* Building, float BuildingWorldRotation) const {
    return false;
}

bool UBuildingGridComponent::HasBuilding(const FBuildingGridKey& GridLocation) const {
    return false;
}

FTransform UBuildingGridComponent::GridToWorld(FIntVector Position, FVector LocalOffset) const {
    return FTransform{};
}

FVector UBuildingGridComponent::GridToLocal(FIntVector Position) const {
    return FVector{};
}

EBuildingGridSlot UBuildingGridComponent::GetWallSlot(float WorldRotation, bool bAllowDiagonal) const {
    return EBuildingGridSlot::Cell;
}

bool UBuildingGridComponent::GetUseBuildingIntegrity() const {
    return false;
}

EBuildingGridSurfaceType UBuildingGridComponent::GetSurfaceType() const {
    return EBuildingGridSurfaceType::None;
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetSupportsSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetSupportedBySlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) {
    return TArray<FBuildingGridKey>();
}

FVector UBuildingGridComponent::GetSubdivisionOffset() const {
    return FVector{};
}

int32 UBuildingGridComponent::GetSubdivisionCountZ() const {
    return 0;
}

int32 UBuildingGridComponent::GetSubdivisionCountY() const {
    return 0;
}

int32 UBuildingGridComponent::GetSubdivisionCountX() const {
    return 0;
}

FIntVector UBuildingGridComponent::GetSubdivisionCount() const {
    return FIntVector{};
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetSubdividedBaseFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetSoftSlots(const FTransform& RelativeTo, const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) {
    return TArray<FBuildingGridKey>();
}

FVector UBuildingGridComponent::GetSnapOffset() const {
    return FVector{};
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetRawSubdivisions(const FBuildingGridKey& OriginSlot, EGetCellFlags Flags) {
    return TArray<FBuildingGridKey>();
}

FIntVector UBuildingGridComponent::GetMinCell() const {
    return FIntVector{};
}

FIntVector UBuildingGridComponent::GetMaxCell() const {
    return FIntVector{};
}

TArray<FBuildingGridKey> UBuildingGridComponent::GetFlatFootprint(const FBuildingGridKey& OriginSlot, const ABuilding* Building, float BuildingWorldRotation) const {
    return TArray<FBuildingGridKey>();
}

int32 UBuildingGridComponent::GetCollapseCountMulti(const TSet<ABuilding*> BuildingBuffer, bool bAllowDesignated) const {
    return 0;
}

int32 UBuildingGridComponent::GetCollapseCountAsync(const FBuildingGridBuildingId& BuildingId) const {
    return 0;
}

int32 UBuildingGridComponent::GetCollapseCount(const ABuilding* Building) const {
    return 0;
}

FVector UBuildingGridComponent::GetCellSize() const {
    return FVector{};
}

FVector UBuildingGridComponent::GetCellExtents() const {
    return FVector{};
}

FVector UBuildingGridComponent::GetBaseCellSize() const {
    return FVector{};
}

void UBuildingGridComponent::CheckDetachedDestroy() {
}

void UBuildingGridComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBuildingGridComponent, SurfaceType);
    DOREPLIFETIME(UBuildingGridComponent, InstancedBuildings);
    DOREPLIFETIME(UBuildingGridComponent, TimeSinceCreation);
}

UBuildingGridComponent::UBuildingGridComponent() {
    this->BaseIndex = -1;
    this->bIsDynamicallyCreated = false;
    this->SurfaceType = EBuildingGridSurfaceType::None;
    this->TimeSinceCreation = 0.00f;
}

