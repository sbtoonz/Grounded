#include "SurvivalGameModeSettings.h"

FCustomGameModeSettings USurvivalGameModeSettings::CreateCustomSettings() const {
    return FCustomGameModeSettings{};
}

USurvivalGameModeSettings::USurvivalGameModeSettings() {
    this->bUnlockAllRecipes = false;
    this->bAutoCompleteBuildings = false;
    this->bEnableBuildingIntegrity = false;
    this->bRecipesRequireIngredients = true;
    this->bEncountersEnabled = true;
    this->bCreaturesIgnorePlayers = false;
    this->bHungerAndThirstEnabled = true;
    this->bStaminaEnabled = true;
    this->bDamageEnabled = true;
    this->bFriendlyFire = true;
    this->bSizzleEnabled = true;
    this->bSpoilingEnabled = true;
    this->bMenusPauseGame = false;
    this->bQuestsEnabled = true;
    this->bPetInvincible = false;
    this->bWavesEnabled = true;
    this->HungerAndThirstMultiplier = 1.00f;
    this->PlayerDamageMultiplier = 1.00f;
    this->EnemyDamageMultiplier = 1.00f;
    this->BuildingHealthMultiplier = 1.00f;
    this->HeatMultiplier = 1.00f;
    this->ItemSpoilageMultiplier = 1.00f;
    this->ItemDurabilityMultiplier = 1.00f;
    this->ItemDurabilityPenaltyOnDeathPercentage = 0.00f;
    this->SizzleMultiplier = 1.00f;
    this->DeathBehavior = EPlayerDeathBehavior::DropItemsOnDeath;
}

