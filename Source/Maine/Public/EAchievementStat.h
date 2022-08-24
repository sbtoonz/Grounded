#pragma once
#include "CoreMinimal.h"
#include "EAchievementStat.generated.h"

UENUM(BlueprintType)
enum class EAchievementStat : uint8 {
    None,
    UpgradesPurchased_Party,
    MutationsUnlocked_Personal,
    ResourcesAnalyzed_Party,
    Tier2EquipmentSetWorn_Personal,
    Tier3ItemCrafted_Personal,
    ColorThemesUnlocked_Party,
    MushroomBrickBuilding_Party,
    SitesDiscovered_Party,
    SatInChair_Personal,
    MilkMolarsSpent_Personal,
    BrainpowerLevel_Party,
    Tier3ItemFullyUpgraded_Personal,
    Tier3ArrowCrafted_Personal,
};

