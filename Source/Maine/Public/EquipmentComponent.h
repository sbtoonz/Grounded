#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnEquipmentItemChangedDelegate.h"
#include "OnEquipmentChangeFailureFromFullInventoryDelegate.h"
#include "StatusEffectOrigin.h"
#include "PersistentInterface.h"
#include "OnEquipmentVisualsChangedDelegate.h"
#include "ItemContainerInterface.h"
#include "LODableComponentInterface.h"
#include "OnEquipmentChangedDelegate.h"
#include "OnItemBrokenDelegateDelegate.h"
#include "OnItemPowerChangedDelegateDelegate.h"
#include "ItemDataPreloadAssets.h"
#include "EItemVisualsPriority.h"
#include "EEquipmentSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ECameraDisplayMode.h"
#include "EEquipmentChangeFailureFromFullInventoryStimulus.h"
#include "EquipmentComponent.generated.h"

class UItem;
class UHaulingComponent;
class ASurvivalCharacter;
class UInventoryComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEquipmentComponent : public UActorComponent, public IStatusEffectOrigin, public IPersistentInterface, public IItemContainerInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentChanged OnEquipmentChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentItemChanged OnEquipmentItemChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentItemChanged OnEquipmentItemEnhanced;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentVisualsChanged OnEquipmentVisualsChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemBrokenDelegate OnItemBroken;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemPowerChangedDelegate OnItemPowerChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemPowerChangedDelegate OnItemPowerDepleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnEquipmentChangeFailureFromFullInventory OnEquipmentChangeFailureFromFullInventory;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasMainHand: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasOffHand: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasHead: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasChest: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasArms: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasLegs: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bHasGlider: 1;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_MainHand)
    UItem* MainHand;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OffHand)
    UItem* OffHand;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Head)
    UItem* Head;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Chest)
    UItem* Chest;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Arms)
    UItem* Arms;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Legs)
    UItem* Legs;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Glider)
    UItem* Glider;
    
    UPROPERTY(Transient)
    UItem* PreviousMainHandItem;
    
    UPROPERTY(Transient)
    UItem* PreviousOffHandItem;
    
    UPROPERTY(Transient)
    ASurvivalCharacter* OwnerCharacter;
    
    UPROPERTY(Export, Transient)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(Export, Transient)
    UHaulingComponent* HaulingComponent;
    
    UPROPERTY(Transient)
    FItemDataPreloadAssets MainHandPreloader;
    
    UPROPERTY(Transient)
    FItemDataPreloadAssets ChestPreloader;
    
    UPROPERTY(Transient)
    TArray<UItem*> SerializedEquippedItems;
    
public:
    UEquipmentComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SpawnVisuals(UItem* Item, FName Socket, EItemVisualsPriority Priority);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnequipItemSlot(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnequipItem(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipPreviousMainHand();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipItemToSlot(UItem* Equippable, EEquipmentSlot Slot);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipItem(UItem* Equippable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDumpItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisarmWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateAndEquipItemData(FDataTableRowHandle RowData);
    
private:
    UFUNCTION()
    void OnUnderwaterChanged(bool IsUnderwater);
    
    UFUNCTION()
    void OnRep_OffHand(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_MainHand(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_Legs(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_Head(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_Glider(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_Chest(UItem* LastEquippable);
    
    UFUNCTION()
    void OnRep_Arms(UItem* LastEquippable);
    
    UFUNCTION()
    void OnItemEnhanced();
    
    UFUNCTION()
    void OnItemChanged();
    
    UFUNCTION()
    void OnHaulEnd(UHaulingComponent* Sender);
    
    UFUNCTION()
    void OnHaulBegin(UHaulingComponent* Sender);
    
    UFUNCTION()
    void OnCameraModeChanged(ECameraDisplayMode DisplayMode);
    
public:
    UFUNCTION(BlueprintCallable)
    UItem* LocalUnequipItemInSlot(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintCallable)
    UItem* LocalUnequipItem(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintCallable)
    void LocalEquipItemToSlot(UItem* Equippable, EEquipmentSlot Slot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintPure)
    bool IsItemRowHandleEquipped(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemEquipped(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyItemEquipped() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetWeapon() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStance() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetPreviousItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetOffhandStance() const;
    
    UFUNCTION(BlueprintPure)
    EEquipmentSlot GetItemSlot(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCount(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    UFUNCTION(BlueprintPure)
    float GetAverageEquippedTier() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle> GetActiveItemSetStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipItemData(FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyVisuals(UItem* Item);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyItemPowerDepleted(UItem* Item);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyItemBroken(UItem* Item, bool ItemDroppedInWorld);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyEquipmentChangeFailureFromFullInventory(EEquipmentChangeFailureFromFullInventoryStimulus FailureStimulus);
    
    
    // Fix for true pure virtual functions not being implemented
};

