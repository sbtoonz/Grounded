#pragma once
#include "CoreMinimal.h"
#include "EChatterInterruptionType.generated.h"

UENUM()
enum class EChatterInterruptionType : uint8 {
    Interrupt,
    PlaySimultaneously,
};

