#pragma once
#include "CoreMinimal.h"
#include "EBuildingGridSlot.generated.h"

UENUM(BlueprintType)
enum class EBuildingGridSlot : uint8 {
    Cell,
    Floor,
    WallX,
    WallY,
    EdgeX,
    EdgeY,
    EdgeZ,
    WallDiagA,
    WallDiagB,
    EdgeA,
    EdgeB,
    EdgeCenterZ,
    WallXTriangleTop,
    WallXTrianglePositive,
    WallXTriangleBottom,
    WallXTriangleNegative,
    WallYTriangleTop,
    WallYTrianglePositive,
    WallYTriangleBottom,
    WallYTriangleNegative,
    FloorTrianglePositiveX,
    FloorTrianglePositiveY,
    FloorTriangleNegativeX,
    FloorTriangleNegativeY,
    Count,
};

