#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ItemContainerInterface.h"
#include "EEquipmentSlot.h"
#include "ProxyEquipmentComponent.generated.h"

class UItem;

UCLASS(BlueprintType)
class MAINE_API UProxyEquipmentComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UItem*> EquippedItems;
    
    UProxyEquipmentComponent();
    UFUNCTION(BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

