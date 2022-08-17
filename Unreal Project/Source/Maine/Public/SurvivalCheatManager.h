#pragma once
#include "CoreMinimal.h"
#include "RecipeUnlockMode.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "SurvivalCheatManager.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USurvivalCheatManager();
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void WendellFollow();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockRecipe(FName RecipeName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockPlayerUpgrade(FName UpgradeName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockItemStackUpgrade(FGameplayTag ItemStackTag);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllTechTrees();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllTechTreeRecipes();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllRecipes(RecipeUnlockMode Mode);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllPOIs();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllPerks();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllKeyItems();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void UnlockAllColorThemes();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TryKill();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TryDamage(float DamageAmount);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ToggleSubtitles();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ToggleSpawnPointDebug();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TogglePlayerSpectatorMode();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ToggleHUD();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ToggleCameraShake();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ToggleAlternateRecipeMode();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TimeSpeed(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TeleportPartyToMe();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void TameNearest();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SwapNearbyFoliage(float Radius);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void Stamina(bool Enabled);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SpawnBird();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ShowWaveStats();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetTime(int32 Hour, bool Lock);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetOverrideLevelName(const FString& LevelName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetHungerThirstKill(bool bShouldKill);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetGlobalValue(const FString& Global, int32 Value);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetCompletedBurgleQuestCount(int32 Count);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetBonusEnhancementLevel(FGameplayTag EnhancementTag, int32 BonusEnhancementLevel);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void SetBaseEnhancementLevel(int32 BaseEnhancementLevel);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void Revive();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ResetConversations();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ResearchAllItems();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void RepairAllItems();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void RemoveAchievement(FName AchievementName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void RecoverBackpacks();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void PopulationMonitorDump();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void LogFactionReputations();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void LogActorAndFoliageCount();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void InfiniteDamage();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void GiveItem(FName ItemName, int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void FullRestore();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void FreezePlayerSizzle(bool Freeze);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ForceSpawnWave(FGameplayTag TeamName, int32 Heat);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ForceRegenerateBurgleQuests();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ForceEndWave();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void Fish();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void Fireproof();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void FillPheromoneBroadcasters(FGameplayTag PheromoneTag);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void EquipItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void DumpPreplacedNotProxyableObjects();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void DumpOnlyRelevantToOwnerClasses();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void DumpMobileReplicatedActors();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void DumpAlwaysReplicatedClasses();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void DestroyCreaturesHalf();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void CompleteActiveDefensePoint();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void ClearWaveCooldown();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void Clean(float Radius);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void BuildAllBuildings();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void BreakAllItems();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AwardAchievement(FName AchievementName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AlmostBreakAllItems();
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AdvanceTimeToHour(int32 Hour);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AdvanceTimeByHours(float Hours);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AddStatusEffect(FName StatusEffectName);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AddScience(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AddReputation(FGameplayTag Faction, int32 Value);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AddPersonalUpgradePoints(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Category="SurvivalCheatManager", Exec)
    void AddPartyUpgradePoints(int32 Amount);
    
};

