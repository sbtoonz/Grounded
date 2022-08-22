#pragma once
#include "CoreMinimal.h"
#include "ECharacterAudioType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAudioType : uint8 {
    Character,
    Weapon,
    Armor,
};

