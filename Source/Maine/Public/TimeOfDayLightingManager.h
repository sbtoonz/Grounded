#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "OnRestingTimelapseChangeDelegate.h"
#include "TimelapseAudioCue.h"
#include "Engine/Scene.h"
#include "StencilRequiredGlobalPostProcessMaterial.h"
#include "TimeOfDayLightingManager.generated.h"

class UPhotoModeHelperComponent;
class USoundMix;
class UDirectionalLightComponent;
class USoundCue;
class UPostProcessComponent;

UCLASS(Blueprintable)
class ATimeOfDayLightingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotoModeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotoModeAzimuthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFrameNormalizedTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestingTimelapseChange OnRestingTimelapseChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelapseAudioCue> TimelapseAudioCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* TimelapseSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimelapseMusicStopOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStencilRequiredGlobalPostProcessMaterial> ManagedPostProcessMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeightedBlendables ActiveBlendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPhotoModeHelperComponent* PhotoModeHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTimelapseActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseStartGameTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimelapseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimelapseLightingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseCurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimelapseLightingLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimelapseMusicStopHandle;
    
public:
    ATimeOfDayLightingManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue);
    
    UFUNCTION(BlueprintCallable)
    void StopMusicForTimelapse();
    
    UFUNCTION(BlueprintCallable)
    void SetCutsceneDOF(float DOFBlurRadius);
    
    UFUNCTION(BlueprintCallable)
    void RegisterStencilMaskRenderer(int32 ObjectID, int32 StencilValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameRest(float RestDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveBlendablesChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float NativeGetNormalizedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLootShimmerEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimelapseMinute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimelapseLightingLerp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimelapseLerp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTimelapseHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UDirectionalLightComponent* GetSunLight() const;
    
    UFUNCTION(BlueprintCallable)
    USoundCue* GetSoundCueForWakeupTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPostProcessComponent* GetPostProcessMain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPhotoModeHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedPhotoModeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetCurrentBlendTrigger();
    
    UFUNCTION(BlueprintCallable)
    void EndRestTimelapse();
    
    UFUNCTION(BlueprintCallable)
    void BeginRestTimelapse();
    
};

