#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectOrigin.h"
#include "OnEquipmentItemChangedDelegate.h"
#include "PersistentInterface.h"
#include "Engine/DataTable.h"
#include "LODableComponentInterface.h"
#include "ItemContainerInterface.h"
#include "OnEquipmentChangedDelegate.h"
#include "OnEquipmentVisualsChangedDelegate.h"
#include "OnItemBrokenDelegateDelegate.h"
#include "OnItemPowerChangedDelegateDelegate.h"
#include "EEquipmentSlot.h"
#include "OnEquipmentChangeFailureFromFullInventoryDelegate.h"
#include "EEquipmentChangeFailureFromFullInventoryStimulus.h"
#include "ItemDataPreloadAssets.h"
#include "ECameraDisplayMode.h"
#include "EItemVisualsPriority.h"
#include "EquipmentComponent.generated.h"

class UItem;
class ASurvivalCharacter;
class UInventoryComponent;
class UHaulingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEquipmentComponent : public UActorComponent, public IStatusEffectOrigin, public IPersistentInterface, public IItemContainerInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentChanged OnEquipmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentItemChanged OnEquipmentItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentItemChanged OnEquipmentItemEnhanced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentVisualsChanged OnEquipmentVisualsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemBrokenDelegate OnItemBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPowerChangedDelegate OnItemPowerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPowerChangedDelegate OnItemPowerDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipmentChangeFailureFromFullInventory OnEquipmentChangeFailureFromFullInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasMainHand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasOffHand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasHead: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasChest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasArms: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasLegs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGlider: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MainHand, meta=(AllowPrivateAccess=true))
    UItem* MainHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OffHand, meta=(AllowPrivateAccess=true))
    UItem* OffHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Head, meta=(AllowPrivateAccess=true))
    UItem* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Chest, meta=(AllowPrivateAccess=true))
    UItem* Chest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Arms, meta=(AllowPrivateAccess=true))
    UItem* Arms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Legs, meta=(AllowPrivateAccess=true))
    UItem* Legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Glider, meta=(AllowPrivateAccess=true))
    UItem* Glider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* PreviousMainHandItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItem* PreviousOffHandItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHaulingComponent* HaulingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemDataPreloadAssets MainHandPreloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemDataPreloadAssets ChestPreloader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnUnderwaterChanged(bool IsUnderwater);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OffHand(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MainHand(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Legs(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Head(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Glider(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Chest(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Arms(UItem* LastEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEnhanced();
    
    UFUNCTION(BlueprintCallable)
    void OnItemChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHaulEnd(UHaulingComponent* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnHaulBegin(UHaulingComponent* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraModeChanged(ECameraDisplayMode DisplayMode);
    
public:
    UFUNCTION(BlueprintCallable)
    UItem* LocalUnequipItemInSlot(EEquipmentSlot Slot, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintCallable)
    UItem* LocalUnequipItem(UItem* Equippable, bool ReaddToInventory, int32 TargetInventorySlot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintCallable)
    void LocalEquipItemToSlot(UItem* Equippable, EEquipmentSlot Slot, UInventoryComponent* ToFromInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemRowHandleEquipped(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquipped(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyItemEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetPreviousItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOffhandStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEquipmentSlot GetItemSlot(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverageEquippedTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle> GetActiveItemSetStatusEffects() const;
    
    UFUNCTION(BlueprintCallable)
    bool EquipItemData(FDataTableRowHandle RowData);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyVisuals(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyItemPowerDepleted(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyItemBroken(UItem* Item, bool ItemDroppedInWorld);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyEquipmentChangeFailureFromFullInventory(EEquipmentChangeFailureFromFullInventoryStimulus FailureStimulus);
    
    
    // Fix for true pure virtual functions not being implemented
};

