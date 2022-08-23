#pragma once
#include "CoreMinimal.h"
#include "Shape.h"
#include "BoxShapeData.h"
#include "BoxShape.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class OEICOMMON_API UBoxShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBoxShapeData BoxShape;
    
    UBoxShape();
};

