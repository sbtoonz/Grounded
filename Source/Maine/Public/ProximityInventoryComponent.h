#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemContainerInterface.h"
#include "OnProximityInventoriesChangedDelegate.h"
#include "ProximityInventoryComponent.generated.h"

class UItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UProximityInventoryComponent : public UActorComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProximityInventoriesChanged OnProximityInventoriesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    UProximityInventoryComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* Item, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumNearbyInventories(bool bOnlyIncludeStorageInventories) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInventories();
    
    UFUNCTION(BlueprintCallable)
    void CacheInventories();
    
    
    // Fix for true pure virtual functions not being implemented
};

