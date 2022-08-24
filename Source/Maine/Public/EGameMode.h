#pragma once
#include "CoreMinimal.h"
#include "EGameMode.generated.h"

UENUM(BlueprintType)
enum class EGameMode : uint8 {
    None,
    Normal,
    Relaxed,
    Hard,
    Creative,
    CreativeCreatures,
    Custom,
};

