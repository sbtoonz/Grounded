#pragma once
#include "CoreMinimal.h"
#include "FoliageKey.h"
#include "AttractionComponentKey.generated.h"

class UAttractionComponent;
class UBaseLODActor;

USTRUCT(BlueprintType)
struct MAINE_API FAttractionComponentKey {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UAttractionComponent> HardComponent;
    
    UPROPERTY(BlueprintReadOnly)
    UBaseLODActor* LODActor;
    
    UPROPERTY(BlueprintReadOnly)
    FFoliageKey FoliageKey;
    
public:
    FAttractionComponentKey();
};

