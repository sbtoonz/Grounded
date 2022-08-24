#pragma once
#include "CoreMinimal.h"
#include "EShapeType.h"
#include "BoxShapeData.h"
#include "CapsuleShapeData.h"
#include "SphereShapeData.h"
#include "ShapeVariant.generated.h"

USTRUCT(BlueprintType)
struct OEICOMMON_API FShapeVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShapeType ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxShapeData BoxData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSphereShapeData SphereData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCapsuleShapeData CapsuleData;
    
    FShapeVariant();
};

