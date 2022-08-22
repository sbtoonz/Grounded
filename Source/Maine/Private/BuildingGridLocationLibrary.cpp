#include "BuildingGridLocationLibrary.h"

class ABuilding;

FBuildingGridLocation UBuildingGridLocationLibrary::Subtract_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B) {
    return FBuildingGridLocation{};
}

bool UBuildingGridLocationLibrary::IsEaveBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, const FGameplayTag& ByTag) {
    return false;
}

bool UBuildingGridLocationLibrary::IsCrenellationBlockedAt(const ABuilding* Building, const FBuildingGridLocation& Location, float ActualWorldRotation) {
    return false;
}

bool UBuildingGridLocationLibrary::IsBuildingGridLocationValid(const FBuildingGridLocation& Location) {
    return false;
}

FBuildingGridLocation UBuildingGridLocationLibrary::Add_BuildingGridLocationIntVector(const FBuildingGridLocation& A, FIntVector B) {
    return FBuildingGridLocation{};
}

UBuildingGridLocationLibrary::UBuildingGridLocationLibrary() {
}

