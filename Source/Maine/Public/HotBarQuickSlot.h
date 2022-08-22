#pragma once
#include "CoreMinimal.h"
#include "PersistentObject.h"
#include "EHotBarQuickSlotType.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "HotBarQuickSlot.generated.h"

class UItem;

UCLASS(BlueprintType)
class MAINE_API UHotBarQuickSlot : public UPersistentObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PropertyChanged)
    EHotBarQuickSlotType QuickSlotType;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PropertyChanged)
    UItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_PropertyChanged)
    FHotBarQuickSlotItemTypeKey AssignedItemKey;
    
    UHotBarQuickSlot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_PropertyChanged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeQuickSlotType(EHotBarQuickSlotType NewSlotType);
    
    UFUNCTION(BlueprintCallable)
    void AssignItemKey(FHotBarQuickSlotItemTypeKey ItemKey);
    
    UFUNCTION(BlueprintCallable)
    void AssignItem(UItem* Item);
    
};

