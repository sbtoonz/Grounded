#pragma once
#include "CoreMinimal.h"
#include "ECompletionStatus.generated.h"

UENUM()
enum class ECompletionStatus {
    Invalid,
    NotStarted,
    InProgress,
    Completed,
    Failed,
};

