#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"
#include "OEISubtitleManagerWidget.generated.h"

class UVerticalBox;
class UOEISubtitleEntryWidget;
class UOEIMovieSubtitleData;
class UOEISubtitleData;

UCLASS(Blueprintable, EditInlineNew)
class OEIMOVIEPLAYER_API UOEISubtitleManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVerticalBox* SubtitleVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOEIMovieSubtitleData* MasterSubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOEISubtitleEntryWidget> SubtitleEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOEISubtitleData* CurrentSubtitleData;
    
public:
    UOEISubtitleManagerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetShowCinematicSubtitles(bool bVisible);
    
};

