#pragma once
#include "CoreMinimal.h"
#include "EGruntGroup.generated.h"

UENUM()
enum class EGruntGroup : uint8 {
    None,
    Attack,
    Death,
    HitReact,
    Movement,
};

