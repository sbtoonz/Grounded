#pragma once
#include "CoreMinimal.h"
#include "ETutorialLogType.generated.h"

UENUM(BlueprintType)
enum class ETutorialLogType : uint8 {
    AlwaysShow,
    NeverShow,
    ShowWhenSeen,
};

