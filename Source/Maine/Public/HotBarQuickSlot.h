#pragma once
#include "CoreMinimal.h"
#include "PersistentObject.h"
#include "EHotBarQuickSlotType.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "HotBarQuickSlot.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API UHotBarQuickSlot : public UPersistentObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    EHotBarQuickSlotType QuickSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    UItem* CurrentItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PropertyChanged, meta=(AllowPrivateAccess=true))
    FHotBarQuickSlotItemTypeKey AssignedItemKey;
    
    UHotBarQuickSlot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PropertyChanged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeQuickSlotType(EHotBarQuickSlotType NewSlotType);
    
    UFUNCTION(BlueprintCallable)
    void AssignItemKey(FHotBarQuickSlotItemTypeKey ItemKey);
    
    UFUNCTION(BlueprintCallable)
    void AssignItem(UItem* Item);
    
};

