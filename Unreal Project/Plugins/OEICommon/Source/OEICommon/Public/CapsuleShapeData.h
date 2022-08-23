#pragma once
#include "CoreMinimal.h"
#include "ShapeInterface.h"
#include "CapsuleShapeData.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FCapsuleShapeData : public FShapeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CapsuleRadius;
    
    FCapsuleShapeData();
};

