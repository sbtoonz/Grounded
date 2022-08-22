#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WidgetPlayerProxy.generated.h"

class UItem;

UCLASS(BlueprintType)
class MAINE_API UWidgetPlayerProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedMainHandItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedOffHandItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedHeadItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedChestItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedArmsItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedLegsItem;
    
    UPROPERTY(BlueprintReadWrite)
    UItem* EquippedGliderItem;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UItem*> HauledItems;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UItem*> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UItem*> NearbyItems;
    
    UWidgetPlayerProxy();
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetInventoryAndEquippedItems();
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetInventoryAndEquippedAndHauledItems();
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetAllItemsAndNearbyItems();
    
};

