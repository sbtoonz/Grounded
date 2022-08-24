#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessableInterface.h"
#include "Perception/AIPerceptionTypes.h"
#include "AIDetectionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAIDetectionComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigateTime;
    
public:
    UAIDetectionComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdate(AActor* Actor, FAIStimulus Stimulus);
    
    
    // Fix for true pure virtual functions not being implemented
};

