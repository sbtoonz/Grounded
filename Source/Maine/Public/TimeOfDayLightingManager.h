#pragma once
#include "CoreMinimal.h"
#include "StencilRequiredGlobalPostProcessMaterial.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnRestingTimelapseChangeDelegate.h"
#include "TimelapseAudioCue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WeightedBlendables -FallbackName=WeightedBlendables
#include "TimeOfDayLightingManager.generated.h"

class USoundMix;
class UPhotoModeHelperComponent;
class UDirectionalLightComponent;
class USoundCue;
class UPostProcessComponent;

UCLASS()
class ATimeOfDayLightingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float PhotoModeTime;
    
    UPROPERTY(BlueprintReadWrite)
    float PhotoModeAzimuthOffset;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentFrameNormalizedTime;
    
    UPROPERTY(BlueprintAssignable)
    FOnRestingTimelapseChange OnRestingTimelapseChange;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTimelapseAudioCue> TimelapseAudioCues;
    
    UPROPERTY(EditDefaultsOnly)
    USoundMix* TimelapseSoundMix;
    
    UPROPERTY(EditDefaultsOnly)
    float TimelapseMusicStopOffset;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FStencilRequiredGlobalPostProcessMaterial> ManagedPostProcessMaterials;
    
    UPROPERTY(BlueprintReadOnly)
    FWeightedBlendables ActiveBlendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UPhotoModeHelperComponent* PhotoModeHelperComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsTimelapseActive;
    
    UPROPERTY(Transient)
    float TimelapseStartGameTimeSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float TimelapseDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float TimelapseLightingDuration;
    
    UPROPERTY(Transient)
    float TimelapseStartTime;
    
    UPROPERTY(Transient)
    float TimelapseCurrentTime;
    
    UPROPERTY(Transient)
    float TimelapseTargetTime;
    
    UPROPERTY(Transient)
    float TimelapseLerp;
    
    UPROPERTY(Transient)
    float TimelapseLightingLerp;
    
    UPROPERTY(Transient)
    FTimerHandle TimelapseMusicStopHandle;
    
public:
    ATimeOfDayLightingManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue);
    
    UFUNCTION()
    void StopMusicForTimelapse();
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneDOF(float DOFBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue);
    
protected:
    UFUNCTION()
    void OnGameRest(float RestDuration);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActiveBlendablesChanged();
    
public:
    UFUNCTION(BlueprintPure)
    float NativeGetNormalizedTime() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLootShimmerEnabled() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTimelapseMinute() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimelapseLightingLerp() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimelapseLerp() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTimelapseHour() const;
    
    UFUNCTION(BlueprintNativeEvent)
    UDirectionalLightComponent* GetSunLight() const;
    
    UFUNCTION()
    USoundCue* GetSoundCueForWakeupTime(float Time);
    
    UFUNCTION(BlueprintNativeEvent)
    UPostProcessComponent* GetPostProcessMain() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPhotoModeHour() const;
    
    UFUNCTION(BlueprintPure)
    float GetNormalizedPhotoModeTime() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    AActor* GetCurrentBlendTrigger();
    
    UFUNCTION(BlueprintCallable)
    void EndRestTimelapse();
    
    UFUNCTION(BlueprintCallable)
    void BeginRestTimelapse();
    
};

