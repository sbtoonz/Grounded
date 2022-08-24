#pragma once
#include "CoreMinimal.h"
#include "ESaveGameHeaderDataValidity.generated.h"

UENUM(BlueprintType)
enum class ESaveGameHeaderDataValidity : uint8 {
    Valid,
    InvalidOldSaveVersion,
    InvalidDifferentPackageType,
    InvalidRequiresDevelopmentContent,
    InvalidRequiresNewerBuild,
};

