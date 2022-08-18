#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "ItemDisplayBuilding.generated.h"

class UInventoryComponent;
class UItem;

UCLASS()
class MAINE_API AItemDisplayBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInventoryComponent* InventoryComponent;
    
public:
    AItemDisplayBuilding();
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastRemoveItem(UItem* Item);
    
    UFUNCTION(NetMulticast, Reliable, WithValidation)
    void MulticastDisplayItem(UItem* Item);
    
    UFUNCTION(BlueprintPure)
    bool IsValidItem(UItem* Item) const;
    
};

