#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "CustomGameModeSettings.h"
#include "EPlayerDeathBehavior.h"
#include "SurvivalGameModeSettings.generated.h"

UCLASS(BlueprintType)
class MAINE_API USurvivalGameModeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUnlockAllRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoCompleteBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableBuildingIntegrity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecipesRequireIngredients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEncountersEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCreaturesIgnorePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHungerAndThirstEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStaminaEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDamageEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSizzleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSpoilingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMenusPauseGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bQuestsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPetInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWavesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HungerAndThirstMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayerDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnemyDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuildingHealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeatMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemSpoilageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemDurabilityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ItemDurabilityPenaltyOnDeathPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SizzleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPlayerDeathBehavior DeathBehavior;
    
    USurvivalGameModeSettings();
    UFUNCTION(BlueprintPure)
    FCustomGameModeSettings CreateCustomSettings() const;
    
};

