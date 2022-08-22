#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ProcessingTypeGlobalData.h"
#include "ResearchLevelGlobalData.h"
#include "ItemStackUpgradeData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "RecipeModData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ItemBonusEnhancementData.h"
#include "KeyItemDisplayData.h"
#include "GlobalItemData.generated.h"

class USoundEffectSubmixPreset;
class UObject;
class ASpawnedItem;
class UVisualEffect;
class USoundBase;
class ALootBag;
class USurvivalDamageType;

UCLASS(BlueprintType, Const)
class MAINE_API UGlobalItemData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FProcessingTypeGlobalData> ProcessingData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASpawnedItem> DefaultWorldItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASpawnedItem> DefaultEquippedItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* DefaultAIBiteEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UVisualEffect* DefaultAIEatEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttackDurability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BlockDurability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowDurability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AddChargesDurability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<float> DamageDurabilityThresholds;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TotalSpoilingTimeInHours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle TorchItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TotalFireBurnTimeInHours;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> StackSizes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FItemStackUpgradeData> ItemStackUpgrades;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ItemStackBonusPerTier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxItemStackTier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SciencePerResearch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FResearchLevelGlobalData> ResearchLevels;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, int32> ResearchPoints;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ItemUseCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle MushroomBrickItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle RockCandyItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* DefaultCraftingSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FRecipeModData> RecipeModData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ALootBag> LootBag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ALootBag> BuildingLootBag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxBaseEnhancementLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedBaseEnhancementDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UObject> BaseEnhancementItemSlotBG;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle BaseEnhancementItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedArmorBaseEnhancementDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UObject> BaseArmorEnhancementItemSlotBG;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle ArmorBaseEnhancementItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseEnhancementBaseCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseArmorEnhancementBaseCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BaseStatModifierPerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxBonusEnhancementLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumBonusEnhancementTiers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BonusStatModifierPerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BonusDamageTypeStatModifierPerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BonusEnhancementBaseCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BonusArmorEnhancementBaseCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DefaultBonusEnhancementTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag DefaultArmorBonusEnhancementTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FItemBonusEnhancementData> BonusEnhancements;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FKeyItemDisplayData> KeyItemCategories;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FKeyItemDisplayData> KeyItemSubcategories;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FKeyItemDisplayData> BestiaryWeakPointDisplayData;
    
    UPROPERTY(EditDefaultsOnly)
    float ImpactEffectDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float MinImpactThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxImpactThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float MinImpactVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxImpactVolume;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag GasMaskItemTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundEffectSubmixPreset* GasMaskReverb;
    
    UGlobalItemData();
    UFUNCTION(BlueprintPure)
    FRecipeModData GetRecipeModData(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    float GetBonusStatModifier(int32 BonusEnhancementLevel, FGameplayTag BonusEnhancementType) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetBonusEnhancementTypes() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetBonusEnhancementRepairItem(FGameplayTag BonusEnhancementType) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusEnhancementItemCost(int32 BonusEnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetBonusEnhancementItem(FGameplayTag BonusEnhancementType, int32 BonusEnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USurvivalDamageType> GetBonusEnhancementDamageType(FGameplayTag BonusEnhancementType) const;
    
    UFUNCTION(BlueprintPure)
    float GetBaseStatModifier(int32 EnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBaseEnhancementItemCost(int32 EnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetArmorBonusEnhancementItemCost(int32 BonusEnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetArmorBaseEnhancementItemCost(int32 EnhancementLevel) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesBonusEnhancementUnlockStatusEffects(FGameplayTag BonusEnhancementType) const;
    
};

