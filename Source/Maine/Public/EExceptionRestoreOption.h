#pragma once
#include "CoreMinimal.h"
#include "EExceptionRestoreOption.generated.h"

UENUM()
enum class EExceptionRestoreOption : uint8 {
    DynamicAndPreplacedActors,
    DynamicActors,
    PreplacedActors,
};

