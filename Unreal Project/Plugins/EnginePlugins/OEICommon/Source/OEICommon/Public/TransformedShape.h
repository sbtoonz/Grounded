#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TransformedShape.generated.h"

class UShape;

USTRUCT(BlueprintType)
struct OEICOMMON_API FTransformedShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UShape* Shape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform ShapeTransform;
    
    FTransformedShape();
};

