#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "ItemContainerInterface.h"
#include "EEquipmentSlot.h"
#include "EquipmentLODComponent.generated.h"

class UEquipmentComponent;
class UItem;
class UProxyEquipmentComponent;

UCLASS(BlueprintType)
class MAINE_API UEquipmentLODComponent : public UBaseLODComponent, public IPersistentInterface, public IItemContainerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UItem*> SerializedEquippedItems;
    
private:
    UPROPERTY()
    UProxyEquipmentComponent* ProxyEquipmentComponent;
    
    UPROPERTY(Export)
    UEquipmentComponent* FullEquipmentComponent;
    
public:
    UEquipmentLODComponent();
    UFUNCTION(BlueprintPure)
    bool HasSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItemInSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintPure)
    TArray<EEquipmentSlot> GetEquipmentSlots() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

