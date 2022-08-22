#pragma once
#include "CoreMinimal.h"
#include "EDefensePointChargeFailType.generated.h"

UENUM()
enum class EDefensePointChargeFailType : uint8 {
    SingleFail,
    AllFail,
};

