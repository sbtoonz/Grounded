#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ItemContainerInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ProxyInventoryComponent.generated.h"

class UItem;

UCLASS(BlueprintType)
class MAINE_API UProxyInventoryComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UItem*> Items;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxSize;
    
    UProxyInventoryComponent();
    UFUNCTION(BlueprintPure)
    bool IsInventoryFull() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInventoryEmpty() const;
    
    UFUNCTION(BlueprintPure)
    UItem* FindPartialItemStackForItemHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintPure)
    UItem* FindPartialItemStackForItem(UItem* Item) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

