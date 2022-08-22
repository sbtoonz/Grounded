#pragma once
#include "CoreMinimal.h"
#include "Colony.generated.h"

class UColonyConfiguration;

USTRUCT()
struct MAINE_API FColony {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UColonyConfiguration* Config;
    
public:
    FColony();
};

