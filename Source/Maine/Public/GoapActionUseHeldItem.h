#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "GoapActionAdjustVitals.h"
#include "GoapActionOwner.h"
#include "GoapActionUseHeldItem.generated.h"

class UItem;

UCLASS(Abstract)
class MAINE_API UGoapActionUseHeldItem : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UGoapActionUseHeldItem();
    UFUNCTION(BlueprintPure)
    bool IsUsableData(FDataTableRowHandle ItemDataHandle, const FGoapActionOwner& Owner);
    
    UFUNCTION(BlueprintPure)
    bool IsUsable(const UItem* Item, const FGoapActionOwner& Owner);
    
};

