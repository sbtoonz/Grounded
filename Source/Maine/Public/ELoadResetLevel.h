#pragma once
#include "CoreMinimal.h"
#include "ELoadResetLevel.generated.h"

UENUM()
enum class ELoadResetLevel : uint8 {
    None,
    QuestsRestructured,
    NewGamePlus,
};

