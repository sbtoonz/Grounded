#pragma once
#include "CoreMinimal.h"
#include "ShapeInterface.h"
#include "SphereShapeData.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FSphereShapeData : public FShapeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereRadius;
    
    FSphereShapeData();
};

