#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "ESubtitleVerbositySettings.h"
#include "SubtitleWindow.generated.h"

class APhotoPawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API USubtitleWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    USubtitleWindow();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowSubtitles();
    
    UFUNCTION(BlueprintCallable)
    void OnSubtitleVerbosityChanged(ESubtitleVerbositySettings SubtitleVerbosity);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeExited();
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnGameUIShowSubtitlesChanged(bool bShowSubtitles);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShowSubtitlesChanged(bool bShowSubtitles);
    
};

