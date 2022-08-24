#pragma once
#include "CoreMinimal.h"
#include "OEISubtitleEntryWidget.h"
#include "MaineSubtitleEntryWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UMaineSubtitleEntryWidget : public UOEISubtitleEntryWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* EntryTextBlock;
    
public:
    UMaineSubtitleEntryWidget();
};

