#pragma once
#include "CoreMinimal.h"
#include "EDamageSourceType.generated.h"

UENUM(BlueprintType)
enum class EDamageSourceType : uint8 {
    None,
    EnemyDamage,
    EnvironmentalDamage,
    Incapacitate,
};

