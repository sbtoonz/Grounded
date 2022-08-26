#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnLaunchAttackDelegate.h"
#include "PersistentObject.h"
#include "OnHitWithAttackDelegate.h"
#include "StatusEffectOrigin.h"
#include "OnPowerStateChangedDelegate.h"
#include "OnSelectedAmmoChangedDelegate.h"
#include "OnItemChangedDelegate.h"
#include "Engine/DataTable.h"
#include "EGardenModifierType.h"
#include "PowerReservoir.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "LocString.h"
#include "EThrowAttackType.h"
#include "ESpoilState.h"
#include "EItemType.h"
#include "RecipeRequirements.h"
#include "BaseItemData.h"
#include "EHUDMarkerType.h"
#include "EEquipmentSlot.h"
#include "UObject/NoExportTypes.h"
#include "EStatusEffectType.h"
#include "Item.generated.h"

class ASpawnedItem;
class USpawnedItemLODActor;
class UItem;
class UAttackCombo;
class UAttack;
class USoundCue;
class AActor;
class USurvivalDamageType;

UCLASS(Blueprintable)
class MAINE_API UItem : public UPersistentObject, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<USpawnedItemLODActor> ItemVisuals;
    
    UPROPERTY(BlueprintReadWrite)
    FOnPowerStateChanged OnPowerStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite)
    FOnLaunchAttack OnLaunchAttack;
    
    UPROPERTY(BlueprintReadWrite)
    FOnHitWithAttack OnHitWithAttack;
    
    UPROPERTY(BlueprintReadWrite)
    FOnSelectedAmmoChanged OnSelectedAmmoChanged;
    
    UPROPERTY(BlueprintReadWrite)
    FOnItemChanged OnItemChanged;
    
    UPROPERTY(BlueprintReadWrite)
    FOnItemChanged OnItemEnhanced;
    
protected:
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_ItemDataRowHandle)
    FDataTableRowHandle ItemDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_PropertyChanged)
    int32 StackSize;
    
    UPROPERTY(BlueprintReadWrite,Replicated)
    int32 InventorySlot;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float SpoilEndTime;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float PausedSpoilProgress;
    
    UPROPERTY(BlueprintReadWrite, Replicated)
    float HatchEndTime;
    
    UPROPERTY(ReplicatedUsing=OnRep_SelectedAmmoType)
    FName SelectedAmmoType;
    
    UPROPERTY(Transient)
    UAttackCombo* AttackCombo;
    
    UPROPERTY(Transient)
    UAttackCombo* AlternateAttackCombo;
    
    UPROPERTY(Transient)
    UAttackCombo* SwimmingAttackCombo;
    
    UPROPERTY(Transient)
    TMap<FName, UAttack*> AmmoAttacks;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_PropertyChanged)
    float PowerUsed;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_IsPowerOn)
    uint8 IsPowerOn: 1;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PowerReservoir)
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_PropertyChanged)
    float DurabilityRemaining;
    
    UPROPERTY(BlueprintReadWrite, BlueprintReadWrite, Replicated)
    FString SourceCreatureName;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_EnhancementChanged)
    int32 BaseEnhancementLevel;
    
    UPROPERTY(ReplicatedUsing=OnRep_EnhancementChanged)
    int32 BonusEnhancementLevel;
    
    UPROPERTY(BlueprintReadWrite, ReplicatedUsing=OnRep_EnhancementChanged)
    FGameplayTag BonusEnhancementType;
    
public:
    UItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool UsesPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintCallable)
    bool UsesPower() const;
    
    UFUNCTION(BlueprintCallable)
    bool UsesAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    float TryAddPower(FGameplayTag PowerType, float Charges, AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    int32 SetStackSize(int32 InStackSize);
    
    UFUNCTION(BlueprintCallable)
    void SetInventorySlot(int32 Slot);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAllDurability();
    
    UFUNCTION(BlueprintCallable)
    bool RemovePowerCharges(float Count);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDurability(float Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SelectedAmmoType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PropertyChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerReservoir();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemDataRowHandle(FDataTableRowHandle PreviousHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPowerOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_EnhancementChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPowerStoredChanged(const FGameplayTag& PowerType, float ChargesStored);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValidBonusEnhancementType(FGameplayTag EnhancementType) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsStackFull() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPowerFull() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPowerEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPersonalKeyItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPartyKeyItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLightSource() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInstanceOf(const FDataTableRowHandle& Row) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFullyCharged() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAtMaxDurability() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsArmorItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAHaulingItem();
    
    UFUNCTION(BlueprintCallable)
    int32 IncrementStackSize();
    
    UFUNCTION(BlueprintCallable)
    bool HasTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasConversation() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasConsumableEffectEver() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasConsumableEffect() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyTag(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetValidBonusEnhancementTags() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UItem*> GetValidAmmoTypes() const;
    
    UFUNCTION(BlueprintCallable)
    FLocString GetTypeDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTotalSpoilTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTotalHatchTime() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalEnhancementLevels() const;
    
    UFUNCTION(BlueprintCallable)
    float GetThrowSpeedMultiplierInWater() const;
    
    UFUNCTION(BlueprintCallable)
    float GetThrowSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    EThrowAttackType GetThrowAttackType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetThrowAttackDelay() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetTechTreeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    UAttack* GetSwimmingAttack(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStackSize() const;
    
    UFUNCTION(BlueprintCallable)
    ESpoilState GetSpoilState() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSpoilProgress() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetSourceCreatureName() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetSelectedAmmoType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    void GetRepairRequirements(TArray<FRecipeRequirements>& OutRequirements) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetProcessedResultItemCount(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetProcessedResultItem(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable)
    FPowerReservoir GetPowerReservoir();
    
    UFUNCTION(BlueprintCallable)
    float GetPowerPercentage() const;
    
    UFUNCTION(BlueprintCallable)
    USoundCue* GetPickupAudio();
    
    UFUNCTION(BlueprintCallable)
    float GetPercentageDamageReduction() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FDataTableRowHandle> GetNewResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxStackSize() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxHaulingAmount();
    
    UFUNCTION(BlueprintCallable)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable)
    USpawnedItemLODActor* GetLodItemVisuals() const;
    
    UFUNCTION(BlueprintCallable)
    ASpawnedItem* GetItemVisuals() const;
    
    UFUNCTION(BlueprintCallable)
    EItemType GetItemType();
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetItemRequiredForEnhancement() const;
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetItemDataRowHandle() const;
    
    UFUNCTION(BlueprintCallable)
    FBaseItemData GetItemData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountRequiredForBonusEnhancement() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountRequiredForBaseEnhancement() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPowerOn();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    float GetImpactSoundRange() const;
    
    UFUNCTION(BlueprintCallable)
    float GetImpactSoundIntensity() const;
    
    UFUNCTION(BlueprintCallable)
    FDataTableRowHandle GetImpactAttack() const;
    
    UFUNCTION(BlueprintCallable)
    EHUDMarkerType GetHUDMarkerType();
    
    UFUNCTION(BlueprintCallable)
    float GetHatchProgress() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGlideTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGardenModifierValue() const;
    
    UFUNCTION(BlueprintCallable)
    EGardenModifierType GetGardenModifierType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFlatDamageReduction() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetEquippedOwner() const;
    
    UFUNCTION(BlueprintCallable)
    EEquipmentSlot GetEquipmentSlot() const;
    
    UFUNCTION(BlueprintCallable)
    USoundCue* GetEquipAudio();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnhancementLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityRemaining() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityRatio() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityModifier() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable)
    FLocString GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDamageReductionModifier() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetConversationStartNode() const;
    
    UFUNCTION(BlueprintCallable)
    FGuid GetConversationID() const;
    
    UFUNCTION(BlueprintCallable)
    USoundCue* GetConsumeAudio();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetBonusEnhancementType() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBonusEnhancementLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBlockStaminaRegenMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBlockStaminaCost() const;
    
    UFUNCTION(BlueprintCallable)
    float GetBlockDamageMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAvailableStackSize() const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAttackSpeedText() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetAttackSpeedTag() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<USurvivalDamageType> GetAttackDamageTypeModifier() const;
    
    UFUNCTION(BlueprintCallable)
    uint8 GetAttackDamageTypeFlags();
    
    UFUNCTION(BlueprintCallable)
    float GetAttackDamageModifier() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAmmoTypes() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePower(bool bPowerEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DumpPower(const AActor* Dumper);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyOnThrowAttack() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecrementStackSize();
    
    UFUNCTION(BlueprintCallable)
    bool ConsumesPowerDuringRest() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCharge();
    
    UFUNCTION(BlueprintCallable)
    bool CanUse(const AActor* Instigator) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanTrash() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanThrowUnderWater() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanThrow() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanStack() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanSpoil();
    
    UFUNCTION(BlueprintCallable)
    bool CanRepairNow() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanRepair() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanProcess(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanPowerBeUsedInWater() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanHatch();
    
    UFUNCTION(BlueprintCallable)
    bool CanGetBonusEnhancements() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEverUse() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEverEnhance() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEverDumpPower() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEquipTo(const AActor* Character) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEnhance() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanDumpPower() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanBlock() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAnalyze() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAddPower(FGameplayTag PowerType, float Charges) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAcceptPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintCallable)
    bool AppliesPositiveSurvivalStatOnConsume(EStatusEffectType StatusEffectType, bool IgnoreNegativeEffects);
    
    UFUNCTION(BlueprintCallable)
    bool AlwaysOn() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AdjustStackSize(int32 AmountToAdjustBy);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharges(FGameplayTag PowerTag, float ChargesToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

