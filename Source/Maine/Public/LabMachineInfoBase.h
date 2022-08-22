#pragma once
#include "CoreMinimal.h"
#include "LabMachineInfoBase.generated.h"

USTRUCT(BlueprintType)
struct FLabMachineInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 InfoA;
    
    UPROPERTY(EditAnywhere)
    uint32 InfoB;
    
    MAINE_API FLabMachineInfoBase();
};

