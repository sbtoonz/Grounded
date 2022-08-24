#pragma once
#include "CoreMinimal.h"
#include "OnInventoryItemChangedDelegate.h"
#include "OnInventoryChangedDelegate.h"
#include "Components/ActorComponent.h"
#include "ItemAddedDelegateDelegate.h"
#include "PersistentInterface.h"
#include "ItemContainerInterface.h"
#include "ItemDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "LODableComponentInterface.h"
#include "RecipeCraftedDelegateDelegate.h"
#include "OnInventoryItemSpoiledDelegate.h"
#include "OnInventoryItemStashedDelegate.h"
#include "OnInventoryStashFailureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "RecipeRequirements.h"
#include "UObject/NoExportTypes.h"
#include "HotBarQuickSlotItemTypeKey.h"
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
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryChanged OnInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChanged OnInventoryItemChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChanged OnInventoryItemEnhanced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAddedDelegate OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAddedDelegate OnItemPickupNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeCraftedDelegate OnItemCrafted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemSpoiled OnInventoryItemSpoiled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemStashed OnInventoryItemStashed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryStashFailure OnInventoryStashFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemDelegate OnItemCraftedWithFullInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<UItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAttractionComponent* AttractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowStacking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExposedToAI: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowHauledItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAddItems: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockOnItemAddedBroadcast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuspendItemSpoiling: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionGetItem* TakeItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items(const TArray<UItem*>& PreviousItems);
    
    UFUNCTION(BlueprintCallable)
    void OnItemsChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnItemEnhanced();
    
    UFUNCTION(BlueprintCallable)
    void OnItemChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyItemSpoiled(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotAvailable(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryEmpty() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasRequirements(const TArray<FRecipeRequirements>& Requirements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnySpaceForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalItemCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextAvailableInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAllowedSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAllowedSpaceForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetItemsIncludingEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItemInSlot(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountMatchingHotBarKeyIncludingEquipment(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountIncludingEquipment(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountForHotBarKey(FHotBarQuickSlotItemTypeKey ItemKey, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCountByName(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCount(FDataTableRowHandle ItemRowHandle, bool IncludeBrokenItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItem(FName ItemName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExistingStackSpaceForItemHandle(const FDataTableRowHandle& ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEmptySlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* FindPartialItemStackForItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ContainsItemOfType(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemStashFailue();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemStashed(FDataTableRowHandle ItemRowHandle, int32 Count);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemSpoiled(FDataTableRowHandle OriginalItemHandle, FDataTableRowHandle SpoiledResultHandle);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemRemoved(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemAdded(FDataTableRowHandle ItemRowHandle, bool IsNewItem, int32 NewCount);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCraftedWithFullInventory(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanTransferAllFrom(UInventoryComponent* FromInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool CanCraftRecipe(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& InItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* Item, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

