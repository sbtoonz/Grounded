#pragma once
#include "CoreMinimal.h"
#include "EAnalysisTaskState.generated.h"

UENUM()
enum class EAnalysisTaskState {
    pfenum_Waiting,
    pfenum_ReadyForSubmission,
    pfenum_SubmittingToPipeline,
    pfenum_Running,
    pfenum_Completed,
    pfenum_Failed,
    pfenum_Canceled,
    pfenum_MAX UMETA(Hidden),
};

