#pragma once
#include "CoreMinimal.h"
#include "WidgetBuilding.h"
#include "ItemDisplayBuilding.generated.h"

class UInventoryComponent;
class UItem;

UCLASS(Blueprintable)
class MAINE_API AItemDisplayBuilding : public AWidgetBuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
public:
    AItemDisplayBuilding();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastRemoveItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastDisplayItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidItem(UItem* Item) const;
    
};

