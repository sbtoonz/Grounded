#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ItemContainerInterface.h"
#include "ProxyHaulingComponent.generated.h"

class UItem;

UCLASS(BlueprintType)
class MAINE_API UProxyHaulingComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UItem*> HauledItems;
    
    UPROPERTY()
    int32 AdjustedCapacity;
    
    UProxyHaulingComponent();
    UFUNCTION(BlueprintPure)
    int32 GetAdjustedCapacity() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

