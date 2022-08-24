#include "BuildingFunctionLibrary.h"

class ABuilding;

bool UBuildingFunctionLibrary::GetBuildingDataFilterMatches(const FBaseBuildingData& BuildingData, const FString& FilterText) {
    return false;
}

TSoftClassPtr<ABuilding> UBuildingFunctionLibrary::CoalesceSoftBuildingClass(TSoftClassPtr<ABuilding> A, TSoftClassPtr<ABuilding> B) {
    return NULL;
}

UBuildingFunctionLibrary::UBuildingFunctionLibrary() {
}

