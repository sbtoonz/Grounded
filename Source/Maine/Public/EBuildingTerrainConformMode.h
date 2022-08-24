#pragma once
#include "CoreMinimal.h"
#include "EBuildingTerrainConformMode.generated.h"

UENUM(BlueprintType)
enum class EBuildingTerrainConformMode : uint8 {
    AlwaysLevel,
    MatchTerrain,
};

