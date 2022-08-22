#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
#include "ClimbableSplineKey.generated.h"

class UClimbableSplineComponent;
class UBaseLODActor;

USTRUCT(BlueprintType)
struct MAINE_API FClimbableSplineKey {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UClimbableSplineComponent> HardSplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UClimbableSplineComponent> CDOSplineComponent;
    
    UPROPERTY(BlueprintReadOnly)
    UBaseLODActor* LODActor;
    
    UPROPERTY(BlueprintReadOnly)
    FFoliageKey FoliageKey;
    
public:
    FClimbableSplineKey();
};

