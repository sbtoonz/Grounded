#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "EEquipmentSlot.h"
#include "EquipmentDisplayBuilding.generated.h"

class UMeshComponent;
class UInventoryComponent;
class USkeletalMeshComponent;
class UEquipmentComponent;
class UItem;

UCLASS(Abstract)
class MAINE_API AEquipmentDisplayBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EEquipmentSlot> ValidEquipmentSlots;
    
public:
    AEquipmentDisplayBuilding();
    UFUNCTION(BlueprintPure)
    bool IsValidItem(UItem* Item) const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidEquipmentSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintNativeEvent)
    UMeshComponent* GetEquipmentMeshComponent() const;
    
    UFUNCTION(BlueprintNativeEvent)
    USkeletalMeshComponent* GetArmorMeshComponent(EEquipmentSlot Slot) const;
    
};

