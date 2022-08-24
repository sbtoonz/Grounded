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

UCLASS(Abstract, Blueprintable)
class MAINE_API AEquipmentDisplayBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlot> ValidEquipmentSlots;
    
public:
    AEquipmentDisplayBuilding();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidEquipmentSlot(EEquipmentSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMeshComponent* GetEquipmentMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetArmorMeshComponent(EEquipmentSlot Slot) const;
    
};

