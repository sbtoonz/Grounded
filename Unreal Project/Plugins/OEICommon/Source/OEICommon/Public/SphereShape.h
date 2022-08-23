#pragma once
#include "CoreMinimal.h"
#include "Shape.h"
#include "SphereShapeData.h"
#include "SphereShape.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class OEICOMMON_API USphereShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSphereShapeData SphereShape;
    
    USphereShape();
};

