#pragma once
#include "CoreMinimal.h"
#include "EPuzzlePieceZone.generated.h"

UENUM(BlueprintType)
enum class EPuzzlePieceZone : uint8 {
    Pond,
    Table,
    Stump,
    SouthGrass,
    NorthGrass,
    Sandbox,
    Hedges,
    OakTree,
    Flowerbed,
    TheHaze,
    COUNT,
};

