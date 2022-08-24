#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EQSParameter.generated.h"

class UAIEQSParameter;

USTRUCT(BlueprintType)
struct FEQSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAIEQSParameter> EQSParameter;
    
    MAINE_API FEQSParameter();
};

