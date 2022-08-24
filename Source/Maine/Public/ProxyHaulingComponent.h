#pragma once
#include "CoreMinimal.h"
#include "ProxyComponent.h"
#include "ItemContainerInterface.h"
#include "ProxyHaulingComponent.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API UProxyHaulingComponent : public UProxyComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItem*> HauledItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdjustedCapacity;
    
    UProxyHaulingComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdjustedCapacity() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

