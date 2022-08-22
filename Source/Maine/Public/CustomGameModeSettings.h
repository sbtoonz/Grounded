#pragma once
#include "CoreMinimal.h"
#include "EGameDifficulty.h"
#include "EPlayerDeathBehavior.h"
#include "CustomGameModeSettings.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FCustomGameModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EGameDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bCreativeMode: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bEncountersEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bCreaturesIgnorePlayers: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bBuildingIntegrityEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bHungerAndThirstEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bStaminaEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bFriendlyFireEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bDurabilityEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bSpoilingEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bQuestsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bDamageEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bPetInvincible: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bMenusPauseGame: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bWavesEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite)
    EPlayerDeathBehavior DeathBehavior;
    
    FCustomGameModeSettings();
};

