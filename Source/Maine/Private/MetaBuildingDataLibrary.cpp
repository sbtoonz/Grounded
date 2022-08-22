#include "MetaBuildingDataLibrary.h"

class UObject;

int32 UMetaBuildingDataLibrary::GetMetaBuildingUnlockedSubBuildingNum(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding) {
    return 0;
}

FDataTableRowHandle UMetaBuildingDataLibrary::GetMetaBuildingUiSubBuilding(const UObject* WorldContextObject, const FMetaBuildingData& Data, const TArray<FDataTableRowHandle>& Variants) {
    return FDataTableRowHandle{};
}

int32 UMetaBuildingDataLibrary::GetMetaBuildingSubBuildingIndex(const UObject* WorldContextObject, const FMetaBuildingIdentifier& Identifier) {
    return 0;
}

bool UMetaBuildingDataLibrary::GetMetaBuildingHasMultipleUnlockedSubBuildings(const UObject* WorldContextObject, const FDataTableRowHandle& MetaBuilding) {
    return false;
}

int32 UMetaBuildingDataLibrary::GetMetaBuildingCurrentSubBuildingIndex(const UObject* WorldContextObject, const FDataTableRowHandle& MetabuildingRow) {
    return 0;
}

int32 UMetaBuildingDataLibrary::FindInMetaBuildings(const TArray<FDataTableRowHandle>& MetaBuildings, const FDataTableRowHandle& Needle) {
    return 0;
}

UMetaBuildingDataLibrary::UMetaBuildingDataLibrary() {
}

