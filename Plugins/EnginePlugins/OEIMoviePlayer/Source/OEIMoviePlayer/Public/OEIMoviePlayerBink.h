#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OEIMediaPlayerInterface.h"
#include "OEIMoviePlayerBink.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UOEISubtitleData;

UCLASS(Blueprintable)
class UOEIMoviePlayerBink : public UObject, public IOEIMediaPlayerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* BinkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEISubtitleData* Subtitles;
    
public:
    UOEIMoviePlayerBink();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnMovieLoaded(const FString& OpenedUrl) override PURE_VIRTUAL(OnMovieLoaded,);
    
    UFUNCTION()
    void OnMovieFinished_Impl() override PURE_VIRTUAL(OnMovieFinished_Impl,);
    
};

