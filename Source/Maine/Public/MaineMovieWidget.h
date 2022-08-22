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

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMaineMovieWidget : public UWindowWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UOEIMoviePlayerWidget* MoviePlayer;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UHorizontalBox* SkipWidgets;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBarOne;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBarTwo;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBarThree;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UProgressBar* ProgressBarFour;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowSkipWidgets;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UTexture2D*> CharacterImages;
    
public:
    UMaineMovieWidget();
protected:
    UFUNCTION()
    void OnPlayerCanceledSkip(APlayerState* Player);
    
    UFUNCTION()
    void OnMovieOpened();
    
    UFUNCTION()
    void OnMovieFailed();
    
    UFUNCTION()
    void OnAllPlayersSkipped();
    
};

