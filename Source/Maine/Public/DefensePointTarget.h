#pragma once
#include "CoreMinimal.h"
#include "DefensePointTarget.generated.h"

class ABuilding;

USTRUCT(BlueprintType)
struct FDefensePointTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuilding* TargetBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconVariant;
    
    MAINE_API FDefensePointTarget();
};

