#pragma once
#include "CoreMinimal.h"
#include "ESharedSaveAPIStatus.generated.h"

UENUM()
enum class ESharedSaveAPIStatus : uint8 {
    Unknown,
    Enabled,
    Disabled,
    Maintenance,
    InvalidVersion,
    QueryFailure,
};

