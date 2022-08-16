#pragma once
#include "CoreMinimal.h"
#include "RecipeUnlockMode.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "SurvivalCheatManager.generated.h"

UCLASS()
class MAINE_API USurvivalCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    USurvivalCheatManager();
    UFUNCTION(Exec)
    void WendellFollow();
    
    UFUNCTION(Exec)
    void UnlockRecipe(FName RecipeName);
    
    UFUNCTION(Exec)
    void UnlockPlayerUpgrade(FName UpgradeName);
    
    UFUNCTION(Exec)
    void UnlockItemStackUpgrade(FGameplayTag ItemStackTag);
    
    UFUNCTION(Exec)
    void UnlockAllTechTrees();
    
    UFUNCTION(Exec)
    void UnlockAllTechTreeRecipes();
    
    UFUNCTION(Exec)
    void UnlockAllRecipes(RecipeUnlockMode Mode);
    
    UFUNCTION(Exec)
    void UnlockAllPOIs();
    
    UFUNCTION(Exec)
    void UnlockAllPerks();
    
    UFUNCTION(Exec)
    void UnlockAllKeyItems();
    
    UFUNCTION(Exec)
    void UnlockAllColorThemes();
    
    UFUNCTION(Exec)
    void TryKill();
    
    UFUNCTION(Exec)
    void TryDamage(float DamageAmount);
    
    UFUNCTION(Exec)
    void ToggleSubtitles();
    
    UFUNCTION(Exec)
    void ToggleSpawnPointDebug();
    
    UFUNCTION(Exec)
    void TogglePlayerSpectatorMode();
    
    UFUNCTION(Exec)
    void ToggleHUD();
    
    UFUNCTION(Exec)
    void ToggleCameraShake();
    
    UFUNCTION(Exec)
    void ToggleAlternateRecipeMode();
    
    UFUNCTION(Exec)
    void TimeSpeed(float Multiplier);
    
    UFUNCTION(Exec)
    void TeleportPartyToMe();
    
    UFUNCTION(Exec)
    void TameNearest();
    
    UFUNCTION(Exec)
    void SwapNearbyFoliage(float Radius);
    
    UFUNCTION(Exec)
    void Stamina(bool Enabled);
    
    UFUNCTION(Exec)
    void SpawnBird();
    
    UFUNCTION(Exec)
    void ShowWaveStats();
    
    UFUNCTION(Exec)
    void SetTime(int32 Hour, bool Lock);
    
    UFUNCTION(Exec)
    void SetOverrideLevelName(const FString& LevelName);
    
    UFUNCTION(Exec)
    void SetHungerThirstKill(bool bShouldKill);
    
    UFUNCTION(Exec)
    void SetGlobalValue(const FString& Global, int32 Value);
    
    UFUNCTION(Exec)
    void SetCompletedBurgleQuestCount(int32 Count);
    
    UFUNCTION(Exec)
    void SetBonusEnhancementLevel(FGameplayTag EnhancementTag, int32 BonusEnhancementLevel);
    
    UFUNCTION(Exec)
    void SetBaseEnhancementLevel(int32 BaseEnhancementLevel);
    
    UFUNCTION(Exec)
    void Revive();
    
    UFUNCTION(Exec)
    void ResetConversations();
    
    UFUNCTION(Exec)
    void ResearchAllItems();
    
    UFUNCTION(Exec)
    void RepairAllItems();
    
    UFUNCTION(Exec)
    void RemoveAchievement(FName AchievementName);
    
    UFUNCTION(Exec)
    void RecoverBackpacks();
    
    UFUNCTION(Exec)
    void PopulationMonitorDump();
    
    UFUNCTION(Exec)
    void LogFactionReputations();
    
    UFUNCTION(Exec)
    void LogActorAndFoliageCount();
    
    UFUNCTION(Exec)
    void InfiniteDamage();
    
    UFUNCTION(Exec)
    void GiveItem(FName ItemName, int32 Quantity);
    
    UFUNCTION(Exec)
    void FullRestore();
    
    UFUNCTION(Exec)
    void FreezePlayerSizzle(bool Freeze);
    
    UFUNCTION(Exec)
    void ForceSpawnWave(FGameplayTag TeamName, int32 Heat);
    
    UFUNCTION(Exec)
    void ForceRegenerateBurgleQuests();
    
    UFUNCTION(Exec)
    void ForceEndWave();
    
    UFUNCTION(Exec)
    void Fish();
    
    UFUNCTION(Exec)
    void Fireproof();
    
    UFUNCTION(Exec)
    void FillPheromoneBroadcasters(FGameplayTag PheromoneTag);
    
    UFUNCTION(Exec)
    void EquipItem(FName ItemName);
    
    UFUNCTION(Exec)
    void DumpPreplacedNotProxyableObjects();
    
    UFUNCTION(Exec)
    void DumpOnlyRelevantToOwnerClasses();
    
    UFUNCTION(Exec)
    void DumpMobileReplicatedActors();
    
    UFUNCTION(Exec)
    void DumpAlwaysReplicatedClasses();
    
    UFUNCTION(Exec)
    void DestroyCreaturesHalf();
    
    UFUNCTION(Exec)
    void CompleteActiveDefensePoint();
    
    UFUNCTION(Exec)
    void ClearWaveCooldown();
    
    UFUNCTION(Exec)
    void Clean(float Radius);
    
    UFUNCTION(Exec)
    void BuildAllBuildings();
    
    UFUNCTION(Exec)
    void BreakAllItems();
    
    UFUNCTION(Exec)
    void AwardAchievement(FName AchievementName);
    
    UFUNCTION(Exec)
    void AlmostBreakAllItems();
    
    UFUNCTION(Exec)
    void AdvanceTimeToHour(int32 Hour);
    
    UFUNCTION(Exec)
    void AdvanceTimeByHours(float Hours);
    
    UFUNCTION(Exec)
    void AddStatusEffect(FName StatusEffectName);
    
    UFUNCTION(Exec)
    void AddScience(int32 Amount);
    
    UFUNCTION(Exec)
    void AddReputation(FGameplayTag Faction, int32 Value);
    
    UFUNCTION(Exec)
    void AddPersonalUpgradePoints(int32 Amount);
    
    UFUNCTION(Exec)
    void AddPartyUpgradePoints(int32 Amount);
    
};

