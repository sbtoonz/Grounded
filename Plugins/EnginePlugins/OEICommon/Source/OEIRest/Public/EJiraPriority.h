#pragma once
#include "CoreMinimal.h"
#include "EJiraPriority.generated.h"

UENUM()
enum class EJiraPriority {
    A1 = 0x2710,
    A2,
    A3,
    B,
    C,
    D,
    Unknown = 0xFFFF,
};

