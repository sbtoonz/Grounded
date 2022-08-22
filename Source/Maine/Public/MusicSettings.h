#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ConditionalMusicTrack.h"
#include "MusicSettings.generated.h"

class UMusicTrackData;

UCLASS()
class MAINE_API UMusicSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* DefaultTrack;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FConditionalMusicTrack> ConditionalTracks;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* NightTrack;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FConditionalMusicTrack> ConditionalNightTracks;
    
    UPROPERTY(EditDefaultsOnly)
    UMusicTrackData* CombatTrack;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FConditionalMusicTrack> ConditionalCombatTracks;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverlayCombatMusic;
    
public:
    UMusicSettings();
};

