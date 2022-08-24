#pragma once
#include "CoreMinimal.h"
#include "EChatterQueuedAction.generated.h"

UENUM()
enum class EChatterQueuedAction : uint8 {
    Queue,
    Discard,
};

