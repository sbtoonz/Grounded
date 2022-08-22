#pragma once
#include "CoreMinimal.h"
#include "FoliageDisplacerRegistration.h"
#include "FoliageDisplaceData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FFoliageDisplaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FFoliageDisplacerRegistration> RegisteredDisplacers;
    
    FFoliageDisplaceData();
};

