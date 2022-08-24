#pragma once
#include "CoreMinimal.h"
#include "GoapActionOwner.h"
#include "GoapActionAdjustVitals.h"
#include "Engine/DataTable.h"
#include "GoapActionUseHeldItem.generated.h"

class UItem;

UCLASS(Abstract, Blueprintable)
class MAINE_API UGoapActionUseHeldItem : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UGoapActionUseHeldItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableData(FDataTableRowHandle ItemDataHandle, const FGoapActionOwner& Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsable(const UItem* Item, const FGoapActionOwner& Owner);
    
};

