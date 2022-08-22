#pragma once
#include "CoreMinimal.h"
#include "ESpawnedItemEmbedType.generated.h"

UENUM(BlueprintType)
enum class ESpawnedItemEmbedType : uint8 {
    None,
    Embed,
    Stick,
};

