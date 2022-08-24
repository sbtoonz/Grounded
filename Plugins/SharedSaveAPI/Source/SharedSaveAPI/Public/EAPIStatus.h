#pragma once
#include "CoreMinimal.h"
#include "EAPIStatus.generated.h"

UENUM()
enum class EAPIStatus {
    Enabled,
    Disabled,
    Maintenance,
};

