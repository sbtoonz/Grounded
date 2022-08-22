#include "CustomGameModeSettings.h"

FCustomGameModeSettings::FCustomGameModeSettings() {
    this->GameDifficulty = EGameDifficulty::Relaxed;
    this->bCreativeMode = false;
    this->bEncountersEnabled = false;
    this->bCreaturesIgnorePlayers = false;
    this->bBuildingIntegrityEnabled = false;
    this->bHungerAndThirstEnabled = false;
    this->bStaminaEnabled = false;
    this->bFriendlyFireEnabled = false;
    this->bDurabilityEnabled = false;
    this->bSpoilingEnabled = false;
    this->bQuestsEnabled = false;
    this->bDamageEnabled = false;
    this->bPetInvincible = false;
    this->bMenusPauseGame = false;
    this->bWavesEnabled = false;
    this->DeathBehavior = EPlayerDeathBehavior::DropItemsOnDeath;
}

