#pragma once
#include "CoreMinimal.h"
#include "EInterfaceNarrationFlags.generated.h"

UENUM()
enum class EInterfaceNarrationFlags {
    IgnoreChangeCheck,
    Verbose,
    IsUsingMouse,
    IsContextChange,
};

