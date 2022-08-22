#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "FootstepEntry.generated.h"

class UVisualEffect;
class USoundBase;

USTRUCT(BlueprintType)
struct FFootstepEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> SurfaceType;
    
    UPROPERTY(EditAnywhere)
    UVisualEffect* VisualEffect;
    
    UPROPERTY(EditAnywhere)
    USoundBase* SoundEffect;
    
    UPROPERTY(EditAnywhere)
    float SoundInensity;
    
    UPROPERTY(EditAnywhere)
    float SoundRange;
    
    MAINE_API FFootstepEntry();
};

