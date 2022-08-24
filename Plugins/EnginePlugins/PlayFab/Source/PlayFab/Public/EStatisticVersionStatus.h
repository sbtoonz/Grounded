#pragma once
#include "CoreMinimal.h"
#include "EStatisticVersionStatus.generated.h"

UENUM()
enum class EStatisticVersionStatus {
    pfenum_Active,
    pfenum_SnapshotPending,
    pfenum_Snapshot,
    pfenum_ArchivalPending,
    pfenum_Archived,
    pfenum_MAX UMETA(Hidden),
};

