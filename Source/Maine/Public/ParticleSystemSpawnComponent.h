#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ParticleSystemSpawnComponent.generated.h"

class UVisualEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UParticleSystemSpawnComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVisualEffect*> Particles;
    
    UParticleSystemSpawnComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnParticleSystem();
    
};

