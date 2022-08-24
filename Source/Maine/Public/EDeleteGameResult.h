#pragma once
#include "CoreMinimal.h"
#include "EDeleteGameResult.generated.h"

UENUM()
enum class EDeleteGameResult {
    Success,
    Restricted,
    Failed,
    SaveOfGivenNameNotFound,
    FailedDeletingStaleTargetDir,
};

