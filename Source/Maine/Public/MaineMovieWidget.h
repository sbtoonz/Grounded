#pragma once
#include "CoreMinimal.h"
#include "WindowWidget.h"
#include "MaineMovieWidget.generated.h"

class UTexture2D;
class UOEIMoviePlayerWidget;
class UHorizontalBox;
class APlayerState;
class UProgressBar;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMaineMovieWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOEIMoviePlayerWidget* MoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SkipWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBarFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowSkipWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> CharacterImages;
    
public:
    UMaineMovieWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCanceledSkip(APlayerState* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnMovieOpened();
    
    UFUNCTION(BlueprintCallable)
    void OnMovieFailed();
    
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersSkipped();
    
};

