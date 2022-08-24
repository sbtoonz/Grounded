#pragma once
#include "CoreMinimal.h"
#include "GoapActionUseHeldItem.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "GoapActionHoldItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionHoldItem : public UGoapActionUseHeldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DeliverTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ItemHandles;
    
    UGoapActionHoldItem();
};

