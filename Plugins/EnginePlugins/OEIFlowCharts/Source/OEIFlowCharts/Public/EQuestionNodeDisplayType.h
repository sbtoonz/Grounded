#pragma once
#include "CoreMinimal.h"
#include "EQuestionNodeDisplayType.generated.h"

UENUM()
enum class EQuestionNodeDisplayType : uint8 {
    ShowOnce,
    ShowAlways,
    ShowNever,
};

