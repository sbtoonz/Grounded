#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "OnItemProcessedDelegate.h"
#include "OnProcessingItemsChangedDelegate.h"
#include "GameplayTagContainer.h"
#include "ItemProcessingData.h"
#include "LocString.h"
#include "Engine/DataTable.h"
#include "EItemProcessingState.h"
#include "ItemProcessingBuilding.generated.h"

class USceneComponent;
class UTexture2D;
class ASurvivalCharacter;
class UItem;
class AActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API AItemProcessingBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemProcessed OnItemProcessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProcessingItemsChanged OnProcessingItemsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProcessingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimultaneousItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWorkingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ProcessingItemsChanged, meta=(AllowPrivateAccess=true))
    TArray<FItemProcessingData> ProcessingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemProcessingData> PreviousProcessingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CookingItemSpawnSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OutputItemSpawnSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, USceneComponent*> SocketComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString UseText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString EmptyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString FlavorText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* FlavorImage;
    
public:
    AItemProcessingBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WillQueueProcessingItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickVisuals(float DeltaSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void TickProcessing(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UItem* Item, AActor* InInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProcessingItemsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyWorldItemTake(UItem* Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyProcessingStateChanged(FGameplayTag NewProcessingType, int32 CookingSlot);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyProcessingStateChanged(FGameplayTag NewProcessingType, int32 CookingSlot);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcessingAnything() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemFinished(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetResultItemType(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetProcessingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemProcessingState GetProcessingState(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProcessingSocketForItem(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FItemProcessingData> GetProcessingItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetProcessingItem(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetOutputSocketForItem(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemProgress(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentProcessingItemIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetComponentForSocket(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanProcessItem(const UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddItem(const UItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void AddItemToProcess(UItem* Item, ASurvivalCharacter* InInstigator, int32 SlotToUse);
    
};

