#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "GoapActionDropItem.generated.h"

UCLASS()
class MAINE_API UGoapActionDropItem : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle ItemRow;
    
    UGoapActionDropItem();
};

