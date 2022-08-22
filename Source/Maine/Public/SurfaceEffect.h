#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "SurfaceEffect.generated.h"

class UVisualEffect;
class USoundBase;

USTRUCT(BlueprintType)
struct FSurfaceEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* VisualEffect;
    
    UPROPERTY(EditAnywhere)
    USoundBase* SoundEffect;
    
    MAINE_API FSurfaceEffect();
};

