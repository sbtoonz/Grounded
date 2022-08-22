#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PossessableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIStimulus -FallbackName=AIStimulus
#include "AIDetectionComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAIDetectionComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float IntensityThreshold;
    
    UPROPERTY(EditAnywhere)
    float InvestigateTime;
    
public:
    UAIDetectionComponent();
private:
    UFUNCTION()
    void OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
    
    // Fix for true pure virtual functions not being implemented
};

