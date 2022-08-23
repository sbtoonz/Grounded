#pragma once
#include "CoreMinimal.h"
#include "EShapeType.generated.h"

UENUM()
enum class EShapeType : uint8 {
    Unknown,
    Box,
    Sphere,
    Capsule,
};

