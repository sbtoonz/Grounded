#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionalMusicTrack.h"
#include "MusicSettings.generated.h"

class UMusicTrackData;

UCLASS(Blueprintable)
class MAINE_API UMusicSettings : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* DefaultTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalMusicTrack> ConditionalTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* NightTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalMusicTrack> ConditionalNightTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CombatTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalMusicTrack> ConditionalCombatTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlayCombatMusic;
    
public:
    UMusicSettings();
};

