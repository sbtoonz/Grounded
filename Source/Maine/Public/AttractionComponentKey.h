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
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAttractionComponent> HardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseLODActor* LODActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFoliageKey FoliageKey;
    
public:
    FAttractionComponentKey();
};

