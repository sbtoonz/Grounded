#pragma once
#include "CoreMinimal.h"
#include "BoxShapeData.h"
#include "EShapeType.h"
#include "CapsuleShapeData.h"
#include "SphereShapeData.h"
#include "ShapeVariant.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FShapeVariant {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EShapeType ShapeType;
    
    UPROPERTY(EditAnywhere)
    FBoxShapeData BoxData;
    
    UPROPERTY(EditAnywhere)
    FSphereShapeData SphereData;
    
    UPROPERTY(EditAnywhere)
    FCapsuleShapeData CapsuleData;
    
    FShapeVariant();
};

