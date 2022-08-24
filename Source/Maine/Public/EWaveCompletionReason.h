#pragma once
#include "CoreMinimal.h"
#include "EWaveCompletionReason.generated.h"

UENUM()
enum class EWaveCompletionReason : uint8 {
    Failure,
    Success,
};

