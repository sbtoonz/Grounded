#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EFoliageSwapLevel.h"
#include "FoliageDisplacerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UFoliageDisplacerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RegisterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VelocityCompensationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocityCompensation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedAudioSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EnergyAudioSmoothingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFoliageSwapLevel SwapLevel;
    
    UFoliageDisplacerComponent();
};

