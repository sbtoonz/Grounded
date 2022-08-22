#pragma once
#include "CoreMinimal.h"
#include "EPlayerStatType.generated.h"

UENUM()
enum class EPlayerStatType {
    None,
    Kill,
    CraftItem,
    PickupItem,
    Revive,
    Discover,
    Stamina,
    BasketballShot,
    TamePet,
    ProcessItem,
    ZiplineDistance,
    UseItem,
    Block,
    Scripted,
    TakePhoto,
    RangedAttack,
    DefensePoint,
};

