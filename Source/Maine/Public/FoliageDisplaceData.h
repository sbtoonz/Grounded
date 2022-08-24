#pragma once
#include "CoreMinimal.h"
#include "FoliageDisplacerRegistration.h"
#include "FoliageDisplaceData.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FFoliageDisplaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFoliageDisplacerRegistration> RegisteredDisplacers;
    
    FFoliageDisplaceData();
};

