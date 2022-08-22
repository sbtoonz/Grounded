#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ParticleSystemSpawnComponent.generated.h"

class UVisualEffect;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UParticleSystemSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UVisualEffect*> Particles;
    
    UParticleSystemSpawnComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnParticleSystem();
    
};

