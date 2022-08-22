#pragma once
#include "CoreMinimal.h"
#include "EHUDMarkerType.generated.h"

UENUM(BlueprintType)
enum class EHUDMarkerType : uint8 {
    None,
    InProgressBuilding,
    RestingSpot,
    MarkerBuilding,
    MissionObjective,
    StarterLocation,
    Player,
    DroppedBackpack,
    DroppedItem,
    RadarLocation,
    Storage,
    ObjectiveItem,
    TheftInProgress,
    TempModelItem,
    NeedsRepairBuilding,
    Tutorial,
    TechChip,
    UnderAttack,
    Fragile,
    ActivePet,
    PlayerWaypoint,
    BuildingPowerSource,
    BuildingPowerReceiver,
    BaseUnderAttack,
    ResourceWaypoint,
    SuperTechChip,
    PartyNonPlayer,
    TalkToMe,
    DefensePoint,
    WaveSpawn,
};

