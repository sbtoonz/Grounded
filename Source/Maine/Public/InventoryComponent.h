#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "ItemContainerInterface.h"
#include "ItemDelegateDelegate.h"
#include "LODableComponentInterface.h"
#include "OnInventoryItemChangedDelegate.h"
#include "OnInventoryChangedDelegate.h"
#include "ItemAddedDelegateDelegate.h"
#include "RecipeCraftedDelegateDelegate.h"
#include "OnInventoryItemSpoiledDelegate.h"
#include "OnInventoryItemStashedDelegate.h"
#include "OnInventoryStashFailureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RecipeRequirements.h"
#include "HotBarQuickSlotItemTypeKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InventoryComponent.generated.h"

class UItem;
class UAttractionComponent;
class UGoapActionGetItem;
class UGoapActionDumpItem;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInventoryComponent : public UActorComponent, public IPersistentInterface, public IItemContainerInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryItemChanged OnInventoryItemChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryItemChanged OnInventoryItemEnhanced;
    
    UPROPERTY(BlueprintAssignable)
    FItemAddedDelegate OnItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FItemAddedDelegate OnItemPickupNotification;
    
    UPROPERTY(BlueprintAssignable)
    FItemDelegate OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FRecipeCraftedDelegate OnItemCrafted;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryItemSpoiled OnInventoryItemSpoiled;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryItemStashed OnInventoryItemStashed;
    
    UPROPERTY(BlueprintAssignable)
    FOnInventoryStashFailure OnInventoryStashFailure;
    
    UPROPERTY(BlueprintAssignable)
    FItemDelegate OnItemCraftedWithFullInventory;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Items)
    TArray<UItem*> Items;
    
    UPROPERTY(Export, Transient)
    UAttractionComponent* AttractionComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowStacking: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bExposedToAI: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowHauledItems: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bAllowAddItems: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bBlockOnItemAddedBroadcast: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bSuspendItemSpoiling: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGoapActionGetItem* TakeItemTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UGoapActionDumpItem* DumpItemTemplate;
    
public:
    UInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool TryCraftItem(FDataTableRowHandle RecipeRowHandle, bool bEquip, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferItemTo(UItem* Item, UInventoryComponent* ToInventory, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferItemFrom(UItem* Item, UInventoryComponent* FromInventory, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferAllTo(UInventoryComponent* ToInventory, bool IsNewItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferAllFrom(UInventoryComponent* FromInventory, bool IsNewItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwapItemSlotsBetweenInventories(UItem* Item1, int32 Index1, UInventoryComponent* Inventory2, UItem* Item2, int32 Index2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwapItemSlots(UInventoryComponent* SourceInventory, UItem* Item1, int32 Index1, UItem* Item2, int32 Index2);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItemMatchingItemData(FDataTableRowHandle ItemDataRowHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItemAtIndex(int32 Index, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveAllItems();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMergeItemStacks(UInventoryComponent* SourceInventory, UItem* SourceItem, UItem* DestinationItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDefragInventory(bool SingleItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateAndDropItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateAndAddItem(FDataTableRowHandle ItemRowHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftRecipeForInventory(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, UItem* RecipeModItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftRecipeDataForInventory(FDataTableRowHandle RecipeRowHandle, UInventoryComponent* DestinationInventory, FDataTableRowHandle RecipeModRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCraftRecipe(FDataTableRowHandle RecipeRowHandle, bool bEquip, int32 CraftCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddItem(UItem* Item, bool IsNewItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* Item, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    UItem* PopRandomItem();
    
    UFUNCTION(BlueprintCallable)
    UItem* PopItem();
    
    UFUNCTION()
    void OnRep_Items(const TArray<UItem*>& PreviousItems);
    
    UFUNCTION()
    void OnItemsChanged();
    
protected:
    UFUNCTION()
    void OnItemEnhanced();
    
    UFUNCTION()
    void OnItemChanged();
    
public:
    UFUNCTION()
    void NotifyItemSpoiled(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle);
    
    UFUNCTION(BlueprintPure)
    bool IsSlotAvailable(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasRequirements(const TArray<FRecipeRequirements>& Requirements);
    
    UFUNCTION(BlueprintPure)
    bool HasAnySpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnySpaceForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalItemCount();
    
    UFUNCTION(BlueprintPure)
    int32 GetNextAvailableInventorySlot() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSize() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAllowedSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxAllowedSpaceForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetItemsIncludingEquipment();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItemInSlot(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountMatchingHotBarKeyIncludingEquipment(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountIncludingEquipment(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountByName(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCount(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintPure)
    UItem* GetItem(FName ItemName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExistingStackSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetEmptySlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset);
    
    UFUNCTION(BlueprintPure)
    UItem* FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    UItem* FindPartialItemStackForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    int32 ContainsItemOfType(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsItem(UItem* Item) const;
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemStashFailue();
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemStashed(FDataTableRowHandle ItemRowHandle, int32 Count);
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemSpoiled(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle);
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemRemoved(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemAdded(FDataTableRowHandle ItemRowHandle, bool IsNewItem, int32 NewCount);
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyCraftedWithFullInventory(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool CanTransferAllFrom(UInventoryComponent* FromInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCraftRecipe(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& InItems) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* Item, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

