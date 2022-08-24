#pragma once
#include "CoreMinimal.h"
#include "AttractionCDOData.generated.h"

class UGoapAction;

USTRUCT(BlueprintType)
struct FAttractionCDOData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGoapAction*> Actions;
    
    MAINE_API FAttractionCDOData();
};

