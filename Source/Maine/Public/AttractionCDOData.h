#pragma once
#include "CoreMinimal.h"
#include "AttractionCDOData.generated.h"

class UGoapAction;

USTRUCT(BlueprintType)
struct FAttractionCDOData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UGoapAction*> Actions;
    
    MAINE_API FAttractionCDOData();
};

