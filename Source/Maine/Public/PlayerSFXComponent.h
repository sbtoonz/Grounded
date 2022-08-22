#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerSFXComponent.generated.h"

class UReverbEffect;
class USurvivalComponent;
class USoundMix;
class UCurveFloat;
class USoundBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerSFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundMix* DrowningTimerSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundMix* CriticalDrowningTimerSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrowningTimerBreathLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CriticalDrowningTimerBreathLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwimHeartbeatTimeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* HeartbeatSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* HeartbeatVolumeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* HeartbeatPitchCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundMix* StarvationMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* StarvingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UReverbEffect* StarvingReverbEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* StarvationReverbSendLevelCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName StarvationReverbName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StarvationTimerStart;
    
public:
    UPlayerSFXComponent();
private:
    UFUNCTION()
    void TriggerStarvationSFXUpdate();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopSFX();
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivalComponent(USurvivalComponent* InComponent);
    
};

