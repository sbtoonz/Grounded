#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "MaineRichTextBlock.generated.h"

UCLASS()
class MAINE_API UMaineRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UMaineRichTextBlock();
protected:
    UFUNCTION()
    void OnGlobalColorChanged();
    
};

