#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "ESubtitleVerbositySettings.h"
#include "SubtitleWindow.generated.h"

class APhotoPawn;

UCLASS(Abstract, EditInlineNew)
class MAINE_API USubtitleWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    USubtitleWindow();
protected:
    UFUNCTION(BlueprintPure)
    bool ShouldShowSubtitles();
    
    UFUNCTION()
    void OnSubtitleVerbosityChanged(ESubtitleVerbositySettings SubtitleVerbosity);
    
    UFUNCTION()
    void OnPhotoModeExited();
    
    UFUNCTION()
    void OnPhotoModeEntered(APhotoPawn* PhotoPawn);
    
    UFUNCTION()
    void OnGameUIShowSubtitlesChanged(bool bShowSubtitles);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleShowSubtitlesChanged(bool bShowSubtitles);
    
};

