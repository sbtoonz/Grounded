#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShapeVariant.h"
#include "TransformedShapeVariant.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FTransformedShapeVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ShapeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShapeVariant Shape;
    
    FTransformedShapeVariant();
};

