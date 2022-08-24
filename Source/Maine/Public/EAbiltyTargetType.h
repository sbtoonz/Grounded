#pragma once
#include "CoreMinimal.h"
#include "EAbiltyTargetType.generated.h"

UENUM()
enum class EAbiltyTargetType : uint8 {
    Enemy,
    Self,
    Scripted,
};

