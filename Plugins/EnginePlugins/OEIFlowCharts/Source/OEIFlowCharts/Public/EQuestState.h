#pragma once
#include "CoreMinimal.h"
#include "EQuestState.generated.h"

UENUM()
enum class EQuestState {
    Invalid,
    InProgress,
    Succeeded,
    Failed,
    Mentioned,
};

