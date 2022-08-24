#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ItemContainerInterface.h"
#include "EEquipmentSlot.h"
#include "ProxyEquipmentComponent.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API UProxyEquipmentComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> EquippedItems;
    
    UProxyEquipmentComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

