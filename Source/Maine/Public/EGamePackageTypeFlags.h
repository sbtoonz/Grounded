#pragma once
#include "CoreMinimal.h"
#include "EGamePackageTypeFlags.generated.h"

UENUM()
enum class EGamePackageTypeFlags {
    Default,
    Flight,
    Demo,
    PublicTest,
};

