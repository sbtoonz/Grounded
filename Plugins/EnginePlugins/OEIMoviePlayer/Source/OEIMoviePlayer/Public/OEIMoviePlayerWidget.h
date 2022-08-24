#pragma once
#include "CoreMinimal.h"
#include "OEIMoviePlayerBase.h"
#include "OEIMoviePlayerWidget.generated.h"

class UBackgroundBlur;
class UOEISubtitleManagerWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OEIMOVIEPLAYER_API UOEIMoviePlayerWidget : public UOEIMoviePlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* SkipContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOEISubtitleManagerWidget* SubtitleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBetweenInputs;
    
public:
    UOEIMoviePlayerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitiateFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitiateFadeIn();
    
};

