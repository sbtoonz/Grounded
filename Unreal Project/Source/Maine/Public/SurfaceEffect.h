#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SurfaceEffect.generated.h"

class USoundBase;
class UVisualEffect;

USTRUCT(BlueprintType)
struct FSurfaceEffect {
    GENERATED_BODY()
public:
    // UPROPERTY(EditAnywhere)
    // TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* VisualEffect;
    
    UPROPERTY(EditAnywhere)
    USoundBase* SoundEffect;
    
    MAINE_API FSurfaceEffect();
};

