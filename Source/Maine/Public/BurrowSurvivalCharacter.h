#pragma once
#include "CoreMinimal.h"
#include "SurvivalCreature.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EBurrowState.h"
#include "BurrowSurvivalCharacter.generated.h"

class UParticleSystem;
class UBurrowComponent;
class UParticleSystemComponent;
class UAudioComponent;

UCLASS(Abstract)
class MAINE_API ABurrowSurvivalCharacter : public ASurvivalCreature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SightEnableDelay;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> BurrowSurfaceEffects;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBurrowComponent* BurrowComponent;
    
public:
    ABurrowSurvivalCharacter();
    UFUNCTION(BlueprintCallable)
    void SetBurrowParticleComponent(UParticleSystemComponent* PSC);
    
    UFUNCTION(BlueprintCallable)
    void SetBurrowAudioComponent(UAudioComponent* AudioComponent);
    
protected:
    UFUNCTION()
    void HandleBurrowStateChanged(EBurrowState BurrowState);
    
};

