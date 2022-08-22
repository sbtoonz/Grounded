#pragma once
#include "CoreMinimal.h"
#include "LiteBuilding.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FLiteBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    ABuilding* CDO;
    
    MAINE_API FLiteBuilding();
};

