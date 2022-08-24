#include "BuildingGridBuildingIdLibrary.h"

class UBuildingGridComponent;

bool UBuildingGridBuildingIdLibrary::IsBuildingIdValid(const FBuildingGridBuildingId& ID) {
    return false;
}

FBuildingGridBuildingId UBuildingGridBuildingIdLibrary::GetInvalidBuildingId() {
    return FBuildingGridBuildingId{};
}

UBuildingGridComponent* UBuildingGridBuildingIdLibrary::GetGridForBuildingGridBuildingId(const FBuildingGridBuildingId& BuildingGridBuildingId) {
    return NULL;
}

UBuildingGridComponent* UBuildingGridBuildingIdLibrary::GetBuildingGridFromId(const FBuildingGridBuildingId& ID) {
    return NULL;
}

UBuildingGridBuildingIdLibrary::UBuildingGridBuildingIdLibrary() {
}

