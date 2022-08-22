#pragma once
#include "CoreMinimal.h"
#include "DataTableRowRedirects.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FDataTableRowRedirects {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FName> RowRedirects;
    
    FDataTableRowRedirects();
};

