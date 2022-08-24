#pragma once
#include "CoreMinimal.h"
#include "VoiceOverData.h"
#include "Components/ActorComponent.h"
#include "VoiceOverLoadFinishedDynamicDelegateDelegate.h"
#include "VoiceOverComponentSetupData.h"
#include "VoiceOverPlaybackStartedDynamicDelegateDelegate.h"
#include "OEIVoiceOverComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OEIVOICEOVER_API UOEIVoiceOverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* FacialAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoiceOverComponentSetupData SetupData;
    
public:
    UOEIVoiceOverComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Stop(float FadeOutDuration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Resume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Prepare(const FVoiceOverData& Data, const FVoiceOverLoadFinishedDynamicDelegate& LoadingFinished) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Play(const FVoiceOverData& Data, float StartTime, const FVoiceOverPlaybackStartedDynamicDelegate& PlaybackStarted) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Pause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CancelPrepared() const;
    
};

