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

UCLASS(BlueprintType)
class MAINE_API UItem : public UPersistentObject, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<USpawnedItemLODActor> ItemVisuals;
    
    UPROPERTY(BlueprintAssignable)
    FOnPowerStateChanged OnPowerStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnLaunchAttack OnLaunchAttack;
    
    UPROPERTY(BlueprintAssignable)
    FOnHitWithAttack OnHitWithAttack;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectedAmmoChanged OnSelectedAmmoChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemChanged OnItemChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemChanged OnItemEnhanced;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_ItemDataRowHandle)
    FDataTableRowHandle ItemDataRowHandle;
    
    UPROPERTY(ReplicatedUsing=OnRep_PropertyChanged)
    int32 StackSize;
    
    UPROPERTY(Replicated)
    int32 InventorySlot;
    
    UPROPERTY(Replicated)
    float SpoilEndTime;
    
    UPROPERTY(Replicated)
    float PausedSpoilProgress;
    
    UPROPERTY(Replicated)
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
    
    UPROPERTY(ReplicatedUsing=OnRep_PropertyChanged)
    float PowerUsed;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsPowerOn)
    uint8 IsPowerOn: 1;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_PowerReservoir)
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(ReplicatedUsing=OnRep_PropertyChanged)
    float DurabilityRemaining;
    
    UPROPERTY(Replicated)
    FString SourceCreatureName;
    
    UPROPERTY(ReplicatedUsing=OnRep_EnhancementChanged)
    int32 BaseEnhancementLevel;
    
    UPROPERTY(ReplicatedUsing=OnRep_EnhancementChanged)
    int32 BonusEnhancementLevel;
    
    UPROPERTY(ReplicatedUsing=OnRep_EnhancementChanged)
    FGameplayTag BonusEnhancementType;
    
public:
    UItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool UsesPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintPure)
    bool UsesPower() const;
    
    UFUNCTION(BlueprintPure)
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
    UFUNCTION()
    void OnRep_SelectedAmmoType();
    
    UFUNCTION()
    void OnRep_PropertyChanged();
    
    UFUNCTION()
    void OnRep_PowerReservoir();
    
    UFUNCTION()
    void OnRep_ItemDataRowHandle(FDataTableRowHandle PreviousHandle);
    
    UFUNCTION()
    void OnRep_IsPowerOn();
    
    UFUNCTION()
    void OnRep_EnhancementChanged();
    
    UFUNCTION()
    void OnPowerStoredChanged(const FGameplayTag& PowerType, float ChargesStored);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidBonusEnhancementType(FGameplayTag EnhancementType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsStackFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPowerFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPowerEmpty() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPersonalKeyItem() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPartyKeyItem() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLightSource() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInstanceOf(const FDataTableRowHandle& Row) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFullyCharged() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAtMaxDurability() const;
    
    UFUNCTION(BlueprintPure)
    bool IsArmorItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAHaulingItem();
    
    UFUNCTION(BlueprintCallable)
    int32 IncrementStackSize();
    
    UFUNCTION(BlueprintPure)
    bool HasTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintPure)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintPure)
    bool HasConversation() const;
    
    UFUNCTION(BlueprintPure)
    bool HasConsumableEffectEver() const;
    
    UFUNCTION(BlueprintPure)
    bool HasConsumableEffect() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetValidBonusEnhancementTags() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetValidAmmoTypes() const;
    
    UFUNCTION(BlueprintPure)
    FLocString GetTypeDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalSpoilTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetTotalHatchTime() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalEnhancementLevels() const;
    
    UFUNCTION(BlueprintPure)
    float GetThrowSpeedMultiplierInWater() const;
    
    UFUNCTION(BlueprintPure)
    float GetThrowSpeedMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    EThrowAttackType GetThrowAttackType() const;
    
    UFUNCTION(BlueprintPure)
    float GetThrowAttackDelay() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetTechTreeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    UAttack* GetSwimmingAttack(int32 Index);
    
    UFUNCTION(BlueprintPure)
    int32 GetStackSize() const;
    
    UFUNCTION(BlueprintPure)
    ESpoilState GetSpoilState() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpoilProgress() const;
    
    UFUNCTION(BlueprintPure)
    FString GetSourceCreatureName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetSelectedAmmoType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintPure)
    void GetRepairRequirements(TArray<FRecipeRequirements>& OutRequirements) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetRecipeUnlocks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetProcessedResultItemCount(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetProcessedResultItem(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintPure)
    FPowerReservoir GetPowerReservoir();
    
    UFUNCTION(BlueprintPure)
    float GetPowerPercentage() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetPickupAudio();
    
    UFUNCTION(BlueprintPure)
    float GetPercentageDamageReduction() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetNewResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxStackSize() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxHaulingAmount();
    
    UFUNCTION(BlueprintPure)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintPure)
    USpawnedItemLODActor* GetLodItemVisuals() const;
    
    UFUNCTION(BlueprintPure)
    ASpawnedItem* GetItemVisuals() const;
    
    UFUNCTION(BlueprintCallable)
    EItemType GetItemType();
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetItemRequiredForEnhancement() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetItemDataRowHandle() const;
    
    UFUNCTION(BlueprintPure)
    FBaseItemData GetItemData();
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountRequiredForBonusEnhancement() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountRequiredForBaseEnhancement() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPowerOn();
    
    UFUNCTION(BlueprintPure)
    int32 GetInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactSoundRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetImpactSoundIntensity() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetImpactAttack() const;
    
    UFUNCTION(BlueprintCallable)
    EHUDMarkerType GetHUDMarkerType();
    
    UFUNCTION(BlueprintPure)
    float GetHatchProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetGlideTimeRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetGardenModifierValue() const;
    
    UFUNCTION(BlueprintPure)
    EGardenModifierType GetGardenModifierType() const;
    
    UFUNCTION(BlueprintPure)
    float GetFlatDamageReduction() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetEquippedOwner() const;
    
    UFUNCTION(BlueprintPure)
    EEquipmentSlot GetEquipmentSlot() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetEquipAudio();
    
    UFUNCTION(BlueprintPure)
    int32 GetEnhancementLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetDurabilityRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetDurabilityRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetDurabilityModifier() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FLocString GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageReductionModifier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetConversationStartNode() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetConversationID() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetConsumeAudio();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetBonusEnhancementType() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusEnhancementLevel() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlockStaminaRegenMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlockStaminaCost() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlockDamageMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAvailableStackSize() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAttackSpeedText() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAttackSpeedTag() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USurvivalDamageType> GetAttackDamageTypeModifier() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetAttackDamageTypeFlags();
    
    UFUNCTION(BlueprintPure)
    float GetAttackDamageModifier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetAmmoTypes() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePower(bool bPowerEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DumpPower(const AActor* Dumper);
    
    UFUNCTION(BlueprintPure)
    bool DestroyOnThrowAttack() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecrementStackSize();
    
    UFUNCTION(BlueprintPure)
    bool ConsumesPowerDuringRest() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCharge();
    
    UFUNCTION(BlueprintPure)
    bool CanUse(const AActor* Instigator) const;
    
    UFUNCTION(BlueprintPure)
    bool CanTrash() const;
    
    UFUNCTION(BlueprintPure)
    bool CanThrowUnderWater() const;
    
    UFUNCTION(BlueprintPure)
    bool CanThrow() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStack() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSpoil();
    
    UFUNCTION(BlueprintPure)
    bool CanRepairNow() const;
    
    UFUNCTION(BlueprintPure)
    bool CanRepair() const;
    
    UFUNCTION(BlueprintPure)
    bool CanProcess(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintPure)
    bool CanPowerBeUsedInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool CanHatch();
    
    UFUNCTION(BlueprintPure)
    bool CanGetBonusEnhancements() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEverUse() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEverEnhance() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEverDumpPower() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquipTo(const AActor* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintPure)
    bool CanEnhance() const;
    
    UFUNCTION(BlueprintPure)
    bool CanDumpPower() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBlock() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAnalyze() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddPower(FGameplayTag PowerType, float Charges) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAcceptPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintCallable)
    bool AppliesPositiveSurvivalStatOnConsume(EStatusEffectType StatusEffectType, bool IgnoreNegativeEffects);
    
    UFUNCTION(BlueprintPure)
    bool AlwaysOn() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AdjustStackSize(int32 AmountToAdjustBy);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharges(FGameplayTag PowerTag, float ChargesToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

