#pragma once
#include "CoreMinimal.h"
#include "GoapActionUseHeldItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "GoapActionDeliverItem.generated.h"

UCLASS()
class MAINE_API UGoapActionDeliverItem : public UGoapActionUseHeldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer DeliverTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> ItemHandles;
    
    UGoapActionDeliverItem();
};

