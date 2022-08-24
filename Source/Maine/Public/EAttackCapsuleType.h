#pragma once
#include "CoreMinimal.h"
#include "EAttackCapsuleType.generated.h"

UENUM()
enum class EAttackCapsuleType : uint8 {
    Attack,
    PullForce,
    AttachSocket,
};

