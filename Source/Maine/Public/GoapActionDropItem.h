#pragma once
#include "CoreMinimal.h"
#include "GoapAction.h"
#include "Engine/DataTable.h"
#include "GoapActionDropItem.generated.h"

UCLASS(Blueprintable)
class MAINE_API UGoapActionDropItem : public UGoapAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ItemRow;
    
    UGoapActionDropItem();
};

