#pragma once
#include "CoreMinimal.h"
#include "FoliageDisplacerRegistration.generated.h"

class UFoliageDisplacerComponent;

USTRUCT(BlueprintType)
struct MAINE_API FFoliageDisplacerRegistration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UFoliageDisplacerComponent> Displacer;
    
    FFoliageDisplacerRegistration();
};

