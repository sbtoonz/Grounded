#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MusicManager.generated.h"

class UAudioComponent;
class UMusicTrackData;
class UMusicSettings;

UCLASS(BlueprintType)
class MAINE_API UMusicManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UMusicTrackData* CurrentTrack;
    
    UPROPERTY(Transient)
    UMusicTrackData* CurrentOverlayTrack;
    
    UPROPERTY(Transient)
    UMusicTrackData* ScriptedTrack;
    
    UPROPERTY(Transient)
    UMusicSettings* DefaultMusicSettings;
    
    UPROPERTY(Transient)
    UMusicSettings* LevelMusicSettings;
    
    UPROPERTY(Transient)
    UMusicSettings* OverrideMusicSettings;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* MusicComponent;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* OverlayMusicComponent;
    
    UPROPERTY(Transient)
    bool IsMoviePlaying;
    
    UPROPERTY(Transient)
    float TimelapseStartTime;
    
public:
    UMusicManager();
    UFUNCTION(BlueprintCallable)
    void SetScriptedTrack(UMusicTrackData* TrackData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearScriptedTrack();
    
};

