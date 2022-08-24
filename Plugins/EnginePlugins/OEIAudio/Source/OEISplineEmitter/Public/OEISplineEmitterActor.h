#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OEISplineEmitterActor.generated.h"

class UObject;
class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class OEISPLINEEMITTER_API AOEISplineEmitterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* VelocityRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* EmitterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SplineVelocities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    bool bAutoPost;
    
    AOEISplineEmitterActor();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartSound();
    
};

