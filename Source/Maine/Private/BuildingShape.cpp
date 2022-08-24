#include "BuildingShape.h"

bool UBuildingShape::IsCell(FBuildingGridKey Key, EGetCellFlags Flags) const {
    return false;
}

TArray<FBuildingGridKey> UBuildingShape::GetSupportsOrSupportedByCells(float AngleZ) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> UBuildingShape::GetSupportsCells(float AngleZ) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> UBuildingShape::GetSupportedByCells(float AngleZ) const {
    return TArray<FBuildingGridKey>();
}

FIntVector UBuildingShape::GetSizeCellsGeometric() const {
    return FIntVector{};
}

FIntVector UBuildingShape::GetSizeCells() const {
    return FIntVector{};
}

TArray<FBuildingGridKey> UBuildingShape::GetCells(float AngleZ, EGetCellFlags Flags) const {
    return TArray<FBuildingGridKey>();
}

TArray<FBuildingGridKey> UBuildingShape::GetAdjacentCells() const {
    return TArray<FBuildingGridKey>();
}

UBuildingShape::UBuildingShape() {
    this->OverrideSupportedBy = NULL;
}

