#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "GoapActionAdjustVitals.h"
#include "GoapActionConsumeItem.generated.h"

UCLASS()
class MAINE_API UGoapActionConsumeItem : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle Item;
    
    UGoapActionConsumeItem();
};

