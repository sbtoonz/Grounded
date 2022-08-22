#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BaseCreditsTextWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBaseCreditsTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export)
    UTextBlock* LineText;
    
    UBaseCreditsTextWidget();
};

