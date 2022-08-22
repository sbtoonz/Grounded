#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EQSParameter.generated.h"

class UAIEQSParameter;

USTRUCT()
struct FEQSParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIEQSParameter> EQSParameter;
    
    MAINE_API FEQSParameter();
};

