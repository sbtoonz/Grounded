#pragma once
#include "CoreMinimal.h"
#include "ECameraDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ECameraDisplayMode : uint8 {
    None,
    FirstPerson,
    ThirdPerson,
};

