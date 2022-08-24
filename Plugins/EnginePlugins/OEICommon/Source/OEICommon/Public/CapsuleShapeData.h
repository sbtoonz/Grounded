#pragma once
#include "CoreMinimal.h"
#include "ShapeInterface.h"
#include "CapsuleShapeData.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FCapsuleShapeData : public FShapeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    FCapsuleShapeData();
};

