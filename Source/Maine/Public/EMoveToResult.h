#pragma once
#include "CoreMinimal.h"
#include "EMoveToResult.generated.h"

UENUM()
enum class EMoveToResult {
    Pending,
    Success,
    Blocked,
    UnexpectedFailure,
    OffNavMesh,
};

