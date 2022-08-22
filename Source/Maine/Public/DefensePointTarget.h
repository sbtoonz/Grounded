#pragma once
#include "CoreMinimal.h"
#include "DefensePointTarget.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FDefensePointTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ABuilding* TargetBuilding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 IconVariant;
    
    MAINE_API FDefensePointTarget();
};

