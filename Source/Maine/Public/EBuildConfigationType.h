#pragma once
#include "CoreMinimal.h"
#include "EBuildConfigationType.generated.h"

UENUM()
enum class EBuildConfigationType : uint8 {
    Debug,
    Development,
    Test,
    Shipping,
};

