#pragma once
#include "CoreMinimal.h"
#include "Colony.generated.h"

class UColonyConfiguration;

USTRUCT(BlueprintType)
struct MAINE_API FColony {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UColonyConfiguration* Config;
    
public:
    FColony();
};

