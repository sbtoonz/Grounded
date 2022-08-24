#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InterestStateItemStack.generated.h"

USTRUCT(BlueprintType)
struct FInterestStateItemStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
    MAINE_API FInterestStateItemStack();
};

