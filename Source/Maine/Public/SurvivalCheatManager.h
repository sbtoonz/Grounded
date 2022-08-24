#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "RecipeUnlockMode.h"
#include "SurvivalCheatManager.generated.h"

UCLASS(Blueprintable)
class MAINE_API USurvivalCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USurvivalCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void WendellFollow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockRecipe(FName RecipeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockPlayerUpgrade(FName UpgradeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockItemStackUpgrade(FGameplayTag ItemStackTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllTechTrees();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllTechTreeRecipes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllRecipes(RecipeUnlockMode Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllPOIs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllPerks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllKeyItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllColorThemes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TryKill();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TryDamage(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSubtitles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSpawnPointDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerSpectatorMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCameraShake();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAlternateRecipeMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TimeSpeed(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportPartyToMe();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TameNearest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwapNearbyFoliage(float Radius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Stamina(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnBird();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowWaveStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTime(int32 Hour, bool Lock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetOverrideLevelName(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHungerThirstKill(bool bShouldKill);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGlobalValue(const FString& Global, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCompletedBurgleQuestCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBonusEnhancementLevel(FGameplayTag EnhancementTag, int32 BonusEnhancementLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBaseEnhancementLevel(int32 BaseEnhancementLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Revive();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetConversations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResearchAllItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RepairAllItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveAchievement(FName AchievementName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RecoverBackpacks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PopulationMonitorDump();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogFactionReputations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogActorAndFoliageCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteDamage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveItem(FName ItemName, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FullRestore();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FreezePlayerSizzle(bool Freeze);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSpawnWave(FGameplayTag TeamName, int32 Heat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceRegenerateBurgleQuests();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceEndWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Fish();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Fireproof();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FillPheromoneBroadcasters(FGameplayTag PheromoneTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EquipItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpPreplacedNotProxyableObjects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpOnlyRelevantToOwnerClasses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMobileReplicatedActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAlwaysReplicatedClasses();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyCreaturesHalf();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteActiveDefensePoint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearWaveCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Clean(float Radius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildAllBuildings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BreakAllItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AwardAchievement(FName AchievementName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AlmostBreakAllItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdvanceTimeToHour(int32 Hour);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AdvanceTimeByHours(float Hours);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddStatusEffect(FName StatusEffectName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddScience(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddReputation(FGameplayTag Faction, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPersonalUpgradePoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddPartyUpgradePoints(int32 Amount);
    
};

