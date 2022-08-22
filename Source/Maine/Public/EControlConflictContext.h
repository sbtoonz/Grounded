#pragma once
#include "CoreMinimal.h"
#include "EControlConflictContext.generated.h"

UENUM()
enum class EControlConflictContext : uint8 {
    None,
    InGameGeneral,
    InGameBuildingPlacement,
    InGameInteract,
    InGameHotbar,
    MenuGlobal,
    MenuGeneral,
    InventoryMenu,
    CraftingMenu,
    MapMenu,
    YardexMenu,
    RadialMenuBuilding,
    RadialMenuEmotes,
    RadialMenuQuickchat,
    RadialMenuExecutables,
    RadialMenuHotbar,
    RadialMenuAmmo,
    Container,
    Analyzer,
    Surveyor,
    PlayerList,
    SaveLoadMenu,
    InGameGrounded,
    InGameAerial,
    InGameSwimming,
    InGameUsesAmmo,
    InGameBlock,
    InGameHauling,
    PhotoMode,
};

