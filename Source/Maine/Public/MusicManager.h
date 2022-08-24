#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MusicManager.generated.h"

class UAudioComponent;
class UMusicTrackData;
class UMusicSettings;

UCLASS(Blueprintable)
class MAINE_API UMusicManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CurrentTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* CurrentOverlayTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicTrackData* ScriptedTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* DefaultMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* LevelMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMusicSettings* OverrideMusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* OverlayMusicComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMoviePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

