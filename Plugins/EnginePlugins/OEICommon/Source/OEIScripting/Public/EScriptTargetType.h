#pragma once
#include "CoreMinimal.h"
#include "EScriptTargetType.generated.h"

UENUM()
enum class EScriptTargetType {
    Owner,
    LocalPlayerPawn,
    InstigatorPlayerPawn,
    ResponderPlayerPawn,
    Speaker,
    Listener,
    MAX,
    WorldContextObject = 0x0,
};

