#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AllowableBuildingPenetration.generated.h"

USTRUCT(BlueprintType)
struct MAINE_API FAllowableBuildingPenetration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Normal;
    
    FAllowableBuildingPenetration();
};

