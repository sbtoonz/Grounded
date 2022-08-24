#pragma once
#include "CoreMinimal.h"
#include "ShapeVariant.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "TransformedShapeVariant.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FTransformedShapeVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform ShapeTransform;
    
    UPROPERTY(EditAnywhere)
    FShapeVariant Shape;
    
    FTransformedShapeVariant();
};

