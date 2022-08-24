#pragma once
#include "CoreMinimal.h"
#include "DataTableRowRedirects.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FDataTableRowRedirects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> RowRedirects;
    
    FDataTableRowRedirects();
};

