#pragma once
#include "CoreMinimal.h"
#include "EExperimentState.generated.h"

UENUM()
enum class EExperimentState {
    pfenum_New,
    pfenum_Started,
    pfenum_Stopped,
    pfenum_Deleted,
    pfenum_MAX UMETA(Hidden),
};

