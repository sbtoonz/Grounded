#pragma once
#include "CoreMinimal.h"
#include "EDamageEventComponentType.generated.h"

UENUM(BlueprintType)
enum class EDamageEventComponentType : uint8 {
    AllDamageTaken,
    ColliderConfigDamageTaken,
};

