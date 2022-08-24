#pragma once
#include "CoreMinimal.h"
#include "EPayfabTriggerType.generated.h"

UENUM()
enum class EPayfabTriggerType {
    pfenum_HTTP,
    pfenum_Queue,
    pfenum_MAX UMETA(Hidden),
};

