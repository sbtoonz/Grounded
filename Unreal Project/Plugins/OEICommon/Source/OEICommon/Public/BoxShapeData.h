#pragma once
#include "CoreMinimal.h"
#include "ShapeInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BoxShapeData.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FBoxShapeData : public FShapeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BoxExtent;
    
    FBoxShapeData();
};

