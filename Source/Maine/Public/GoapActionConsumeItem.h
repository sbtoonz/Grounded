#pragma once
#include "CoreMinimal.h"
#include "GoapActionAdjustVitals.h"
#include "Engine/DataTable.h"
#include "GoapActionConsumeItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionConsumeItem : public UGoapActionAdjustVitals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    UGoapActionConsumeItem();
};

