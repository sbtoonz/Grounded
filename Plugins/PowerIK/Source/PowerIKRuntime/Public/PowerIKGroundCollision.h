#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PowerIKGroundCollision.generated.h"

USTRUCT(BlueprintType)
struct POWERIKRUNTIME_API FPowerIKGroundCollision {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayCastUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayCastDown;
    
    FPowerIKGroundCollision();
};

