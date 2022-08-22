#pragma once
#include "CoreMinimal.h"
#include "ETimeOfDay.generated.h"

UENUM()
enum class ETimeOfDay : uint8 {
    Morning,
    Day,
    Evening,
    Night,
};

