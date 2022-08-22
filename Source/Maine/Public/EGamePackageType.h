#pragma once
#include "CoreMinimal.h"
#include "EGamePackageType.generated.h"

UENUM(BlueprintType)
enum class EGamePackageType : uint8 {
    Default,
    Flight,
    Demo,
    PublicTest,
};

