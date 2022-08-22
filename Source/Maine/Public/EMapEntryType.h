#pragma once
#include "CoreMinimal.h"
#include "EMapEntryType.generated.h"

UENUM()
enum class EMapEntryType : uint8 {
    None,
    Player,
    POILocation,
    TrailMarker,
    RespawnPoint,
    LabLocation,
    FieldStation,
    UserWaypoint,
    Backpack,
    Objective,
    ChipLocation,
    ResourceSurvey,
    ResourceWaypoint,
};

