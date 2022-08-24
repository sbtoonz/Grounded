#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GoapActionRemoveItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionRemoveItem : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Region;
    
    UGoapActionRemoveItem();
};

