#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PersistentObject.h"
#include "LocString.h"
#include "PowerReservoir.h"
#include "StatusEffectOrigin.h"
#include "UObject/NoExportTypes.h"
#include "OnPowerStateChangedDelegate.h"
#include "OnLaunchAttackDelegate.h"
#include "OnHitWithAttackDelegate.h"
#include "OnSelectedAmmoChangedDelegate.h"
#include "OnItemChangedDelegate.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EThrowAttackType.h"
#include "ESpoilState.h"
#include "RecipeRequirements.h"
#include "EItemType.h"
#include "BaseItemData.h"
#include "EHUDMarkerType.h"
#include "EGardenModifierType.h"
#include "EEquipmentSlot.h"
#include "EStatusEffectType.h"
#include "Item.generated.h"

class USpawnedItemLODActor;
class UAttackCombo;
class UAttack;
class AActor;
class UItem;
class USoundCue;
class ASpawnedItem;
class USurvivalDamageType;

UCLASS(Blueprintable)
class MAINE_API UItem : public UPersistentObject, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<USpawnedItemLODActor> ItemVisuals;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerStateChanged OnPowerStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaunchAttack OnLaunchAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitWithAttack OnHitWithAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectedAmmoChanged OnSelectedAmmoChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemChanged OnItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemChanged OnItemEnhanced;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemDataRowHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    int32 StackSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SpoilEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PausedSpoilProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HatchEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SelectedAmmoType, meta=(AllowPrivateAccess=true))
    FName SelectedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackCombo* AttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackCombo* AlternateAttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttackCombo* SwimmingAttackCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UAttack*> AmmoAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    float PowerUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPowerOn, meta=(AllowPrivateAccess=true))
    uint8 IsPowerOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PowerReservoir, meta=(AllowPrivateAccess=true))
    FPowerReservoir PowerReservoir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    float DurabilityRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString SourceCreatureName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnhancementChanged, meta=(AllowPrivateAccess=true))
    int32 BaseEnhancementLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnhancementChanged, meta=(AllowPrivateAccess=true))
    int32 BonusEnhancementLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnhancementChanged, meta=(AllowPrivateAccess=true))
    FGameplayTag BonusEnhancementType;
    
public:
    UItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UsesPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidBonusEnhancementType(FGameplayTag EnhancementType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStackFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPersonalKeyItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyKeyItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLightSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstanceOf(const FDataTableRowHandle& Row) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullyCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArmorItem() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAHaulingItem();
    
    UFUNCTION(BlueprintCallable)
    int32 IncrementStackSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConversation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConsumableEffectEver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasConsumableEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyTag(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetValidBonusEnhancementTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetValidAmmoTypes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLocString GetTypeDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalSpoilTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalHatchTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalEnhancementLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowSpeedMultiplierInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EThrowAttackType GetThrowAttackType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowAttackDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetTechTreeUnlocks() const;
    
    UFUNCTION(BlueprintCallable)
    UAttack* GetSwimmingAttack(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpoilState GetSpoilState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpoilProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSourceCreatureName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedAmmoType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRepairRequirements(TArray<FRecipeRequirements>& OutRequirements) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingAmmo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProcessedResultItemCount(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetProcessedResultItem(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPowerReservoir GetPowerReservoir();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetPickupAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPercentageDamageReduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetNewResearchRecipeUnlocks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxStackSize() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxHaulingAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnedItemLODActor* GetLodItemVisuals() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASpawnedItem* GetItemVisuals() const;
    
    UFUNCTION(BlueprintCallable)
    EItemType GetItemType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetItemRequiredForEnhancement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetItemDataRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBaseItemData GetItemData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCountRequiredForBonusEnhancement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCountRequiredForBaseEnhancement() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPowerOn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImpactSoundRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetImpactSoundIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetImpactAttack() const;
    
    UFUNCTION(BlueprintCallable)
    EHUDMarkerType GetHUDMarkerType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHatchProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlideTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGardenModifierValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGardenModifierType GetGardenModifierType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlatDamageReduction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetEquippedOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentSlot GetEquipmentSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetEquipAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnhancementLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLocString GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageReductionModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConversationStartNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetConversationID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetConsumeAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetBonusEnhancementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBonusEnhancementLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockStaminaRegenMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockStaminaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlockDamageMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableStackSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAttackSpeedText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAttackSpeedTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USurvivalDamageType> GetAttackDamageTypeModifier() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetAttackDamageTypeFlags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackDamageModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAmmoTypes() const;
    
    UFUNCTION(BlueprintCallable)
    void EnablePower(bool bPowerEnabled);
    
    UFUNCTION(BlueprintCallable)
    void DumpPower(const AActor* Dumper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DestroyOnThrowAttack() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecrementStackSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ConsumesPowerDuringRest() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeCharge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse(const AActor* Instigator) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTrash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrowUnderWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanThrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpoil();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRepairNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRepair() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProcess(FGameplayTag ProcessingType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPowerBeUsedInWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGetBonusEnhancements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverEnhance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverDumpPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipTo(const AActor* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnhance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDumpPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAnalyze() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddPower(FGameplayTag PowerType, float Charges) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAcceptPowerType(FGameplayTag PowerType) const;
    
    UFUNCTION(BlueprintCallable)
    bool AppliesPositiveSurvivalStatOnConsume(EStatusEffectType StatusEffectType, bool IgnoreNegativeEffects);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AlwaysOn() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AdjustStackSize(int32 AmountToAdjustBy);
    
    UFUNCTION(BlueprintCallable)
    bool AddCharges(FGameplayTag PowerTag, float ChargesToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

