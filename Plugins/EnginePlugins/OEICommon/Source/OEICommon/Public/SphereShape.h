#pragma once
#include "CoreMinimal.h"
#include "Shape.h"
#include "SphereShapeData.h"
#include "SphereShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class OEICOMMON_API USphereShape : public UShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphereShapeData SphereShape;
    
    USphereShape();
};

