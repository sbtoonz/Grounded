#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "MaineRichTextBlock.generated.h"

UCLASS(Blueprintable)
class MAINE_API UMaineRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
    UMaineRichTextBlock();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGlobalColorChanged();
    
};

