#pragma once
#include "CoreMinimal.h"
#include "EBurrowState.h"
#include "SurvivalCreature.h"
#include "Chaos/ChaosEngineInterface.h"
#include "BurrowSurvivalCharacter.generated.h"

class UParticleSystem;
class UBurrowComponent;
class UParticleSystemComponent;
class UAudioComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ABurrowSurvivalCharacter : public ASurvivalCreature {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightEnableDelay;
    
    UPROPERTY(EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, UParticleSystem*> BurrowSurfaceEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBurrowComponent* BurrowComponent;
    
public:
    ABurrowSurvivalCharacter();
    UFUNCTION(BlueprintCallable)
    void SetBurrowParticleComponent(UParticleSystemComponent* PSC);
    
    UFUNCTION(BlueprintCallable)
    void SetBurrowAudioComponent(UAudioComponent* AudioComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBurrowStateChanged(EBurrowState BurrowState);
    
};

