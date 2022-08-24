#pragma once
#include "CoreMinimal.h"
#include "EFriendlyFireType.generated.h"

UENUM()
enum class EFriendlyFireType : uint8 {
    Default,
    AlwaysIgnore,
    AlwaysAllow,
};

