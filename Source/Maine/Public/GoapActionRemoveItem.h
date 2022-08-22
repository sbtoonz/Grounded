#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GoapActionRemoveItem.generated.h"

UCLASS()
class MAINE_API UGoapActionRemoveItem : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDataTableRowHandle Item;
    
    UPROPERTY()
    FGameplayTag Region;
    
    UGoapActionRemoveItem();
};

