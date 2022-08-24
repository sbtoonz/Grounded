#pragma once
#include "CoreMinimal.h"
#include "ECutsceneTargetType.generated.h"

UENUM()
enum class ECutsceneTargetType : uint8 {
    None,
    AllPlayers,
    TriggerPlayer,
};

