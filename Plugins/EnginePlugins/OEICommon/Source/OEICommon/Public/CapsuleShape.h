#pragma once
#include "CoreMinimal.h"
#include "Shape.h"
#include "CapsuleShapeData.h"
#include "CapsuleShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEICOMMON_API UCapsuleShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCapsuleShapeData CapsuleShape;
    
    UCapsuleShape();
};

