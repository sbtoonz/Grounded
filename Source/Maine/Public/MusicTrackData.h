#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioFaderCurve -FallbackName=EAudioFaderCurve
#include "MusicTrackData.generated.h"

class USoundBase;

UCLASS()
class MAINE_API UMusicTrackData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<USoundBase> Track;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeInTime;
    
    UPROPERTY(EditDefaultsOnly)
    float FadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    EAudioFaderCurve FadeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool ImmediateEndOnLoad;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> SeekTimes;
    
    UMusicTrackData();
};

