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
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UClimbableSplineComponent> HardSplineComponent;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UClimbableSplineComponent> CDOSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* LODActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageKey FoliageKey;
    
public:
    FClimbableSplineKey();
};

