#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GlobalConditionalReference.generated.h"

USTRUCT(BlueprintType)
struct OEISCRIPTING_API FGlobalConditionalReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
public:
    FGlobalConditionalReference();
};

