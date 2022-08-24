#pragma once
#include "CoreMinimal.h"
#include "OnMovieFailedToOpenDelegate.h"
#include "Blueprint/UserWidget.h"
#include "OnMovieEndDelegate.h"
#include "OnMovieResourceLoadedDelegate.h"
#include "OEIMoviePlayerBase.generated.h"

class UImage;
class UObject;
class UOverlay;
class UOEIMediaPlayerInterface;
class IOEIMediaPlayerInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OEIMOVIEPLAYER_API UOEIMoviePlayerBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieEnd OnMovieEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieFailedToOpen OnMovieFailedToOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieResourceLoaded OnMovieResourceLoaded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* MovieDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOverlay* MovieOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoopVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IOEIMediaPlayerInterface> MediaPlayer;
    
public:
    UOEIMoviePlayerBase();
    UFUNCTION(BlueprintCallable)
    void StopMovie(bool bWasSkipped);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartDelayedPlayback();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLooping(bool bShouldLoop);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMovie();
    
    UFUNCTION(BlueprintCallable)
    void PlayMovieFromMediaObjectDelayed(UObject* InMediaObject, float DelayTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayMovieFromMediaObject(UObject* InMediaObject);
    
    UFUNCTION(BlueprintCallable)
    void PauseMovie();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMovieSourceOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearMovie();
    
};

