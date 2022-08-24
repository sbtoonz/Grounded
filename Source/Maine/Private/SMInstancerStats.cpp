#include "SMInstancerStats.h"

FSMInstancerStats::FSMInstancerStats() {
    this->NumActorsModified = 0;
    this->NumIncompatibleActorsSkipped = 0;
    this->NumLevelsModified = 0;
    this->NumDistinctSMAs = 0;
    this->DistinctSMAsBelowInstanceThreshold = 0;
    this->BelowInstanceThresholdButNotUniqueTotal = 0;
    this->UniqueSMAs = 0;
    this->HISMACount = 0;
    this->HISMComponentCount = 0;
    this->OutlierCount = 0;
}

