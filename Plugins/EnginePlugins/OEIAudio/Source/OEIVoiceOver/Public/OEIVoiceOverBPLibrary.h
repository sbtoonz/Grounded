#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoiceOverData.h"
#include "VoiceOverPlaybackStartedDynamicDelegateDelegate.h"
#include "OEIVoiceOverBPLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UOEIVoiceOverBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIVoiceOverBPLibrary();
    UFUNCTION(BlueprintCallable)
    static bool StopVoiceOver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool ResumeVoiceOver(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayVoiceOver(AActor* Actor, const FVoiceOverData& Data, float StartTime, const FVoiceOverPlaybackStartedDynamicDelegate& PlaybackStarted);
    
    UFUNCTION(BlueprintCallable)
    static bool PauseVoiceOver(AActor* Actor);
    
};

