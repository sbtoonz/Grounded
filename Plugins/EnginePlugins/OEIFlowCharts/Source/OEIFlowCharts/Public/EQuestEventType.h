#pragma once
#include "CoreMinimal.h"
#include "EQuestEventType.generated.h"

UENUM()
enum class EQuestEventType {
    Talk,
    Kill,
    Location,
    AcquireItem,
    Interact,
    GlobalVariable,
    Inspect,
};

