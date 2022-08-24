#include "GlobalControlsData.h"

int32 UGlobalControlsData::GetConflictsWithMask(EControlConflictContext Context) const {
    return 0;
}

bool UGlobalControlsData::FindMetadata(const FAnyControlMappingKey& Key, FControlMetadata& OutData) const {
    return false;
}

UGlobalControlsData::UGlobalControlsData() {
}

