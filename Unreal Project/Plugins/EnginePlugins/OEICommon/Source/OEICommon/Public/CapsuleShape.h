#pragma once
#include "CoreMinimal.h"
#include "Shape.h"
#include "CapsuleShapeData.h"
#include "CapsuleShape.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class OEICOMMON_API UCapsuleShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCapsuleShapeData CapsuleShape;
    
    UCapsuleShape();
};

