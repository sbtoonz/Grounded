#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecipeMod.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FRecipeMod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ModItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ResultItem;
    
    FRecipeMod();
};

