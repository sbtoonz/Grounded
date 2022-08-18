#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "OnItemProcessedDelegate.h"
#include "OnProcessingItemsChangedDelegate.h"
#include "ItemProcessingData.h"
#include "GameplayTagContainer.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "EItemProcessingState.h"
#include "ItemProcessingBuilding.generated.h"

class USceneComponent;
class UTexture2D;
class UItem;
class AActor;
class ASurvivalCharacter;

UCLASS(Abstract)
class MAINE_API AItemProcessingBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemProcessed OnItemProcessed;
    
    UPROPERTY(BlueprintAssignable)
    FOnProcessingItemsChanged OnProcessingItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag ProcessingType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxSimultaneousItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxWorkingItems;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ProcessingItemsChanged)
    TArray<FItemProcessingData> ProcessingItems;
    
    UPROPERTY(Transient)
    TArray<FItemProcessingData> PreviousProcessingItems;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> CookingItemSpawnSockets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> OutputItemSpawnSockets;
    
    UPROPERTY(Export, Transient)
    TMap<FName, USceneComponent*> SocketComponents;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString UseText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString EmptyText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString FlavorText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* FlavorImage;
    
public:
    AItemProcessingBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool WillQueueProcessingItems() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void TickVisuals(float DeltaSeconds);
    
private:
    UFUNCTION()
    void TickProcessing(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UItem* Item, AActor* InInstigator);
    
protected:
    UFUNCTION()
    void OnRep_ProcessingItemsChanged();
    
public:
    UFUNCTION()
    void NotifyWorldItemTake(UItem* Item);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void NotifyProcessingStateChanged(FGameplayTag NewProcessingType, int32 CookingSlot);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyProcessingStateChanged(FGameplayTag NewProcessingType, int32 CookingSlot);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsProcessingAnything() const;
    
    UFUNCTION(BlueprintPure)
    bool IsItemFinished(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetResultItemType(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetProcessingType() const;
    
    UFUNCTION(BlueprintPure)
    EItemProcessingState GetProcessingState(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FName GetProcessingSocketForItem(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FItemProcessingData> GetProcessingItems() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetProcessingItem(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FName GetOutputSocketForItem(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetItemProgress(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentProcessingItemIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentItemCount() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetComponentForSocket(FName SocketName) const;
    
    UFUNCTION(BlueprintPure)
    bool CanProcessItem(const UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool CanAddItem(const UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItemToProcess(UItem* Item, ASurvivalCharacter* InInstigator, int32 SlotToUse);
    
};

