#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIMoviePlayer -ObjectName=OEISubtitleEntryWidget -FallbackName=OEISubtitleEntryWidget
#include "MaineSubtitleEntryWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UMaineSubtitleEntryWidget : public UOEISubtitleEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, Export)
    UTextBlock* EntryTextBlock;
    
public:
    UMaineSubtitleEntryWidget();
};

