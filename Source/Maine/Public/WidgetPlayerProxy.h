#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WidgetPlayerProxy.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API UWidgetPlayerProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> InventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedMainHandItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedOffHandItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedHeadItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedChestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedArmsItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedLegsItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItem* EquippedGliderItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> HauledItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> NearbyItems;
    
    UWidgetPlayerProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetInventoryAndEquippedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetInventoryAndEquippedAndHauledItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetAllItemsAndNearbyItems();
    
};

