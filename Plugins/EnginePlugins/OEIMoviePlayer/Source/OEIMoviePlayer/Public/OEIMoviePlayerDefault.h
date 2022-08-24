#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OEIMediaPlayerInterface.h"
#include "OEIMoviePlayerDefault.generated.h"

class UMediaSoundComponent;
class UOEISubtitleData;
class UMediaTexture;
class APawn;

UCLASS(Blueprintable)
class UOEIMoviePlayerDefault : public UObject, public IOEIMediaPlayerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEISubtitleData* Subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* MediaOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
public:
    UOEIMoviePlayerDefault();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnMovieLoaded(const FString& OpenedUrl) override PURE_VIRTUAL(OnMovieLoaded,);
    
    UFUNCTION()
    void OnMovieFinished_Impl() override PURE_VIRTUAL(OnMovieFinished_Impl,);
    
};

